#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include"dbconnexion.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    dbconnexion conn;
    ui->setupUi(this);
    QPixmap pix("./Qt_logo.png");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    if (!conn.connOpen())
        ui ->status->setText("Failed to open the database !");
    else
        ui ->status->setText("Connected to database !"); 
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    dbconnexion conn;
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString role_saisi;

    if (username.isEmpty() || password.isEmpty()) {
          QMessageBox::warning(this, "Login", "Please enter both username and password.");
          return;
      }

    if (!conn.connOpen()) {
        qDebug() << "Failed to connect to database:";
        QMessageBox::critical(this, "Error", "Failed to connect to database. Please try again later.");
        return;
    }

    if(ui->radioButton_user->isChecked()) { role_saisi = "user"; }
    else if (ui->radioButton_admin->isChecked()) { role_saisi = "admin"; }
    else {
        QMessageBox::warning(this,"Login","You must choose between : admin/user ");
        return;
    }

    conn.connOpen();
    QSqlQuery qry ;
    qry.prepare("SELECT * FROM login WHERE User_name='" + username + "'and PSW='" + password + "' and Role='" + role_saisi + "'");

    if (!qry.exec("SELECT * FROM login")) {
         qDebug() << "Erreur lors de l'exécution de la requête : " << qry.lastError().text();
         return;
    };

    if (qry.exec("SELECT * FROM login WHERE User_name='" + username + "'and PSW='" + password + "' and Role='" + role_saisi + "'")) {
         int count=0;
         while (qry.next()){
              count++;
            }
             if (count==1 && role_saisi == "user"){
                 ui->status->setText("Username and Password are correct");
                 conn.connClose();
                 userDialog = new UserDialog(this);
                 userDialog->show();
                 }
             else if (count==1 && role_saisi == "admin") {
                 ui->status->setText("Username and Password are correct");
                 conn.connClose();
                 adminDialog = new AdminDialog(this);
                 adminDialog->show();
             }
             else{
                     QMessageBox::warning(this,"Login","Username or Password is incorrect ! ");
                     return;
                 }
  }
}
