#include "paradlg.h"
#include "ui_paradlg.h"

paraDlg::paraDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::paraDlg)
{
    ui->setupUi(this);
    //this->move(175,1600-261);

    //this->setMaximumSize(250,250);
    //this->setMinimumSize(250,250);
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

int paraDlg::sendX0Slot()
{
    int x0=ui->xlineEdit->text().toInt();
    return x0;
}

int paraDlg::sendY0Slot()
{
    int y0=ui->ylineEdit->text().toInt();
    return y0;
}

int paraDlg::sendZ0Slot()
{
    int z0=ui->zlineEdit->text().toInt();
    return z0;
}

int paraDlg::sendW0Slot()
{
    int w0=ui->wlineEdit->text().toInt();
    return w0;
}
