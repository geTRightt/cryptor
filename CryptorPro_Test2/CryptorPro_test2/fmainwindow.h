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
    void quitSlot();
    void fileOpenSlot();
    void fileSaveSlot();
    void cryptorSlot();

signals:
    void closeSignal();

private:
    Ui::FMainWindow *ui;
};

#endif // FMAINWINDOW_H
