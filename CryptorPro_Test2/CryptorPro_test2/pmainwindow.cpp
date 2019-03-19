#include "pmainwindow.h"
#include "ui_pmainwindow.h"
//#include <widget.h>


pMainWindow::pMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::pMainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Picture Cryptor");
    this->move(0,1600-272);

    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/

    QObject::connect(ui->actionEncryption_E,SIGNAL(triggered(bool)),this,SLOT(EncryptorSlot()));//modal
    QObject::connect(ui->actionDecryption_D,SIGNAL(triggered(bool)),this,SLOT(DecryptorSlot()));

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

           QImage origin;
           if(!origin.load(this->windowTitle()))
           {
               QMessageBox::warning(this,"Error open picture","The piture do not exist!");
               return;
           }
           int nWidth = origin.width();
           int nHeight= origin.height();
           int size=nWidth*nHeight;
           int * rBuff = new int[size];
           int* gBuff = new int[size];
           int * bBuff = new int[size];

           this->keygeneratorSlot(rBuff,x0,y0,z0,w0,size);
           this->keygeneratorSlot(gBuff,x0,y0,z0,w0,size);
           this->keygeneratorSlot(bBuff,x0,y0,z0,w0,size);

           unsigned char *pData=origin.bits();
           int width = origin.width();
           int height = origin.height();
           int x=0;
           for(int i=0;i<height;i++)
           {
               for(int j=0;j<width;j++)
               {
                   //qDebug()<<"before:"<<*(pData+(i*width+j)*4);
                   *(pData+(i*width+j)*4)=*(pData+(i*width+j)*4)^rBuff[x];
                   //qDebug()<<"behind:"<<*(pData+(i*width+j)*4);

                   //qDebug()<<"2before:"<<*(pData+(i*width+j)*4+1);
                   *(pData+(i*width+j)*4+1)=*(pData+(i*width+j)*4+1)^gBuff[x];
                   //qDebug()<<"2behind:"<<*(pData+(i*width+j)*4+1);

                   *(pData+(i*width+j)*4+2)=*(pData+(i*width+j)*4+2)^bBuff[x];
                   x+=1;
               }
           }

           QString Name=this->pickName(this->windowTitle());
           QString bmp=".bmp";
           Name.append(bmp);
           QString fileDir="/home/wj/Pictures/EcptBackup/";
           fileDir.append(Name);

           origin.save(fileDir);
           origin.save(this->windowTitle());
           QPixmap convertPixmap = QPixmap::fromImage(origin);

           int with = ui->plabel->width();
           int high =ui->plabel->height();
           QPixmap fitPixmap = convertPixmap.scaled(with,high,Qt::KeepAspectRatio,Qt::SmoothTransformation);
           ui->plabel->setAlignment(Qt::AlignCenter);
           ui->plabel->setPixmap(fitPixmap);
           delete [] rBuff;
           delete [] gBuff;
           delete [] bBuff;

           //QImage *newImage = new QImage(nWidth,nHeight,QImage::Format_RGB888);
           /*QColor oldColor;
           int r,g,b;
           int i=0;
           for(int x=0;x<nWidth;x++)
           {
               for(int y=0;y<nHeight;y++)
               {
                   oldColor=QColor(origin.pixel(x,y));
                   //r=oldColor.red();
                   //qDebug()<<"%d"<<r;
                   r=oldColor.red()^rBuff[i];
                   //g=oldColor.green();
                   g=oldColor.green()^gBuff[i];
                   //b=oldColor.blue();
                   b=oldColor.blue()^bBuff[i];
                   i+=1;

                   newImage->setPixel(x,y,qRgb(r,g,b));
               }
             }
           qDebug("i=%d",i);
           newImage->save("/home/wj/Pictures/3.jpg");
           QString newPic="/home/wj/Pictures/3.jpg";
           this->setWindowTitle(newPic);
           //delete [] rBuff;
           //delete [] gBuff;
           //delete [] bBuff;
           delete newImage;
           QImage newimage;
           if (!newimage.load(newPic))
           {
                QMessageBox::information(this, tr("Error"), tr("Open file error"));
                return ;
            }
           QPixmap pixmap = QPixmap::fromImage(newimage);
           int with = ui->plabel->width();
           int high =ui->plabel->height();
           QPixmap fitpixmap = pixmap.scaled(with,high,Qt::KeepAspectRatio,Qt::SmoothTransformation);
           ui->plabel->setAlignment(Qt::AlignCenter);                                                //
           ui->plabel->setPixmap(fitpixmap);*/
        }
    }

}

void pMainWindow::DecryptorSlot()
{
    QString title="Picture Cryptor";
    if(this->windowTitle()==title)
    {
        QMessageBox::warning(this,"Error Message!","Please open a Encrypted picture!");
    }
    else
    {
        qDebug()<<this->windowTitle();
        QString Name=this->pickName(this->windowTitle());
        QString bmp=".bmp";
        Name.append(bmp);
        QString fileDir="/home/wj/Pictures/EcptBackup/";
        fileDir.append(Name);
        qDebug()<<fileDir;
        paraDlg paraDialog(this);
        if(paraDialog.exec()==QDialog::Accepted)
        {

           double x0= paraDialog.sendX0Slot();
           double y0= paraDialog.sendY0Slot();
           double z0= paraDialog.sendZ0Slot();
           double w0= paraDialog.sendW0Slot();

           QImage origin;
           if(!origin.load(fileDir))
           {
               QMessageBox::warning(this,"Error open picture","The backup picture do no exist!");
               return;
           }
           int nWidth = origin.width();
           int nHeight= origin.height();
           int size=nWidth*nHeight;
           int * rBuff = new int[size];
           int* gBuff = new int[size];
           int * bBuff = new int[size];

           this->keygeneratorSlot(rBuff,x0,y0,z0,w0,size);
           this->keygeneratorSlot(gBuff,x0,y0,z0,w0,size);
           this->keygeneratorSlot(bBuff,x0,y0,z0,w0,size);

           unsigned char *pData=origin.bits();
           int width = origin.width();
           int height = origin.height();
           int x=0;
           for(int i=0;i<height;i++)
           {
               for(int j=0;j<width;j++)
               {
                   *(pData+(i*width+j)*4)=*(pData+(i*width+j)*4)^rBuff[x];
                   *(pData+(i*width+j)*4+1)=*(pData+(i*width+j)*4+1)^gBuff[x];
                   *(pData+(i*width+j)*4+2)=*(pData+(i*width+j)*4+2)^bBuff[x];
                   x+=1;
               }
           }
           //origin.save("/home/wj/Pictures/backup.bmp");
           origin.save(this->windowTitle());
           QPixmap convertPixmap = QPixmap::fromImage(origin);

           int with = ui->plabel->width();
           int high =ui->plabel->height();
           QPixmap fitPixmap = convertPixmap.scaled(with,high,Qt::KeepAspectRatio,Qt::SmoothTransformation);
           ui->plabel->setAlignment(Qt::AlignCenter);
           ui->plabel->setPixmap(fitPixmap);
           delete [] rBuff;
           delete [] gBuff;
           delete [] bBuff;


        }
    }

}

void pMainWindow::keygeneratorSlot(int *keytemp, double x0, double y0, double z0, double w0,qint64 sizes)
{
    int k,k1,k2,k3,k4;
    double t=0.001;
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
    int i = 0;
    for(i=0;i<sizes;i++)
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
        //qDebug()<<"k=%d"<<k;

        Xn=Xn_1;
        Yn=Yn_1;
        Zn=Zn_1;
        Wn=Wn_1;
    }
    //qDebug()<<"ki=%d"<<i;
}

QString pMainWindow::pickName(QString title)
{
    QString Name;
    QString xiegang="/";
    QString dian =".";
    int x,y;
    int i=0;
    do
    {
        x=i;
        i     = title.indexOf(xiegang,x+1);
    }
    while(i!=-1);
    i=0;
    do
    {
        y=i;
        i     = title.indexOf(dian,y+1);
    }
    while(i!=-1);

    qDebug()<<x;
    qDebug()<<y;

    Name=title.mid(x+1,y-x-1);
    return Name;
}
