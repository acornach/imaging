#ifndef MULTIPLENEURON_H
#define MULTIPLENEURON_H

#include <QDialog>
#include "ui_multipleneuron.h"

class MultipleNeuron : public QDialog
{
	Q_OBJECT

public:
	MultipleNeuron(QWidget *parent = 0);
	~MultipleNeuron();

private:
	Ui::MultipleNeuron ui;
};

#endif // MULTIPLENEURON_H
