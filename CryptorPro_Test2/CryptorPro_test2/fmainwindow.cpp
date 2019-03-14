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
    //this->fileOpenSlot();
    QString title="MainWindow";
    if(this->windowTitle()==title)
    {
        QMessageBox::warning(this,"Error Message!","Please open a file!");
    }
    else
    {
        QFile file;
        file.setFileName(this->windowTitle());
        if(file.open(QIODevice::ReadWrite))
        {
            char *p=(char *)malloc(file.bytesAvailable());
            file.read(p,file.bytesAvailable());
            int i=0;
            for(i=0;i<file.size();i++)
            {
                p[i]^=13;
            }
            file.close();

            file.open(QFile::WriteOnly|QFile::Truncate);
            file.close();

            file.open(QIODevice::ReadWrite);
            //char *q="i am a bad boy!";
            //file.write(q);
            file.write(p);
            file.close();

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
        else
        {
            QMessageBox::warning(this,"Error Message!","Faile to open the file!");
        }
    }
}
