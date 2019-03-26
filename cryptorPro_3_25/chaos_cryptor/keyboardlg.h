#ifndef KEYBOARDLG_H
#define KEYBOARDLG_H

#include <QDialog>
#include <QButtonGroup>
#include <QString>
#include <QWSInputMethod>

namespace Ui {
class keyboardlg;
}

class keyboardlg : public QDialog
{
    Q_OBJECT

public:
    explicit keyboardlg(QWidget *parent = 0);
    ~keyboardlg();
public slots:
    void buttonconfirmSlot(int num);
    void affirmstringSlot();
    void deletestringSlot();
signals:
    void sendstringSignal(QString);

private:
    Ui::keyboardlg *ui;
private:
    QButtonGroup *groupKeyBoardButton;
    QKeyEvent *event;
    QVector<QPushButton*> button_vector;
};

#endif // KEYBOARDLG_H
