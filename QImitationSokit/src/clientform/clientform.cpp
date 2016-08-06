#include "clientform.h"
#include "ui_clientform.h"

clientform::clientform(QWidget *parent) :
    QWizardPage(parent),
    clientform_ui(new Ui::clientform)
{
    clientform_ui->setupUi(this);
}

clientform::~clientform()
{
    delete clientform_ui;
}

void clientform::on_pushButton_clicked()
{
    clientform_ui->label->setText("sssssb");
}
