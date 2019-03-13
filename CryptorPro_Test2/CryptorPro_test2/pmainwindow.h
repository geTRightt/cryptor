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
#include <widget.h>

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

private:
    Ui::pMainWindow *ui;
    Widget w;
};

#endif // PMAINWINDOW_H
