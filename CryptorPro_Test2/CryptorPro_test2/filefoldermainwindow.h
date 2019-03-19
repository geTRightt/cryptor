#ifndef FILEFOLDERMAINWINDOW_H
#define FILEFOLDERMAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QDebug>
#include <paradlg.h>

namespace Ui {
class filefoldermainwindow;
}

class filefoldermainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit filefoldermainwindow(QWidget *parent = 0);
    ~filefoldermainwindow();
public slots:
    void on_cancelButton_clicked();
    void on_browseButton_clicked();
    void on_encryptButton_clicked();
    void on_decryptButton_clicked();
    void findfileEncryptSlot(QString path,double x0,double y0,double z0,double w0);
    void findfileDecryptSlot(QString path,double x0,double y0,double z0,double w0);
    //void cryptorSlot();
    void keygeneratorSlot(char * keytemp,double x0,double y0,double z0,double w0,qint64 size);
    QString pickName(QString title);
    QString pickDir(QString title);

signals:
    void closeSignal();

private:
    Ui::filefoldermainwindow *ui;
};

#endif // FILEFOLDERMAINWINDOW_H
