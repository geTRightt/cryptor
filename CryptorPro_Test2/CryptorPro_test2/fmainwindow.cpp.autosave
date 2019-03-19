#include "fmainwindow.h"
#include "ui_fmainwindow.h"

FMainWindow::FMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FMainWindow)
{
    ui->setupUi(this);
    this->move(0,1600-272);//
    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/

    QObject::connect(ui->actionQuit_Q,SIGNAL(triggered(bool)),this,SLOT(quitSlot()));
    QObject::connect(ui->actionOpen_O,SIGNAL(triggered(bool)),this,SLOT(fileOpenSlot()));
    QObject::connect(ui->actionEncryptor_E,SIGNAL(triggered(bool)),this,SLOT(cryptorSlot()));
    QObject::connect(ui->actionDecryptor_D,SIGNAL(triggered(bool)),this,SLOT(cryptorSlot()));
    QObject::connect(ui->actionSave_S,SIGNAL(triggered(bool)),this,SLOT(fileSaveSlot()));
}

FMainWindow::~FMainWindow()
{
    delete ui;
}

void FMainWindow::quitSlot()
{
    emit closeSignal();
    this->close();
}

void FMainWindow::fileOpenSlot()
{
    QString fileName = QFileDialog::getOpenFileName(this,"Open file","/home/wj/Documents");
    if(fileName.isEmpty())
    {
        QMessageBox::warning(this,"Error Message!","Please enter file name!");
    }
    else
    {
        this->setWindowTitle(fileName);
        QFile *file = new QFile;
        //QFile file;
        //file.setFileName(fileName);
        file->setFileName(fileName);
        bool   ok   = file->open(QIODevice::ReadOnly);
        //bool   ok   = file.open(QIODevice::ReadWrite);
        if(ok)
        {
            //QByteArray buff;
            //buff.resize(file->size());
            //ile->read(buff);
            //QByteArray buff=file->read(file->bytesAvailable());

            QTextStream in(file);
            ui->textEdit->setText(in.readAll());
            file->close();
            delete file;
        }
        else
        {
            QMessageBox::information(this,"Error Message!","Open file failed!"+file->errorString());
            return;
        }
    }
}

void FMainWindow::fileSaveSlot()
{
    QString fileName=QFileDialog::getSaveFileName(this,"Open File","/home/wj/Documents");
    if(fileName.isEmpty())
    {
        QMessageBox::information(this,"Error Message!","Please choose a file!");
        return;
    }
    QFile *file=new QFile;
    file->setFileName(fileName);
    bool ok=file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);
        out<<ui->textEdit->toPlainText();
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error Message!","Open file failed!"+file->errorString());
        return;
    }
}

void FMainWindow::cryptorSlot()
{

    QString title="MainWindow";
    if(this->windowTitle()==title)
    {
        QMessageBox::warning(this,"Error Message!","Please open a file!");
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
                //qDebug("size is %d bytes",size);

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
                cfile.close();
            }
            else
            {
                QMessageBox::warning(this,"Error Message!","cfile Faile to open the file!");
            }

            QFile *file = new QFile;
                        file->setFileName(this->windowTitle());
                        bool   ok   = file->open(QIODevice::ReadOnly);
                        if(ok)
                        {
                            QTextStream in(file);
                            ui->textEdit->setText(in.readAll());
                            file->close();
                            delete file;
                        }
        }

    }
}

void FMainWindow::keygeneratorSlot(char *keytemp, double x0, double y0, double z0, double w0,qint64 sizes)
{
    unsigned char k,k1,k2,k3,k4;
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
