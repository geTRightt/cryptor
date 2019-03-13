#include "pmainwindow.h"
#include "ui_pmainwindow.h"
#include <widget.h>

pMainWindow::pMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pMainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Picture Cryptor");
    this->move(0,1600-272);

    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/
    QObject::connect(ui->actionOpen_O,SIGNAL(triggered(bool)),this,SLOT(OpenPicSlot()));
    QObject::connect(ui->actionSave_S,SIGNAL(triggered(bool)),this,SLOT(SavePicSlot()));
    QObject::connect(ui->actionQuit_Q,SIGNAL(triggered(bool)),this,SLOT(QuitSlot()));
}

pMainWindow::~pMainWindow()
{
    delete ui;
}

void pMainWindow::OpenPicSlot()
{
    QString fileName=QFileDialog::getOpenFileName(this,"Open File",QDir::currentPath());
    //qDebug()<<"FileName is:"<<fileName;
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message!","Please enter file Name!");
        return;
    }
    QImage image;
        if (!image.load(fileName)) {
            QMessageBox::information(this, tr("Error"), tr("Open file error"));
            return ;
        }

        QPixmap pixmap = QPixmap::fromImage(image);

        //QSize imageSize = pixmap.size();    /*
        //ui->imageLabel->resize(imageSize);   *size control plan1
        //ui->imageLabel->setPixmap(pixmap);   */

        int with = ui->plabel->width();                                                           //
        int high =ui->plabel->height();                                                           //
        QPixmap fitpixmap = pixmap.scaled(with,high,Qt::KeepAspectRatio,Qt::SmoothTransformation);    //
        //QPixmap fitpixmap = pixmap.scaled(with,high,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);//size control plan2
        ui->plabel->setAlignment(Qt::AlignCenter);                                                //
         ui->plabel->setPixmap(fitpixmap);                                                        //

        //ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size()));/*size control plan3*/
}

void pMainWindow::SavePicSlot()
{
    QString fileName=QFileDialog::getSaveFileName(this,"Save File",QDir::currentPath());
    //qDebug()<<"FileName is:"<<fileName;
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message!","Please enter file Name!");
        return;
    }

    ui->plabel->pixmap()->save(fileName);
}
void pMainWindow::QuitSlot()
{
    w.show();
    this->close();
}
