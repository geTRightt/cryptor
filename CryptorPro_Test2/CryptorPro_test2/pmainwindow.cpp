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
    /*QString fileName=QFileDialog::getOpenFileName(this,"Open Picture",QDir::currentPath());
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
    */

    /*Only QT lib codes*/
     QString fileName=QFileDialog::getOpenFileName(this,"Open File","/home/wj/Pictures");
     this->setWindowTitle(fileName);
     //qDebug()<<"FileName is:"<<fileName;
     if(fileName.isEmpty())
     {
         QMessageBox::information(this,"Error Message!","Please enter file Name!");
         return;
      }
     QImage image;
     if (!image.load(fileName))
     {
          QMessageBox::information(this, tr("Error"), tr("Open file error"));
          return ;
      }

     QPixmap pixmap = QPixmap::fromImage(image);

     //QSize imageSize = pixmap.size();     //
     //ui->imageLabel->resize(imageSize);   //size control plan1
     //ui->imageLabel->setPixmap(pixmap);   //

     int with = ui->plabel->width();                                                           //
     int high =ui->plabel->height();                                                           //
     QPixmap fitpixmap = pixmap.scaled(with,high,Qt::KeepAspectRatio,Qt::SmoothTransformation);    //
     //QPixmap fitpixmap = pixmap.scaled(with,high,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);//size control plan2
     ui->plabel->setAlignment(Qt::AlignCenter);                                                //
     ui->plabel->setPixmap(fitpixmap);                                                        //

     //ui->imageLabel->setPixmap(pixmap.scaled(ui->imageLabel->size()));//size control plan3
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
    QString title="Picture Cryptor";
    if(this->windowTitle()==title)
    {
        QMessageBox::warning(this,"Error Message!","Please open a picture!");
    }
    else
    {
        paraDlg paraDialog(this);
        if(paraDialog.exec()==QDialog::Accepted)
        {

           double x0= paraDialog.sendX0Slot();
           double y0= paraDialog.sendY0Slot();
           double z0= paraDialog.sendZ0Slot();
           double w0= paraDialog.sendW0Slot();

           qint64 size;
           QByteArray filebytes;
           QFile afile,bfile,cfile;
           afile.setFileName(this->windowTitle());
           if(afile.open(QIODevice::ReadOnly))
           {
               size = afile.bytesAvailable();
               qDebug("size is %d bytes",size);

               filebytes.resize(size);
               filebytes = afile.readAll();
               //p=(char *)malloc(afile.bytesAvailable());
               //afile.read(p,afile.bytesAvailable());
               afile.close();
           }
           else
           {
               QMessageBox::warning(this,"Error Message!","afile Faile to open the file!");
           }

           bfile.setFileName(this->windowTitle());
           if(bfile.open(QIODevice::ReadWrite|QIODevice::Truncate))
           {
               bfile.close();
           }
           else
           {
               QMessageBox::warning(this,"Error Message!","bfile Faile to open the file!");
           }

           cfile.setFileName(this->windowTitle());
           if(cfile.open(QIODevice::ReadWrite))
           {
               char * p = new char[size+1];
               this->keygeneratorSlot(p,x0,y0,z0,w0,size);
               for(int i=0;i<size-1;i++)
               {
                   filebytes[i]=(filebytes.at(i))^p[i];
               }
               cfile.write(filebytes);
               delete [] p;

               /*if(QPixmap pixmap = QPixmap::loadFromData(cfile))
               {
                   int with = ui->plabel->width();                                                           //
                   int high =ui->plabel->height();                                                           //
                   QPixmap fitpixmap = pixmap.scaled(with,high,Qt::KeepAspectRatio,Qt::SmoothTransformation);    //
                   //QPixmap fitpixmap = pixmap.scaled(with,high,Qt::IgnoreAspectRatio,Qt::SmoothTransformation);//size control plan2
                   ui->plabel->setAlignment(Qt::AlignCenter);                                                //
                   ui->plabel->setPixmap(fitpixmap);
               }
               else
               {
                   QMessageBox::warning(this,"Error Message!","Pixmap load from data error!");
               }*/

               cfile.close();
           }
           else
           {
               QMessageBox::warning(this,"Error Message!","cfile Faile to open the file!");
           }


        }
    }
}

void pMainWindow::keygeneratorSlot(char *keytemp, double x0, double y0, double z0, double w0,qint64 sizes)
{
    unsigned char k,k1,k2,k3,k4;
    double t=0.01;
    double a=-1.12;
    double b=1;
    double beta=15;
    double gama=10;

    double Xn=x0;
    double Yn=y0;
    double Zn=z0;
    double Wn=w0;
    double Xn_1=Xn;
    double Yn_1=Yn;
    double Zn_1=Zn;
    double Wn_1=Wn;

    for(int i=0;i<5000;i++)
    {
        Xn_1=Xn+t*beta*Zn;
        Yn_1=Yn+t*gama*((Zn-Yn)-(a+b*Wn*Wn)*Yn);
        Zn_1=Zn+t*(Yn-Zn-Xn);
        Wn_1=Wn+t*Yn;

        Xn=Xn_1;
        Yn=Yn_1;
        Zn=Zn_1;
        Wn=Wn_1;
    }

    for(int i=0;i<sizes;i++)
    {
        Xn_1=Xn+t*beta*Zn;
        Yn_1=Yn+t*gama*((Zn-Yn)-(a+b*Wn*Wn)*Yn);
        Zn_1=Zn+t*(Yn-Zn-Xn);
        Wn_1=Wn+t*Yn;

        k1=Xn_1*2048;
        k2=Yn_1*1024;
        k3=Zn_1*4096;
        k4=Wn_1*1024;

        k1&=0x03;
        k2&=0x03;
        k3&=0x03;
        k4&=0x03;

        k=k1<<6|k2<<4|k3<<2|k4;
        keytemp[i]=k;

        Xn=Xn_1;
        Yn=Yn_1;
        Zn=Zn_1;
        Wn=Wn_1;
    }
    //return keytemp;
}
