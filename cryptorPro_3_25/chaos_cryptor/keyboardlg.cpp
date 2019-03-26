#include "keyboardlg.h"
#include "ui_keyboardlg.h"
#include <QPalette>
#include <QtGui>

keyboardlg::keyboardlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::keyboardlg)
{
    ui->setupUi(this);

    groupKeyBoardButton=new QButtonGroup(this);
    groupKeyBoardButton->addButton(ui->pushButton_0,0);
    button_vector.push_back(ui->pushButton_0);
    groupKeyBoardButton->addButton(ui->pushButton_1,1);
    button_vector.push_back(ui->pushButton_1);
    groupKeyBoardButton->addButton(ui->pushButton_2,2);
    button_vector.push_back(ui->pushButton_2);
    groupKeyBoardButton->addButton(ui->pushButton_3,3);
    button_vector.push_back(ui->pushButton_3);
    groupKeyBoardButton->addButton(ui->pushButton_4,4);
    button_vector.push_back(ui->pushButton_4);
    groupKeyBoardButton->addButton(ui->pushButton_5,5);
    button_vector.push_back(ui->pushButton_5);
    groupKeyBoardButton->addButton(ui->pushButton_6,6);
    button_vector.push_back(ui->pushButton_6);
    groupKeyBoardButton->addButton(ui->pushButton_7,7);
    button_vector.push_back(ui->pushButton_7);
    groupKeyBoardButton->addButton(ui->pushButton_8,8);
    button_vector.push_back(ui->pushButton_8);
    groupKeyBoardButton->addButton(ui->pushButton_9,9);
    button_vector.push_back(ui->pushButton_9);
    groupKeyBoardButton->addButton(ui->pushButton_10,10);
    button_vector.push_back(ui->pushButton_10);
    groupKeyBoardButton->addButton(ui->pushButton_11,11);
    button_vector.push_back(ui->pushButton_11);
    groupKeyBoardButton->addButton(ui->pushButton_12,12);
    button_vector.push_back(ui->pushButton_12);
    groupKeyBoardButton->addButton(ui->pushButton_13,13);
    button_vector.push_back(ui->pushButton_13);
    groupKeyBoardButton->addButton(ui->pushButton_14,14);
    button_vector.push_back(ui->pushButton_14);
    groupKeyBoardButton->addButton(ui->pushButton_15,15);
    button_vector.push_back(ui->pushButton_15);
    groupKeyBoardButton->addButton(ui->pushButton_16,16);
    button_vector.push_back(ui->pushButton_16);
    groupKeyBoardButton->addButton(ui->pushButton_17,17);
    button_vector.push_back(ui->pushButton_17);
    groupKeyBoardButton->addButton(ui->pushButton_18,18);
    button_vector.push_back(ui->pushButton_18);
    groupKeyBoardButton->addButton(ui->pushButton_19,19);
    button_vector.push_back(ui->pushButton_19);
    groupKeyBoardButton->addButton(ui->pushButton_20,20);
    button_vector.push_back(ui->pushButton_20);
    groupKeyBoardButton->addButton(ui->pushButton_21,21);
    button_vector.push_back(ui->pushButton_21);
    groupKeyBoardButton->addButton(ui->pushButton_22,22);
    button_vector.push_back(ui->pushButton_22);
    groupKeyBoardButton->addButton(ui->pushButton_23,23);
    button_vector.push_back(ui->pushButton_23);
    groupKeyBoardButton->addButton(ui->pushButton_24,24);
    button_vector.push_back(ui->pushButton_24);
    groupKeyBoardButton->addButton(ui->pushButton_25,25);
    button_vector.push_back(ui->pushButton_25);
    groupKeyBoardButton->addButton(ui->pushButton_26,26);
    button_vector.push_back(ui->pushButton_26);
    groupKeyBoardButton->addButton(ui->pushButton_27,27);
    button_vector.push_back(ui->pushButton_27);
    groupKeyBoardButton->addButton(ui->pushButton_28,28);
    button_vector.push_back(ui->pushButton_28);
    groupKeyBoardButton->addButton(ui->pushButton_29,29);
    button_vector.push_back(ui->pushButton_29);
    groupKeyBoardButton->addButton(ui->pushButton_30,30);
    button_vector.push_back(ui->pushButton_30);
    groupKeyBoardButton->addButton(ui->pushButton_31,31);
    button_vector.push_back(ui->pushButton_31);
    groupKeyBoardButton->addButton(ui->pushButton_32,32);
    button_vector.push_back(ui->pushButton_32);
    groupKeyBoardButton->addButton(ui->pushButton_33,33);
    button_vector.push_back(ui->pushButton_33);
    groupKeyBoardButton->addButton(ui->pushButton_34,34);
    button_vector.push_back(ui->pushButton_34);
    groupKeyBoardButton->addButton(ui->pushButton_35,35);
    button_vector.push_back(ui->pushButton_35);
    groupKeyBoardButton->addButton(ui->pushButton_36,36);
    button_vector.push_back(ui->pushButton_36);
    groupKeyBoardButton->addButton(ui->pushButton_37,37);
    button_vector.push_back(ui->pushButton_37);
    groupKeyBoardButton->addButton(ui->pushButton_38,38);
    button_vector.push_back(ui->pushButton_38);
    groupKeyBoardButton->addButton(ui->pushButton_39,39);
    button_vector.push_back(ui->pushButton_39);
    groupKeyBoardButton->addButton(ui->pushButton_40,40);
    button_vector.push_back(ui->pushButton_40);
    groupKeyBoardButton->addButton(ui->pushButton_41,41);
    button_vector.push_back(ui->pushButton_41);

    QObject::connect(groupKeyBoardButton,SIGNAL(buttonClicked(int)),this,SLOT(buttonconfirmSlot(int)));
    //this->setWindowFlags(Qt::WindowStaysOnTopHint);
}

keyboardlg::~keyboardlg()
{
    delete ui;
}

void keyboardlg::buttonconfirmSlot(int num)
{
    if((num!=10)&&(num!=11)&&(num!=32))
    {
        /*lineEdit_window->insert(button_vector.at(gemfield-1)->text());*/
        ui->lineEdit->insert(button_vector.at(num)->text());
    }
    else if(num==10)
    {
        /*lineEdit_window->insert(button_vector.at(gemfield-1)->text());*/
        this->deletestringSlot();
        return;
    }
    else if(num==11)
    {
       this->affirmstringSlot();
       ui->lineEdit->clear();
       return;
    }
}

void keyboardlg::affirmstringSlot()
{
   emit sendstringSignal(ui->lineEdit->text());               //发送信号给界面
   this->hide();
}

void keyboardlg::deletestringSlot()
{
    event=new QKeyEvent(QEvent::KeyPress, Qt::Key_Backspace, Qt::NoModifier);
    ui->lineEdit->setFocus();
    QApplication::sendEvent(focusWidget(),event);
}
