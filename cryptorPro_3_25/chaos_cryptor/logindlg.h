#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QSize>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <setdlg.h>
#include <keyboardlg.h>

namespace Ui {
class loginDlg;
}

class loginDlg : public QDialog
{
    Q_OBJECT

public:
    explicit loginDlg(QWidget *parent = 0);
    ~loginDlg();

public slots:
    void on_loginButton_clicked();
    void on_setButton_clicked();

    void showKeyboardSlot();
    void confirmstringSlot(QString inpuText);

private:
    Ui::loginDlg *ui;
    keyboardlg *keyboard;
    int lineEditFlag;

private slots:
    bool eventFilter(QObject *, QEvent *);
};

#endif // LOGINDLG_H
