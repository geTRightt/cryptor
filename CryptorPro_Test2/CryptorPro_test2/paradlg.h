#ifndef PARADLG_H
#define PARADLG_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class paraDlg;
}

class paraDlg : public QDialog
{
    Q_OBJECT

public:
    explicit paraDlg(QWidget *parent = 0);
    ~paraDlg();
public slots:
    void on_confirmButton_clicked();
    void on_cancelButton_clicked();

    int sendX0Slot();
    int sendY0Slot();
    int sendZ0Slot();
    int sendW0Slot();
signals:


private:
    Ui::paraDlg *ui;
};

#endif // PARADLG_H
