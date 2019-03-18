/********************************************************************************
** Form generated from reading UI file 'filefoldermainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEFOLDERMAINWINDOW_H
#define UI_FILEFOLDERMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filefoldermainwindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QPushButton *cancelButton;
    QLabel *titlelabel;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *filefolderlineEdit;
    QPushButton *browseButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *filefoldermainwindow)
    {
        if (filefoldermainwindow->objectName().isEmpty())
            filefoldermainwindow->setObjectName(QString::fromUtf8("filefoldermainwindow"));
        filefoldermainwindow->resize(480, 272);
        centralwidget = new QWidget(filefoldermainwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 160, 269, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        encryptButton = new QPushButton(layoutWidget);
        encryptButton->setObjectName(QString::fromUtf8("encryptButton"));

        horizontalLayout_2->addWidget(encryptButton);

        decryptButton = new QPushButton(layoutWidget);
        decryptButton->setObjectName(QString::fromUtf8("decryptButton"));

        horizontalLayout_2->addWidget(decryptButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        titlelabel = new QLabel(centralwidget);
        titlelabel->setObjectName(QString::fromUtf8("titlelabel"));
        titlelabel->setGeometry(QRect(40, 30, 161, 20));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 80, 371, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filefolderlineEdit = new QLineEdit(layoutWidget_2);
        filefolderlineEdit->setObjectName(QString::fromUtf8("filefolderlineEdit"));

        horizontalLayout->addWidget(filefolderlineEdit);

        browseButton = new QPushButton(layoutWidget_2);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        horizontalLayout->addWidget(browseButton);

        filefoldermainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(filefoldermainwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 25));
        filefoldermainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(filefoldermainwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        filefoldermainwindow->setStatusBar(statusbar);

        retranslateUi(filefoldermainwindow);

        QMetaObject::connectSlotsByName(filefoldermainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *filefoldermainwindow)
    {
        filefoldermainwindow->setWindowTitle(QApplication::translate("filefoldermainwindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        encryptButton->setText(QApplication::translate("filefoldermainwindow", "encrypt", 0, QApplication::UnicodeUTF8));
        decryptButton->setText(QApplication::translate("filefoldermainwindow", "decrypt", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("filefoldermainwindow", "cancel", 0, QApplication::UnicodeUTF8));
        titlelabel->setText(QApplication::translate("filefoldermainwindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#2267ec;\">Choose FilleFolder:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QApplication::translate("filefoldermainwindow", "Browse", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class filefoldermainwindow: public Ui_filefoldermainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEFOLDERMAINWINDOW_H
