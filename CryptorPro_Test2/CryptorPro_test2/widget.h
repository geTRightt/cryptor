#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QButtonGroup>
#include "pmainwindow.h"
#include "fmainwindow.h"
#include <QApplication>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void on_nextButton_clicked();


private:
    Ui::Widget *ui;
    pMainWindow *pic;
    FMainWindow *file;

private:
     QButtonGroup *groupButton1;

};

#endif // WIDGET_H
