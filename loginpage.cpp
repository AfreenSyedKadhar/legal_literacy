#include "loginpage.h"
#include "ui_loginpage.h"
#include <QtSql/QSql>
#include <QSqlDatabase>

loginpage::loginpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginpage)
{
    ui->setupUi(this);
    QSqlDatabase login = QSqlDatabase::addDatabase("QSQLITE");
    login.setDatabaseName("C:/Users/Karishhaju/OneDrive/Desktop/legal_literacy/legal_litracy.db");
}

loginpage::~loginpage()
{
    delete ui;
}

void loginpage::on_submit_login_clicked()
{
    QString email=ui->email_tbox->text();
    QString password=ui->password_tbox->text();

    QSqlDatabase login;
}
