#include "paradlg.h"
#include "ui_paradlg.h"

paraDlg::paraDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paraDlg)
{
    ui->setupUi(this);
    /*set evenfilter*/

    //this->move(175,1600-261);

    //this->setMaximumSize(250,250);
    //this->setMinimumSize(250,250);
    /*set evenfilter*/
    ui->xlineEdit->installEventFilter(this);
    ui->ylineEdit->installEventFilter(this);
    ui->zlineEdit->installEventFilter(this);
    ui->wlineEdit->installEventFilter(this);
    /*lineEdit flag*/
    lineEditFlag=0;
    /*keyboard*/
    keyboard=new keyboardlg(this);
    /*receive input string*/
    QObject::connect(keyboard,SIGNAL(sendstringSignal(QString)),this,SLOT(confirmstringSlot(QString)));
}

paraDlg::~paraDlg()
{
    delete ui;
}

void paraDlg::on_confirmButton_clicked()
{
    //QString x0 =ui->xlineEdit->text();
    //QString y0 =ui->ylineEdit->text();
    //QString z0 =ui->zlineEdit->text();
    //QString w0 =ui->wlineEdit->text();
    if(ui->xlineEdit->text().trimmed().isEmpty()||ui->ylineEdit->text().trimmed().isEmpty()||ui->zlineEdit->text().trimmed().isEmpty()||ui->wlineEdit->text().trimmed().isEmpty())
    {
        QMessageBox::warning(this,"Waring Message!","Please provide four relevant paramenters!");
    }
    else
    {
      QDialog::accept();
    }
}

void paraDlg::on_cancelButton_clicked()
{
    this->close();
}

double paraDlg::sendX0Slot()
{
    double x0=ui->xlineEdit->text().toDouble();
    return x0;
}

double paraDlg::sendY0Slot()
{
    double y0=ui->ylineEdit->text().toDouble();
    return y0;
}

double paraDlg::sendZ0Slot()
{
    double z0=ui->zlineEdit->text().toDouble();
    return z0;
}

double paraDlg::sendW0Slot()
{
    double w0=ui->wlineEdit->text().toDouble();
    return w0;
}

bool paraDlg::eventFilter(QObject *watched, QEvent *event)
{
    if((watched==ui->xlineEdit)&&(event->type()==QEvent::MouseButtonPress))
    {
        this->showKeyboardSlot();
        lineEditFlag=0;
    }
    else if((watched==ui->ylineEdit)&&(event->type()==QEvent::MouseButtonPress))
    {
        this->showKeyboardSlot();
        lineEditFlag=1;
    }
    else if((watched==ui->zlineEdit)&&(event->type()==QEvent::MouseButtonPress))
    {
        this->showKeyboardSlot();
        lineEditFlag=2;
    }
    else if((watched==ui->wlineEdit)&&(event->type()==QEvent::MouseButtonPress))
    {
        this->showKeyboardSlot();
        lineEditFlag=3;
    }
    return QWidget::eventFilter(watched,event);
}

void paraDlg::showKeyboardSlot()
{
    keyboard->show();
}

void paraDlg::confirmstringSlot(QString inpuText)
{
    if(lineEditFlag==0)
    {
         ui->xlineEdit->setText(inpuText);
    }
   else if(lineEditFlag==1)
    {
         ui->ylineEdit->setText(inpuText);
    }
    else if(lineEditFlag==2)
     {
          ui->zlineEdit->setText(inpuText);
     }
    else if(lineEditFlag==3)
     {
          ui->wlineEdit->setText(inpuText);
     }
}
