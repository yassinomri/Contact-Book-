#ifndef APPELDIALOG_H
#define APPELDIALOG_H

#include <QDialog>
#include <QSqlQueryModel>
#include <QDebug>
#include <QTime>

namespace Ui {
class AppelDialog;
}

class AppelDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AppelDialog(QWidget *parent = nullptr);
    ~AppelDialog();
    void populateComboBoxOnce() ;
    void updateContactData(const QString &name);

private slots:
    void on_comboBox_currentTextChanged(const QString &arg1);
    void startCall();
    void endCall();
    void updateTimer();

    void on_call_button_clicked();
    void on_uncall_button_clicked();


private:
    Ui::AppelDialog *ui;
    QTimer *timer;
    QTime callStartTime;
};

#endif // APPELDIALOG_H
