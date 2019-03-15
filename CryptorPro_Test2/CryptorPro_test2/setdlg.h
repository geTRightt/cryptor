#ifndef SETDLG_H
#define SETDLG_H

#include <QDialog>
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

namespace Ui {
class setDlg;
}

class setDlg : public QDialog
{
    Q_OBJECT

public:
    explicit setDlg(QWidget *parent = 0);
    ~setDlg();
public slots:
    void on_confirmButton_clicked();
    void on_cancelButton_clicked();
    QString sendNewUsrSlot();
    QString sendNewPawdSlot();
private:
    Ui::setDlg *ui;
};

#endif // SETDLG_H
