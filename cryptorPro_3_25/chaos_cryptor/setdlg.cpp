#include "setdlg.h"
#include "ui_setdlg.h"

setDlg::setDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setDlg)
{
    ui->setupUi(this);

    /*set evenfilter*/
    ui->usrlineEdit->installEventFilter(this);
    ui->passwdlineEdit->installEventFilter(this);
    ui->newusrlineEdit->installEventFilter(this);
    ui->newpasswdlineEdit->installEventFilter(this);
    /*lineEdit flag*/
    lineEditFlag=0;
    /*keyboard*/
    keyboard=new keyboardlg(this);
    /*receive input string*/
     QObject::connect(keyboard,SIGNAL(sendstringSignal(QString)),this,SLOT(confirmstringSlot(QString)));
}

setDlg::~setDlg()
{
    delete ui;
}

void setDlg::on_confirmButton_clicked()
{
    QString upDir;
    upDir=QDir::currentPath();
    upDir.append("/usr_and_passwd");
    QFile file(upDir);
    //qDebug()<<upDir;

    //QFile file("/home/wj/MyProject/Qt_cryptor/CryptorPro_Test2/usr_and_passwd");
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
/*evenfilter lineEdit*/
bool setDlg::eventFilter(QObject *watched, QEvent *event)
{
    if((watched==ui->usrlineEdit)&&(event->type()==QEvent::MouseButtonPress))
    {
        this->showKeyboardSlot();
        lineEditFlag=0;
    }
    else if((watched==ui->passwdlineEdit)&&(event->type()==QEvent::MouseButtonPress))
    {
        this->showKeyboardSlot();
        lineEditFlag=1;
    }
    else if((watched==ui->newusrlineEdit)&&(event->type()==QEvent::MouseButtonPress))
    {
        this->showKeyboardSlot();
        lineEditFlag=2;
    }
    else if((watched==ui->newpasswdlineEdit)&&(event->type()==QEvent::MouseButtonPress))
    {
        this->showKeyboardSlot();
        lineEditFlag=3;
    }
     return QWidget::eventFilter(watched,event);
}

void setDlg::showKeyboardSlot()
{
    keyboard->show();
}

void setDlg::confirmstringSlot(QString inpuText)
{
    if(lineEditFlag==0)
    {
         ui->usrlineEdit->setText(inpuText);
    }
   else if(lineEditFlag==1)
    {
         ui->passwdlineEdit->setText(inpuText);
    }
    else if(lineEditFlag==2)
     {
          ui->newusrlineEdit->setText(inpuText);
     }
    else if(lineEditFlag==3)
     {
          ui->newpasswdlineEdit->setText(inpuText);
     }
}
