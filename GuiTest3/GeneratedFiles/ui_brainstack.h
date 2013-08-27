/********************************************************************************
** Form generated from reading UI file 'brainstack.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRAINSTACK_H
#define UI_BRAINSTACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_BrainStack
{
public:

    void setupUi(QDialog *BrainStack)
    {
        if (BrainStack->objectName().isEmpty())
            BrainStack->setObjectName(QStringLiteral("BrainStack"));
        BrainStack->resize(400, 300);

        retranslateUi(BrainStack);

        QMetaObject::connectSlotsByName(BrainStack);
    } // setupUi

    void retranslateUi(QDialog *BrainStack)
    {
        BrainStack->setWindowTitle(QApplication::translate("BrainStack", "BrainStack", 0));
    } // retranslateUi

};

namespace Ui {
    class BrainStack: public Ui_BrainStack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRAINSTACK_H
