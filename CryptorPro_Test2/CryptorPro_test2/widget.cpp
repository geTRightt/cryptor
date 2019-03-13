#include "widget.h"
#include "ui_widget.h"
#include<pmainwindow.h>

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

        break;
    case 1:

        break;
    case 2:
        //view=new pMainWindow(this);
        //view->show();
        pMainWindow *pic=new pMainWindow;
        pic->show();
        this->close();
    //default:
       // break;
    }
}
