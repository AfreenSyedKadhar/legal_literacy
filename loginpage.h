#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDebug>
#include <QDialog>
#include <QtSql/QSql>
#include <QFileInfo>

namespace Ui {
class loginpage;
}

class loginpage : public QDialog
{
    Q_OBJECT

public:
    explicit loginpage(QWidget *parent = nullptr);
    ~loginpage();

private slots:
    void on_submit_login_clicked();

private:
    Ui::loginpage *ui;
};

#endif // LOGINPAGE_H
