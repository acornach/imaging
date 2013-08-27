#ifndef GUITEST3_H
#define GUITEST3_H

#include <QtWidgets/QMainWindow>
#include "ui_guitest3.h"

class GuiTest3 : public QMainWindow
{
	Q_OBJECT

public:
	GuiTest3(QWidget *parent = 0);
	~GuiTest3();

private:
	Ui::GuiTest3Class ui;

	public slots:

		void on_neuronSingleBtn_clicked(){}
		void on_neuronMultipleBtn_clicked(){}
		void on_brainStackBtn_clicked(){}

		void on_closeBtn_clicked (){
			exit(1);
		}

};

#endif // GUITEST3_H
