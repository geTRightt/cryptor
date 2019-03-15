#ifndef FMAINWINDOW_H
#define FMAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QDir>
#include <QBitArray>
#include <paradlg.h>

namespace Ui {
class FMainWindow;
}

class FMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FMainWindow(QWidget *parent = 0);
    ~FMainWindow();

public slots:
    void   quitSlot();
    void   fileOpenSlot();
    void   fileSaveSlot();
    void   cryptorSlot();
    void   keygeneratorSlot(char * keytemp,double x0,double y0,double z0,double w0,qint64 size);


signals:
    void closeSignal();

private:
    Ui::FMainWindow *ui;
};

#endif // FMAINWINDOW_H
