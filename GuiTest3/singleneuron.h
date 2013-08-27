#ifndef SINGLENEURON_H
#define SINGLENEURON_H

#include <QDialog>
#include "ui_singleneuron.h"

class SingleNeuron : public QDialog
{
	Q_OBJECT

public:
	SingleNeuron(QWidget *parent = 0);
	~SingleNeuron();

private:
	Ui::SingleNeuron ui;
};

#endif // SINGLENEURON_H
