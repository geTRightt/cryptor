#include "filefoldermainwindow.h"
#include "ui_filefoldermainwindow.h"

filefoldermainwindow::filefoldermainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::filefoldermainwindow)
{
    ui->setupUi(this);
    this->move(0,1600-272);
    this->setMaximumSize(480,272);
    this->setMinimumSize(480,272);/*similar code: resize(480,272)*/
}

filefoldermainwindow::~filefoldermainwindow()
{
    delete ui;
}

void filefoldermainwindow::on_cancelButton_clicked()
{
    emit closeSignal();
    this->close();
}

void filefoldermainwindow::on_browseButton_clicked()
{
    QString folderName = QFileDialog::getExistingDirectory(this,"Choose filefolder","/");
    ui->filefolderlineEdit->setText(folderName);
}

void filefoldermainwindow::findfileSlot(QString path,double x0,double y0,double z0,double w0)
{
    QDir dir(path);
    if(!dir.exists())
    {
        QMessageBox::warning(this,"Error open","Directory do not exist!");
        return;
    }
    else
    {
        dir.setFilter(QDir::Files|QDir::Dirs|QDir::NoDotAndDotDot|QDir::NoSymLinks);
        QFileInfoList list = dir.entryInfoList();
        int file_count = list.count();
        if(file_count<=0)
        {
            return;
        }
        else
        {
            for(int i = 0;i<file_count;i++)
            {
                QFileInfo file_info = list.at(i);
                if(file_info.isDir())
                {
                    this->findfileSlot(file_info.filePath(),x0,y0,z0,w0);
                    qDebug()<<file_info.filePath();
                }
                else
                {
                    QString file_name   = file_info.absoluteFilePath();
                    qDebug()<<file_name;
                    qint64 size;
                    QByteArray filebytes;
                    QFile afile,bfile,cfile;

                    afile.setFileName(file_name);
                    if(afile.open(QIODevice::ReadOnly))
                    {
                        size = afile.bytesAvailable();
                        qDebug("size is %d bytes",size);

                        filebytes.resize(size);
                        filebytes = afile.readAll();
                        afile.close();
                    }
                    else
                    {
                        QMessageBox::warning(this,"Error Message!","afile Faile to open the file!");
                    }

                    bfile.setFileName(file_name);
                    if(bfile.open(QIODevice::ReadWrite|QIODevice::Truncate))
                    {
                        bfile.close();
                    }
                    else
                    {
                        QMessageBox::warning(this,"Error Message!","bfile Faile to open the file!");
                    }

                    cfile.setFileName(file_name);
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
                }

            }
        }
    }
}

void filefoldermainwindow::on_encryptButton_clicked()
{
    if(ui->filefolderlineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"Waring Message","Please enter filefolder directory!");
        return;
    }
    else
    {
        QString path = ui->filefolderlineEdit->text();
        paraDlg paraDialog(this);
        if(paraDialog.exec()==QDialog::Accepted)
        {
            double x0= paraDialog.sendX0Slot();
            double y0= paraDialog.sendY0Slot();
            double z0= paraDialog.sendZ0Slot();
            double w0= paraDialog.sendW0Slot();
            this->findfileSlot(path,x0,y0,z0,w0);
        }
    }
}

void filefoldermainwindow::on_decryptButton_clicked()
{
    if(ui->filefolderlineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"Waring Message","Please enter filefolder directory!");
        return;
    }
    else
    {
        QString path = ui->filefolderlineEdit->text();
        paraDlg paraDialog(this);
        if(paraDialog.exec()==QDialog::Accepted)
        {
            double x0= paraDialog.sendX0Slot();
            double y0= paraDialog.sendY0Slot();
            double z0= paraDialog.sendZ0Slot();
            double w0= paraDialog.sendW0Slot();
            this->findfileSlot(path,x0,y0,z0,w0);
        }
    }
}

void filefoldermainwindow::keygeneratorSlot(char *keytemp, double x0, double y0, double z0, double w0,qint64 sizes)
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
