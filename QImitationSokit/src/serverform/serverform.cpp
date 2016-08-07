#include "serverform.h"
#include "ui_serverform.h"

serverform::serverform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::serverform)
{
    ui->setupUi(this);
}

serverform::~serverform()
{
    delete ui;
}
