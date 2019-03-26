/********************************************************************************
** Form generated from reading UI file 'setdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETDLG_H
#define UI_SETDLG_H

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

class Ui_setDlg
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *confirmButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *usrlabel;
    QLabel *passwdlabel;
    QLabel *newusrlabel;
    QLabel *newpasswdlabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *usrlineEdit;
    QLineEdit *passwdlineEdit;
    QLineEdit *newusrlineEdit;
    QLineEdit *newpasswdlineEdit;

    void setupUi(QDialog *setDlg)
    {
        if (setDlg->objectName().isEmpty())
            setDlg->setObjectName(QString::fromUtf8("setDlg"));
        setDlg->resize(478, 235);
        layoutWidget = new QWidget(setDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 190, 316, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        confirmButton = new QPushButton(layoutWidget);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));

        horizontalLayout_2->addWidget(confirmButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        layoutWidget_2 = new QWidget(setDlg);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(70, 20, 331, 161));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        usrlabel = new QLabel(layoutWidget_2);
        usrlabel->setObjectName(QString::fromUtf8("usrlabel"));

        verticalLayout_2->addWidget(usrlabel);

        passwdlabel = new QLabel(layoutWidget_2);
        passwdlabel->setObjectName(QString::fromUtf8("passwdlabel"));

        verticalLayout_2->addWidget(passwdlabel);

        newusrlabel = new QLabel(layoutWidget_2);
        newusrlabel->setObjectName(QString::fromUtf8("newusrlabel"));

        verticalLayout_2->addWidget(newusrlabel);

        newpasswdlabel = new QLabel(layoutWidget_2);
        newpasswdlabel->setObjectName(QString::fromUtf8("newpasswdlabel"));

        verticalLayout_2->addWidget(newpasswdlabel);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        usrlineEdit = new QLineEdit(layoutWidget_2);
        usrlineEdit->setObjectName(QString::fromUtf8("usrlineEdit"));

        verticalLayout->addWidget(usrlineEdit);

        passwdlineEdit = new QLineEdit(layoutWidget_2);
        passwdlineEdit->setObjectName(QString::fromUtf8("passwdlineEdit"));

        verticalLayout->addWidget(passwdlineEdit);

        newusrlineEdit = new QLineEdit(layoutWidget_2);
        newusrlineEdit->setObjectName(QString::fromUtf8("newusrlineEdit"));

        verticalLayout->addWidget(newusrlineEdit);

        newpasswdlineEdit = new QLineEdit(layoutWidget_2);
        newpasswdlineEdit->setObjectName(QString::fromUtf8("newpasswdlineEdit"));

        verticalLayout->addWidget(newpasswdlineEdit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(setDlg);

        QMetaObject::connectSlotsByName(setDlg);
    } // setupUi

    void retranslateUi(QDialog *setDlg)
    {
        setDlg->setWindowTitle(QApplication::translate("setDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        confirmButton->setText(QApplication::translate("setDlg", "confirm", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("setDlg", "cancel", 0, QApplication::UnicodeUTF8));
        usrlabel->setText(QApplication::translate("setDlg", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#2267ed;\">UsrName:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        passwdlabel->setText(QApplication::translate("setDlg", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#2267ed;\">PassWd:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        newusrlabel->setText(QApplication::translate("setDlg", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#2267ed;\">New UsrName:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        newpasswdlabel->setText(QApplication::translate("setDlg", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#2267ed;\">New PassWd:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setDlg: public Ui_setDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETDLG_H
