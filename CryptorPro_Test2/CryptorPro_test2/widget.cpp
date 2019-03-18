#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    groupButton1=new QButtonGroup(this);
    groupButton1->addButton(ui->ffradioButton,0);
    groupButton1->addButton(ui->tfradioButton,1);
    groupButton1->addButton(ui->pradioButton,2);
    ui->ffradioButton->setChecked(true);

    this->setWindowTitle("Option Selection");
    this->move(0,1600-272);//
    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/
    QObject::connect(ui->cancelButton,SIGNAL(clicked(bool)),qApp,SLOT(quit()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_nextButton_clicked()
{
    switch (groupButton1->checkedId()) {
    case 0:
        filefolder=new filefoldermainwindow(this);
        filefolder->setAttribute(Qt::WA_DeleteOnClose);
        filefolder->show();
        this->hide();
        QObject::connect(filefolder,SIGNAL(closeSignal()),this,SLOT(show()));
        break;
    case 1:
        file=new FMainWindow(this);
        file->setAttribute(Qt::WA_DeleteOnClose);
        file->show();
        this->hide();
        QObject::connect(file,SIGNAL(closeSignal()),this,SLOT(show()));
        break;
    case 2:
        //view=new pMainWindow(this);
        //view->show();
        pic=new pMainWindow(this);
        pic->setAttribute(Qt::WA_DeleteOnClose);
        pic->show();
        this->hide();
        QObject::connect(pic,SIGNAL(closeSignal()),this,SLOT(show()));
        //this->close();
    //default:
       // break;
    }
}
