/********************************************************************************
** Form generated from reading UI file 'multipleneuron.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIPLENEURON_H
#define UI_MULTIPLENEURON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MultipleNeuron
{
public:
    QPushButton *closeBtn;

    void setupUi(QDialog *MultipleNeuron)
    {
        if (MultipleNeuron->objectName().isEmpty())
            MultipleNeuron->setObjectName(QStringLiteral("MultipleNeuron"));
        MultipleNeuron->resize(400, 300);
        closeBtn = new QPushButton(MultipleNeuron);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(160, 200, 75, 23));

        retranslateUi(MultipleNeuron);

        QMetaObject::connectSlotsByName(MultipleNeuron);
    } // setupUi

    void retranslateUi(QDialog *MultipleNeuron)
    {
        MultipleNeuron->setWindowTitle(QApplication::translate("MultipleNeuron", "MultipleNeuron", 0));
        closeBtn->setText(QApplication::translate("MultipleNeuron", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class MultipleNeuron: public Ui_MultipleNeuron {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIPLENEURON_H
