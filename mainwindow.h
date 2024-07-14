#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "userdialog.h"
#include "admindialog.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    UserDialog *userDialog;
    AdminDialog *adminDialog;
};

#endif // MAINWINDOW_H
