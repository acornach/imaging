/********************************************************************************
** Form generated from reading UI file 'singleneuron.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLENEURON_H
#define UI_SINGLENEURON_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_SingleNeuron
{
public:

    void setupUi(QDialog *SingleNeuron)
    {
        if (SingleNeuron->objectName().isEmpty())
            SingleNeuron->setObjectName(QStringLiteral("SingleNeuron"));
        SingleNeuron->resize(400, 300);

        retranslateUi(SingleNeuron);

        QMetaObject::connectSlotsByName(SingleNeuron);
    } // setupUi

    void retranslateUi(QDialog *SingleNeuron)
    {
        SingleNeuron->setWindowTitle(QApplication::translate("SingleNeuron", "SingleNeuron", 0));
    } // retranslateUi

};

namespace Ui {
    class SingleNeuron: public Ui_SingleNeuron {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLENEURON_H
