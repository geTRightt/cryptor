/********************************************************************************
** Form generated from reading UI file 'paradlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARADLG_H
#define UI_PARADLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paraDlg
{
public:
    QLabel *titlelabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *xlabel;
    QLabel *ylabel;
    QLabel *zlabel;
    QLabel *wlabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *xlineEdit;
    QLineEdit *ylineEdit;
    QLineEdit *zlineEdit;
    QLineEdit *wlineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *confirmButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *paraDlg)
    {
        if (paraDlg->objectName().isEmpty())
            paraDlg->setObjectName(QString::fromUtf8("paraDlg"));
        paraDlg->resize(250, 250);
        titlelabel = new QLabel(paraDlg);
        titlelabel->setObjectName(QString::fromUtf8("titlelabel"));
        titlelabel->setGeometry(QRect(40, 10, 171, 41));
        widget = new QWidget(paraDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 60, 186, 130));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        xlabel = new QLabel(widget);
        xlabel->setObjectName(QString::fromUtf8("xlabel"));

        verticalLayout_2->addWidget(xlabel);

        ylabel = new QLabel(widget);
        ylabel->setObjectName(QString::fromUtf8("ylabel"));

        verticalLayout_2->addWidget(ylabel);

        zlabel = new QLabel(widget);
        zlabel->setObjectName(QString::fromUtf8("zlabel"));

        verticalLayout_2->addWidget(zlabel);

        wlabel = new QLabel(widget);
        wlabel->setObjectName(QString::fromUtf8("wlabel"));

        verticalLayout_2->addWidget(wlabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        xlineEdit = new QLineEdit(widget);
        xlineEdit->setObjectName(QString::fromUtf8("xlineEdit"));

        verticalLayout->addWidget(xlineEdit);

        ylineEdit = new QLineEdit(widget);
        ylineEdit->setObjectName(QString::fromUtf8("ylineEdit"));

        verticalLayout->addWidget(ylineEdit);

        zlineEdit = new QLineEdit(widget);
        zlineEdit->setObjectName(QString::fromUtf8("zlineEdit"));

        verticalLayout->addWidget(zlineEdit);

        wlineEdit = new QLineEdit(widget);
        wlineEdit->setObjectName(QString::fromUtf8("wlineEdit"));

        verticalLayout->addWidget(wlineEdit);


        horizontalLayout->addLayout(verticalLayout);

        widget1 = new QWidget(paraDlg);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(40, 210, 178, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        confirmButton = new QPushButton(widget1);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));

        horizontalLayout_2->addWidget(confirmButton);

        cancelButton = new QPushButton(widget1);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        retranslateUi(paraDlg);

        QMetaObject::connectSlotsByName(paraDlg);
    } // setupUi

    void retranslateUi(QDialog *paraDlg)
    {
        paraDlg->setWindowTitle(QApplication::translate("paraDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        titlelabel->setText(QApplication::translate("paraDlg", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#2267ec;\">Set Paraments</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        xlabel->setText(QApplication::translate("paraDlg", "<html><head/><body><p><span style=\" font-size:12pt; color:#2267eb;\">X0:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ylabel->setText(QApplication::translate("paraDlg", "<html><head/><body><p><span style=\" font-size:12pt; color:#2267eb;\">Y0:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        zlabel->setText(QApplication::translate("paraDlg", "<html><head/><body><p><span style=\" font-size:12pt; color:#2267eb;\">Z0:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        wlabel->setText(QApplication::translate("paraDlg", "<html><head/><body><p><span style=\" font-size:12pt; color:#2267eb;\">W0:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        confirmButton->setText(QApplication::translate("paraDlg", "confirm", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("paraDlg", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class paraDlg: public Ui_paraDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARADLG_H
