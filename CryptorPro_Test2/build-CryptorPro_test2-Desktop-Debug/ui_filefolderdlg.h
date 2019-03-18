/********************************************************************************
** Form generated from reading UI file 'filefolderdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEFOLDERDLG_H
#define UI_FILEFOLDERDLG_H

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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filefolderDlg
{
public:
    QLabel *titlelabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *filefolderlineEdit;
    QPushButton *browseButton;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *encryptButton;
    QPushButton *decryptButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *filefolderDlg)
    {
        if (filefolderDlg->objectName().isEmpty())
            filefolderDlg->setObjectName(QString::fromUtf8("filefolderDlg"));
        filefolderDlg->resize(480, 272);
        titlelabel = new QLabel(filefolderDlg);
        titlelabel->setObjectName(QString::fromUtf8("titlelabel"));
        titlelabel->setGeometry(QRect(20, 50, 141, 20));
        widget = new QWidget(filefolderDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 90, 371, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        filefolderlineEdit = new QLineEdit(widget);
        filefolderlineEdit->setObjectName(QString::fromUtf8("filefolderlineEdit"));

        horizontalLayout->addWidget(filefolderlineEdit);

        browseButton = new QPushButton(widget);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        horizontalLayout->addWidget(browseButton);

        widget1 = new QWidget(filefolderDlg);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(90, 190, 269, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        encryptButton = new QPushButton(widget1);
        encryptButton->setObjectName(QString::fromUtf8("encryptButton"));

        horizontalLayout_2->addWidget(encryptButton);

        decryptButton = new QPushButton(widget1);
        decryptButton->setObjectName(QString::fromUtf8("decryptButton"));

        horizontalLayout_2->addWidget(decryptButton);

        cancelButton = new QPushButton(widget1);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        retranslateUi(filefolderDlg);

        QMetaObject::connectSlotsByName(filefolderDlg);
    } // setupUi

    void retranslateUi(QDialog *filefolderDlg)
    {
        filefolderDlg->setWindowTitle(QApplication::translate("filefolderDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        titlelabel->setText(QApplication::translate("filefolderDlg", "<html><head/><body><p><span style=\" font-size:12pt; color:#2267ec;\"> Choose FilleFolder:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QApplication::translate("filefolderDlg", "Browse", 0, QApplication::UnicodeUTF8));
        encryptButton->setText(QApplication::translate("filefolderDlg", "encrypt", 0, QApplication::UnicodeUTF8));
        decryptButton->setText(QApplication::translate("filefolderDlg", "decrypt", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("filefolderDlg", "cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class filefolderDlg: public Ui_filefolderDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEFOLDERDLG_H
