/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *titlelabel;
    QGroupBox *groupBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *ffradioButton;
    QRadioButton *tfradioButton;
    QRadioButton *pradioButton;
    QFrame *line;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *nextButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(480, 272);
        titlelabel = new QLabel(Widget);
        titlelabel->setObjectName(QString::fromUtf8("titlelabel"));
        titlelabel->setGeometry(QRect(30, 40, 161, 41));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 90, 391, 51));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 20, 401, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ffradioButton = new QRadioButton(widget);
        ffradioButton->setObjectName(QString::fromUtf8("ffradioButton"));

        horizontalLayout->addWidget(ffradioButton);

        tfradioButton = new QRadioButton(widget);
        tfradioButton->setObjectName(QString::fromUtf8("tfradioButton"));

        horizontalLayout->addWidget(tfradioButton);

        pradioButton = new QRadioButton(widget);
        pradioButton->setObjectName(QString::fromUtf8("pradioButton"));

        horizontalLayout->addWidget(pradioButton);

        line = new QFrame(Widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 220, 481, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget1 = new QWidget(Widget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(270, 170, 178, 29));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        nextButton = new QPushButton(widget1);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout_2->addWidget(nextButton);

        cancelButton = new QPushButton(widget1);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        titlelabel->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#2267ed;\">Cryptor Option:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        ffradioButton->setText(QApplication::translate("Widget", "File Folder", 0, QApplication::UnicodeUTF8));
        tfradioButton->setText(QApplication::translate("Widget", "Text File", 0, QApplication::UnicodeUTF8));
        pradioButton->setText(QApplication::translate("Widget", "Picture", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("Widget", "Next", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Widget", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
