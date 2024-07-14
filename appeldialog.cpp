#include "appeldialog.h"
#include "ui_appeldialog.h"
#include "dbconnexion.h"
#include <QString>
#include <QtSql>
#include <QtWidgets>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QComboBox>
#include <QDateTime>
#include <QTimer>
#include <QDateTime>

AppelDialog::AppelDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AppelDialog)
{
    ui->setupUi(this);

    //Database connexion
    dbconnexion conn;
    if(!conn.connOpen()){
        qDebug()<<"Failed to OPEN the database";
        return;}
    QSqlDatabase db = conn.get_mydb();
    QSqlQuery query("SELECT nom FROM carnet", db);
    while (query.next()) {
        QString name = query.value(0).toString();
        ui->comboBox->addItem(name);
        qDebug() << "Number of items added to combobox:" << ui->comboBox->count();
    }
    conn.connClose();

    // Initialize timer
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &AppelDialog::updateTimer);
}

AppelDialog::~AppelDialog()
{
    delete ui;
}

void AppelDialog::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->name->setText(arg1);
    updateContactData(arg1);
}


void AppelDialog::updateContactData(const QString &name)
{
    // Prepare the query to select data for the selected name
    QSqlQuery qry;
    qry.prepare("SELECT * FROM carnet WHERE nom = ?");
    qry.addBindValue(name);
    if (!qry.exec()) {
        qDebug() << "Error executing query:" << qry.lastError().text();
        return;
    }
    if (qry.next()) {
        QString address = qry.value(2).toString();
        QString tel = qry.value(3).toString();
        QString email = qry.value(4).toString();
        ui->tel->setText(tel);
        ui->email->setText(email);
        ui->address->setText(address);
    } else {
        qDebug() << "No data found for name:" << name;
    }
}



void AppelDialog::on_call_button_clicked()
{
    callStartTime = QTime::currentTime();
    timer->start(1000);
    ui->call_button->setEnabled(false);
    ui->uncall_button->setEnabled(true);

    //variable declaration
    QString name = ui->comboBox->currentText();
    QString id, tel;

    //database connexion
    dbconnexion conn;
    if (!conn.connOpen()) {
        qDebug() << "Failed to open the database";
        return;
    }

    // Prepare the query to select idcontact from carnet
    QSqlQuery qry1;
    qry1.prepare("SELECT * FROM carnet WHERE nom = ?");
    qry1.addBindValue(name);
    if (!qry1.exec()) {
        qDebug() << "Error executing query:" << qry1.lastError().text();
        return;
    }
    if (qry1.next()) {
        id = qry1.value(0).toString();
        tel = qry1.value(3).toString();
    } else {
        qDebug() << "No matching record found in carnet for name:" << name;
        return;
    }
    if (id.isEmpty()) {
        qDebug() << "ID contact is empty. Record not found in carnet for name:" << name;
        return;
    }

    // Prepare the query to insert into appel table
    QSqlQuery qry2;
    qry2.prepare("INSERT INTO appel (debut, fin, dure, nom, tel, id) VALUES (?, ?, ?, ?, ?, ?)");
    qry2.addBindValue(callStartTime.toString(Qt::ISODate));
    qry2.addBindValue("");
    qry2.addBindValue("");
    qry2.addBindValue(name);
    qry2.addBindValue(tel);
    qry2.addBindValue(id);

    if (!qry2.exec()) {
        qDebug() << "Error executing query:" << qry2.lastError().text();
        return;
    } else {
        qDebug() << "Data inserted successfully!";
    }
}




void AppelDialog::on_uncall_button_clicked()
{
    timer->stop();
    int elapsedSeconds = callStartTime.secsTo(QTime::currentTime());
    ui->timerLabel->setText("Call ended.\nDuration: " + QString::number(elapsedSeconds) + " seconds");
    ui->call_button->setEnabled(true);
    ui->uncall_button->setEnabled(false);

    // Update the current call row in the database
    dbconnexion conn;
    if (!conn.connOpen()) {
        qDebug() << "Failed to open the database";
        return;
    }

    QSqlQuery updateQuery;
    updateQuery.prepare("UPDATE appel SET fin = ?, dure = ? WHERE debut = ?");
    updateQuery.addBindValue(QTime::currentTime().toString(Qt::ISODate)); // Set current time as end time
    updateQuery.addBindValue(QString::number(elapsedSeconds)); // Duration in seconds
    updateQuery.addBindValue(callStartTime.toString(Qt::ISODate)); // Use start time as the condition
    if (!updateQuery.exec()) {
        qDebug() << "Error updating call record:" << updateQuery.lastError().text();
        return;
    } else {
        qDebug() << "Call record updated successfully!";
    }
}

void AppelDialog::updateTimer() {
    // Update the timer display
    int elapsedSeconds = callStartTime.secsTo(QTime::currentTime());
    QTime displayTime(0, 0, 0);
    displayTime = displayTime.addSecs(elapsedSeconds);
    QString timerText = displayTime.toString("hh:mm:ss");
    ui->timerLabel->setText("Calling...\nDuration: " + timerText);
}

void AppelDialog::startCall() {
    // Start the timer and update UI
    callStartTime = QTime::currentTime();
    timer->start(1000); // Update every second
}

void AppelDialog::endCall() {
    // Stop the timer and update UI
    timer->stop();
    int elapsedSeconds = callStartTime.secsTo(QTime::currentTime());
    QTime displayTime(0, 0, 0);
    displayTime = displayTime.addSecs(elapsedSeconds);
    QString timerText = displayTime.toString("hh:mm:ss");
    ui->timerLabel->setText("Call ended. Duration: " + timerText);
}
