#ifndef BRAINSTACK_H
#define BRAINSTACK_H

#include <QDialog>
#include "ui_brainstack.h"

class BrainStack : public QDialog
{
	Q_OBJECT

public:
	BrainStack(QWidget *parent = 0);
	~BrainStack();

private:
	Ui::BrainStack ui;
};

#endif // BRAINSTACK_H
