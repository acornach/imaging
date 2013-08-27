#ifndef GUITEST3_H
#define GUITEST3_H

#include <QtWidgets/QMainWindow>
#include "ui_guitest3.h"
#include "singleneuron.h"
#include "multipleneuron.h"
#include "brainstack.h"

class GuiTest3 : public QMainWindow
{
	Q_OBJECT

public:
	GuiTest3(QWidget *parent = 0);
	~GuiTest3();

private:
	Ui::GuiTest3Class ui;
	public slots:

		void on_neuronSingleBtn_clicked(){
			SingleNeuron neurWin;
			neurWin.setModal(true);
			neurWin.exec();
		}
		void on_neuronMultipleBtn_clicked(){
			MultipleNeuron neurDial;
			neurDial.setModal(true);
			neurDial.exec();

		}
		void on_brainStackBtn_clicked(){
			BrainStack brainDial;
			brainDial.setModal(true);
			brainDial.exec();
		}

		void on_closeBtn_clicked (){
			exit(1);
		}

};

#endif // GUITEST3_H
