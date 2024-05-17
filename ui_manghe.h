/********************************************************************************
** Form generated from reading UI file 'manghe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANGHE_H
#define UI_MANGHE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Manghe
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *openmh;
    QPushButton *returnmenu;

    void setupUi(QWidget *Manghe)
    {
        if (Manghe->objectName().isEmpty())
            Manghe->setObjectName("Manghe");
        Manghe->resize(800, 600);
        Manghe->setMinimumSize(QSize(800, 600));
        Manghe->setMaximumSize(QSize(800, 600));
        horizontalLayoutWidget = new QWidget(Manghe);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(110, 440, 581, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(80);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        openmh = new QPushButton(horizontalLayoutWidget);
        openmh->setObjectName("openmh");

        horizontalLayout->addWidget(openmh);

        returnmenu = new QPushButton(horizontalLayoutWidget);
        returnmenu->setObjectName("returnmenu");

        horizontalLayout->addWidget(returnmenu);


        retranslateUi(Manghe);

        QMetaObject::connectSlotsByName(Manghe);
    } // setupUi

    void retranslateUi(QWidget *Manghe)
    {
        Manghe->setWindowTitle(QCoreApplication::translate("Manghe", "Form", nullptr));
        openmh->setText(QCoreApplication::translate("Manghe", "\345\274\200\345\220\257\347\233\262\347\233\222", nullptr));
        returnmenu->setText(QCoreApplication::translate("Manghe", "\350\277\224\345\233\236\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Manghe: public Ui_Manghe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANGHE_H
