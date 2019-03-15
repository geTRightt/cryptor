#include "logindlg.h"
#include "ui_logindlg.h"

loginDlg::loginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("LOGIN...");
    this->move(0,1600-272);

    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/
}

loginDlg::~loginDlg()
{
    delete ui;
}

void loginDlg::on_loginButton_clicked()
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

    if(ui->namelineEdit->text().trimmed()==usr && ui->passwdlineEdit->text().trimmed()==pawd)
     {
       QDialog::accept();
    }
    else
    {
        QMessageBox::warning(this,"Waring","Please enter right name and passwd!");
    }

}

void loginDlg::on_setButton_clicked()
{
    setDlg setnew(this);
    if(setnew.exec()==QDialog::Accepted)
    {
        QString usr  = setnew.sendNewUsrSlot();
        QString paws = setnew.sendNewPawdSlot();
        QString gth  = "!";
        QString wh   = "?";
        QString newline = gth;
        newline.append(usr);
        newline.append(gth);
        newline.append(wh);
        newline.append(paws);
        newline.append(wh);
        //qDebug()<<newline;

        QFile file("/home/wj/MyProject/Qt_cryptor/CryptorPro_Test2/usr_and_passwd");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            //QMessageBox::warning(this,"failed open","failed open!");
            return;

        }

        QTextStream out(&file);
        out<<newline;
        file.close();

    }
}
