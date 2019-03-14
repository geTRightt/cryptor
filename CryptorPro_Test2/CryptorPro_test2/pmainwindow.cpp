#include "pmainwindow.h"
#include "ui_pmainwindow.h"
//#include <widget.h>


pMainWindow::pMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pMainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Picture Cryptor");

    //paraDialog=new paraDlg();


    this->move(0,1600-272);

    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/

    //QObject::connect(ui->actionEncryption_E,SIGNAL(triggered(bool)),paraDialog,SLOT(show()));//un modal
    QObject::connect(ui->actionEncryption_E,SIGNAL(triggered(bool)),this,SLOT(EncryptorSlot()));//modal

    QObject::connect(ui->actionOpen_O,SIGNAL(triggered(bool)),this,SLOT(OpenPicSlot()));
    QObject::connect(ui->actionSave_S,SIGNAL(triggered(bool)),this,SLOT(SavePicSlot()));
    QObject::connect(ui->actionQuit_Q,SIGNAL(triggered(bool)),this,SLOT(QuitSlot()));
    //QObject::connect(ui->actionEncryption_E,SIGNAL(triggered(bool)),this,SLOT(EncryptorSlot()));
}

pMainWindow::~pMainWindow()
{
    delete ui;
}

void pMainWindow::OpenPicSlot()
{
    /*QT + Opencv codes*/
    QString fileName=QFileDialog::getOpenFileName(this,"Open Picture",QDir::currentPath());
    image =cv::imread(fileName.toStdString());
    cv::cvtColor(image,image,CV_BGR2RGB);
     QImage img = QImage((const unsigned char*)(image.data),image.cols,image.rows,QImage::Format_RGB888);
     //ui->plabel->setAlignment(Qt::AlignCenter);
     //ui->plabel->setPixmap(QPixmap::fromImage(img));

     QPixmap pixmap = QPixmap::fromImage(img);
     int with = ui->plabel->width();                                                           //
     int high =ui->plabel->height();                                                           //
     QPixmap fitpixmap = pixmap.scaled(with,high,Qt::KeepAspectRatio,Qt::SmoothTransformation);    //
     //QPixmap fitpixmap = pixmap.scaled(with,high,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);//size control plan2
     ui->plabel->setAlignment(Qt::AlignCenter);                                                //
     ui->plabel->setPixmap(fitpixmap);                                                        //

    /*Only QT lib codes
     * QString fileName=QFileDialog::getOpenFileName(this,"Open File",QDir::currentPath());
     *  //qDebug()<<"FileName is:"<<fileName;
     *   if(fileName.isEmpty())
     *   {
     *      QMessageBox::information(this,"Error Message!","Please enter file Name!");
     *      return;
     *    }
     *    QImage image;
     *    if (!image.load(fileName))
     *    {
     *       QMessageBox::information(this, tr("Error"), tr("Open file error"));
     *       return ;
     *      }

     *     QPixmap pixmap = QPixmap::fromImage(image);

     *     //QSize imageSize = pixmap.size();     //
     *     //ui->imageLabel->resize(imageSize);   //size control plan1
     *     //ui->imageLabel->setPixmap(pixmap);   //

     *     int with = ui->plabel->width();                                                           //
     *     int high =ui->plabel->height();                                                           //
     *     QPixmap fitpixmap = pixmap.scaled(with,high,Qt::KeepAspectRatio,Qt::SmoothTransformation);    //
     *     //QPixmap fitpixmap = pixmap.scaled(with,high,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);//size control plan2
     *     ui->plabel->setAlignment(Qt::AlignCenter);                                                //
     *     ui->plabel->setPixmap(fitpixmap);                                                        //

     *   //ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size()));//size control plan3
     */
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
    //w.show();
    emit closeSignal();
    this->close();
}


void pMainWindow::EncryptorSlot()
{
    paraDlg paraDialog(this);
    if(paraDialog.exec()==QDialog::Accepted)
    {

       double x0= paraDialog.sendX0Slot();
       double y0= paraDialog.sendY0Slot();
       double z0= paraDialog.sendZ0Slot();
       double w0= paraDialog.sendW0Slot();

       //qDebug()<<"para x0 is:"<<x0;
       //qDebug()<<"para y0 is:"<<y0;
       //qDebug()<<"para z0 is:"<<z0;
       //qDebug()<<"para w0 is:"<<w0;

       unsigned char k=x0*4096;
       k&=0x03;
       qDebug("para x0 is:%x",k);
       k=k<<6|1<<4|2<<2|3;
       unsigned char i=1;
       k^=i;
       qDebug("key is:%d",k);
    }
}

void pMainWindow::PWGeneratorSlot(double x, double y, double z, double w)
{
    double t=0.01;
    double a=-1.12;
    double b=1;
    double beta=15;
    double gama=10;

    double Xn=x;
    double Yn=y;
    double Zn=z;
    double Wn=w;

    double Xn_1=Xn+t*beta*Zn;
    double Yn_1=Yn+t*gama*((Zn-Yn)-(a+b*Wn*Wn)*Yn);
    double Zn_1=Zn+t*(Yn-Zn-Xn);
    double Wn_1=Wn+t*Yn;
}
