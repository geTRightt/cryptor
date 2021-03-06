#ifndef PMAINWINDOW_H
#define PMAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>
#include <QMessageBox>
#include <QImage>
#include <QPixmap>
#include <QFileInfo>
#include <QString>

#include <paradlg.h>

//#include <opencv2/core/core.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>

//using namespace cv;


namespace Ui {
class pMainWindow;
}

class pMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit pMainWindow(QWidget *parent = 0);
    ~pMainWindow();

public slots:
    void OpenPicSlot();
    void SavePicSlot();
    void QuitSlot();
    void EncryptorSlot();
    void DecryptorSlot();
    void keygeneratorSlot(char * keytemp,double x0,double y0,double z0,double w0,qint64 size);
    QString pickName(QString title);
    QString pickDir(QString title);
signals:
    void closeSignal();

private:
    Ui::pMainWindow *ui;
    //Widget w;
    //paraDlg *paraDialog;
    paraDlg paraDialog;
    //cv::Mat image;
};

#endif // PMAINWINDOW_H
