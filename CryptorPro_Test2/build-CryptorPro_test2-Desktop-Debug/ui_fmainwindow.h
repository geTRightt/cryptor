/********************************************************************************
** Form generated from reading UI file 'fmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FMAINWINDOW_H
#define UI_FMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FMainWindow
{
public:
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionSave_as_A;
    QAction *actionQuit_Q;
    QAction *actionEncryptor_E;
    QAction *actionDecryptor_D;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile_F;
    QMenu *menuCryptor_C;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FMainWindow)
    {
        if (FMainWindow->objectName().isEmpty())
            FMainWindow->setObjectName(QString::fromUtf8("FMainWindow"));
        FMainWindow->resize(480, 272);
        actionOpen_O = new QAction(FMainWindow);
        actionOpen_O->setObjectName(QString::fromUtf8("actionOpen_O"));
        actionSave_S = new QAction(FMainWindow);
        actionSave_S->setObjectName(QString::fromUtf8("actionSave_S"));
        actionSave_as_A = new QAction(FMainWindow);
        actionSave_as_A->setObjectName(QString::fromUtf8("actionSave_as_A"));
        actionQuit_Q = new QAction(FMainWindow);
        actionQuit_Q->setObjectName(QString::fromUtf8("actionQuit_Q"));
        actionEncryptor_E = new QAction(FMainWindow);
        actionEncryptor_E->setObjectName(QString::fromUtf8("actionEncryptor_E"));
        actionDecryptor_D = new QAction(FMainWindow);
        actionDecryptor_D->setObjectName(QString::fromUtf8("actionDecryptor_D"));
        centralwidget = new QWidget(FMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        FMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 25));
        menuFile_F = new QMenu(menubar);
        menuFile_F->setObjectName(QString::fromUtf8("menuFile_F"));
        menuCryptor_C = new QMenu(menubar);
        menuCryptor_C->setObjectName(QString::fromUtf8("menuCryptor_C"));
        FMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(FMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile_F->menuAction());
        menubar->addAction(menuCryptor_C->menuAction());
        menuFile_F->addAction(actionOpen_O);
        menuFile_F->addAction(actionSave_S);
        menuFile_F->addAction(actionSave_as_A);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionQuit_Q);
        menuCryptor_C->addAction(actionEncryptor_E);
        menuCryptor_C->addAction(actionDecryptor_D);

        retranslateUi(FMainWindow);

        QMetaObject::connectSlotsByName(FMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FMainWindow)
    {
        FMainWindow->setWindowTitle(QApplication::translate("FMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen_O->setText(QApplication::translate("FMainWindow", "Open(&O)", 0, QApplication::UnicodeUTF8));
        actionSave_S->setText(QApplication::translate("FMainWindow", "Save(&S)", 0, QApplication::UnicodeUTF8));
        actionSave_as_A->setText(QApplication::translate("FMainWindow", "Save as(&A)", 0, QApplication::UnicodeUTF8));
        actionQuit_Q->setText(QApplication::translate("FMainWindow", "Quit(&Q)", 0, QApplication::UnicodeUTF8));
        actionEncryptor_E->setText(QApplication::translate("FMainWindow", "Encryptor(&E)", 0, QApplication::UnicodeUTF8));
        actionDecryptor_D->setText(QApplication::translate("FMainWindow", "Decryptor(&D)", 0, QApplication::UnicodeUTF8));
        menuFile_F->setTitle(QApplication::translate("FMainWindow", "File(&F)", 0, QApplication::UnicodeUTF8));
        menuCryptor_C->setTitle(QApplication::translate("FMainWindow", "Cryptor(&C)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FMainWindow: public Ui_FMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FMAINWINDOW_H
