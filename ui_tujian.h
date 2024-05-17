/********************************************************************************
** Form generated from reading UI file 'tujian.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUJIAN_H
#define UI_TUJIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tujian
{
public:
    QPushButton *previous;
    QPushButton *next;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    QLabel *label_2;
    QPushButton *returnmenu;

    void setupUi(QWidget *Tujian)
    {
        if (Tujian->objectName().isEmpty())
            Tujian->setObjectName("Tujian");
        Tujian->resize(800, 600);
        Tujian->setMinimumSize(QSize(800, 600));
        Tujian->setMaximumSize(QSize(800, 600));
        previous = new QPushButton(Tujian);
        previous->setObjectName("previous");
        previous->setGeometry(QRect(20, 560, 93, 28));
        next = new QPushButton(Tujian);
        next->setObjectName("next");
        next->setGeometry(QRect(690, 560, 93, 28));
        stackedWidget = new QStackedWidget(Tujian);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 0, 801, 601));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 560, 81, 21));
        label->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(350, 560, 81, 21));
        label_2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);
        returnmenu = new QPushButton(Tujian);
        returnmenu->setObjectName("returnmenu");
        returnmenu->setGeometry(QRect(10, 10, 93, 28));
        stackedWidget->raise();
        previous->raise();
        next->raise();
        returnmenu->raise();

        retranslateUi(Tujian);

        QMetaObject::connectSlotsByName(Tujian);
    } // setupUi

    void retranslateUi(QWidget *Tujian)
    {
        Tujian->setWindowTitle(QCoreApplication::translate("Tujian", "Form", nullptr));
        previous->setText(QCoreApplication::translate("Tujian", "\344\270\212\344\270\200\351\241\265", nullptr));
        next->setText(QCoreApplication::translate("Tujian", "\344\270\213\344\270\200\351\241\265", nullptr));
        label->setText(QCoreApplication::translate("Tujian", "\347\254\2541\351\241\265", nullptr));
        label_2->setText(QCoreApplication::translate("Tujian", "\347\254\2542\351\241\265", nullptr));
        returnmenu->setText(QCoreApplication::translate("Tujian", "\350\277\224\345\233\236\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tujian: public Ui_Tujian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUJIAN_H
