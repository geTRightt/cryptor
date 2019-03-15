#include "setdlg.h"
#include "ui_setdlg.h"

setDlg::setDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setDlg)
{
    ui->setupUi(this);
}

setDlg::~setDlg()
{
    delete ui;
}

void setDlg::on_confirmButton_clicked()
{
    QFile file("/home/wj/MyProject/Qt_cryptor/CryptorPro_Test2/usr_and_passwd");
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        //QMessageBox::warning(this,"failed open","failed open!");
        return;

    }

    QTextStream in(&file);
    QString line ;
    while (!in.atEnd())
    {
         line = in.readLine();
         //qDebug()<<line;
     }
    QString index1 = "!";
    QString index2 = "?";
    int num1=line.indexOf(index1,1);
    //qDebug()<<num1;
    int num2=line.indexOf(index2,num1+2);
    //qDebug()<<num2;
    QString usr  = line.mid(1,num1-1);
    //qDebug()<<usr;
    QString pawd = line.mid(num1+2,num2-num1-2);
    //qDebug()<<pawd;
    file.close();
    if(ui->usrlineEdit->text().trimmed()==usr && ui->passwdlineEdit->text().trimmed()==pawd)
    {
      QDialog::accept();
    }
    else
    {
      QMessageBox::warning(this,"Error usr name or password!","Please enter right usr name and password!");
    }
}

void setDlg::on_cancelButton_clicked()
{
    this->close();
}

QString setDlg::sendNewUsrSlot()
{
    QString usr = ui->newusrlineEdit->text();
    return usr;
}

QString setDlg::sendNewPawdSlot()
{
    QString pawd = ui->newpasswdlineEdit->text();
    return pawd;
}
