/********************************************************************************
** Form generated from reading UI file 'guitest3.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUITEST3_H
#define UI_GUITEST3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiTest3Class
{
public:
    QWidget *centralWidget;
    QLabel *btnLabel;
    QPushButton *closeBtn;
    QPushButton *neuronSingleBtn;
    QPushButton *neuronMultipleBtn;
    QPushButton *brainStackBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GuiTest3Class)
    {
        if (GuiTest3Class->objectName().isEmpty())
            GuiTest3Class->setObjectName(QStringLiteral("GuiTest3Class"));
        GuiTest3Class->resize(600, 400);
        centralWidget = new QWidget(GuiTest3Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        btnLabel = new QLabel(centralWidget);
        btnLabel->setObjectName(QStringLiteral("btnLabel"));
        btnLabel->setGeometry(QRect(10, 10, 581, 51));
        closeBtn = new QPushButton(centralWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(260, 270, 75, 23));
        neuronSingleBtn = new QPushButton(centralWidget);
        neuronSingleBtn->setObjectName(QStringLiteral("neuronSingleBtn"));
        neuronSingleBtn->setGeometry(QRect(104, 100, 381, 23));
        neuronMultipleBtn = new QPushButton(centralWidget);
        neuronMultipleBtn->setObjectName(QStringLiteral("neuronMultipleBtn"));
        neuronMultipleBtn->setGeometry(QRect(104, 160, 381, 23));
        brainStackBtn = new QPushButton(centralWidget);
        brainStackBtn->setObjectName(QStringLiteral("brainStackBtn"));
        brainStackBtn->setGeometry(QRect(104, 220, 381, 23));
        GuiTest3Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GuiTest3Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        GuiTest3Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GuiTest3Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        GuiTest3Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GuiTest3Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GuiTest3Class->setStatusBar(statusBar);
        toolBar = new QToolBar(GuiTest3Class);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        GuiTest3Class->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(GuiTest3Class);

        QMetaObject::connectSlotsByName(GuiTest3Class);
    } // setupUi

    void retranslateUi(QMainWindow *GuiTest3Class)
    {
        GuiTest3Class->setWindowTitle(QApplication::translate("GuiTest3Class", "GuiTest3", 0));
        btnLabel->setText(QApplication::translate("GuiTest3Class", "<html><head/><body><p align=\"center\"><span style=\" font-size:26pt; color:#344bcf;\">Brain Slice Analyzer</span></p></body></html>", 0));
        closeBtn->setText(QApplication::translate("GuiTest3Class", "Close", 0));
        neuronSingleBtn->setText(QApplication::translate("GuiTest3Class", "Neuron Counting and Filtering (Single Image)", 0));
        neuronMultipleBtn->setText(QApplication::translate("GuiTest3Class", "Neuron Counting and Filtering (Multiple Images)", 0));
        brainStackBtn->setText(QApplication::translate("GuiTest3Class", "Brain Slice Stacking and Filtering", 0));
        toolBar->setWindowTitle(QApplication::translate("GuiTest3Class", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class GuiTest3Class: public Ui_GuiTest3Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUITEST3_H
