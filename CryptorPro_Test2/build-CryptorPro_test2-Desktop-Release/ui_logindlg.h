/********************************************************************************
** Form generated from reading UI file 'logindlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

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
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginDlg
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *setButton;
    QSpacerItem *horizontalSpacer_5;
    QLabel *titlelabel;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *namelabel;
    QLabel *passwdlabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *namelineEdit;
    QLineEdit *passwdlineEdit;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *loginDlg)
    {
        if (loginDlg->objectName().isEmpty())
            loginDlg->setObjectName(QString::fromUtf8("loginDlg"));
        loginDlg->resize(480, 272);
        layoutWidget = new QWidget(loginDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 200, 318, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        loginButton = new QPushButton(layoutWidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        horizontalLayout_4->addWidget(loginButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        horizontalLayout_4->addLayout(horizontalLayout_2);

        setButton = new QPushButton(layoutWidget);
        setButton->setObjectName(QString::fromUtf8("setButton"));

        horizontalLayout_4->addWidget(setButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        titlelabel = new QLabel(loginDlg);
        titlelabel->setObjectName(QString::fromUtf8("titlelabel"));
        titlelabel->setGeometry(QRect(60, 20, 356, 51));
        layoutWidget_2 = new QWidget(loginDlg);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(60, 110, 340, 66));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        namelabel = new QLabel(layoutWidget_2);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));

        verticalLayout->addWidget(namelabel);

        passwdlabel = new QLabel(layoutWidget_2);
        passwdlabel->setObjectName(QString::fromUtf8("passwdlabel"));

        verticalLayout->addWidget(passwdlabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        namelineEdit = new QLineEdit(layoutWidget_2);
        namelineEdit->setObjectName(QString::fromUtf8("namelineEdit"));

        verticalLayout_2->addWidget(namelineEdit);

        passwdlineEdit = new QLineEdit(layoutWidget_2);
        passwdlineEdit->setObjectName(QString::fromUtf8("passwdlineEdit"));
        passwdlineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(passwdlineEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        retranslateUi(loginDlg);

        QMetaObject::connectSlotsByName(loginDlg);
    } // setupUi

    void retranslateUi(QDialog *loginDlg)
    {
        loginDlg->setWindowTitle(QApplication::translate("loginDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        loginButton->setText(QApplication::translate("loginDlg", "login", 0, QApplication::UnicodeUTF8));
        setButton->setText(QApplication::translate("loginDlg", "set", 0, QApplication::UnicodeUTF8));
        titlelabel->setText(QApplication::translate("loginDlg", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600; color:#2267ee;\">Encrypted File syetems</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        namelabel->setText(QApplication::translate("loginDlg", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#2267ed;\">UsrName:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        passwdlabel->setText(QApplication::translate("loginDlg", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#2267ed;\">PassWd:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class loginDlg: public Ui_loginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
