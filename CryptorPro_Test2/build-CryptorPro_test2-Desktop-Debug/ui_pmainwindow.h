/********************************************************************************
** Form generated from reading UI file 'pmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PMAINWINDOW_H
#define UI_PMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pMainWindow
{
public:
    QAction *actionOpen_O;
    QAction *actionSave_S;
    QAction *actionSave_as_A;
    QAction *actionQuit_Q;
    QAction *actionEncryption_E;
    QAction *actionDecryption_D;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *plabel;
    QMenuBar *menubar;
    QMenu *menuFile_F;
    QMenu *menuCryption_C;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *pMainWindow)
    {
        if (pMainWindow->objectName().isEmpty())
            pMainWindow->setObjectName(QString::fromUtf8("pMainWindow"));
        pMainWindow->resize(480, 272);
        actionOpen_O = new QAction(pMainWindow);
        actionOpen_O->setObjectName(QString::fromUtf8("actionOpen_O"));
        actionSave_S = new QAction(pMainWindow);
        actionSave_S->setObjectName(QString::fromUtf8("actionSave_S"));
        actionSave_as_A = new QAction(pMainWindow);
        actionSave_as_A->setObjectName(QString::fromUtf8("actionSave_as_A"));
        actionQuit_Q = new QAction(pMainWindow);
        actionQuit_Q->setObjectName(QString::fromUtf8("actionQuit_Q"));
        actionEncryption_E = new QAction(pMainWindow);
        actionEncryption_E->setObjectName(QString::fromUtf8("actionEncryption_E"));
        actionDecryption_D = new QAction(pMainWindow);
        actionDecryption_D->setObjectName(QString::fromUtf8("actionDecryption_D"));
        centralwidget = new QWidget(pMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        plabel = new QLabel(centralwidget);
        plabel->setObjectName(QString::fromUtf8("plabel"));

        horizontalLayout->addWidget(plabel);

        pMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 480, 25));
        menuFile_F = new QMenu(menubar);
        menuFile_F->setObjectName(QString::fromUtf8("menuFile_F"));
        menuCryption_C = new QMenu(menubar);
        menuCryption_C->setObjectName(QString::fromUtf8("menuCryption_C"));
        pMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(pMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        pMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile_F->menuAction());
        menubar->addAction(menuCryption_C->menuAction());
        menuFile_F->addAction(actionOpen_O);
        menuFile_F->addAction(actionSave_S);
        menuFile_F->addAction(actionSave_as_A);
        menuFile_F->addSeparator();
        menuFile_F->addAction(actionQuit_Q);
        menuCryption_C->addAction(actionEncryption_E);
        menuCryption_C->addAction(actionDecryption_D);

        retranslateUi(pMainWindow);

        QMetaObject::connectSlotsByName(pMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *pMainWindow)
    {
        pMainWindow->setWindowTitle(QApplication::translate("pMainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionOpen_O->setText(QApplication::translate("pMainWindow", "Open(&O)", 0, QApplication::UnicodeUTF8));
        actionSave_S->setText(QApplication::translate("pMainWindow", "Save(&S)", 0, QApplication::UnicodeUTF8));
        actionSave_as_A->setText(QApplication::translate("pMainWindow", "Save as(&A)", 0, QApplication::UnicodeUTF8));
        actionQuit_Q->setText(QApplication::translate("pMainWindow", "Quit(&Q)", 0, QApplication::UnicodeUTF8));
        actionEncryption_E->setText(QApplication::translate("pMainWindow", "Encryption(&E)", 0, QApplication::UnicodeUTF8));
        actionDecryption_D->setText(QApplication::translate("pMainWindow", "Decryption(&D)", 0, QApplication::UnicodeUTF8));
        plabel->setText(QString());
        menuFile_F->setTitle(QApplication::translate("pMainWindow", "File(&F)", 0, QApplication::UnicodeUTF8));
        menuCryption_C->setTitle(QApplication::translate("pMainWindow", "Cryption(&C)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class pMainWindow: public Ui_pMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PMAINWINDOW_H
