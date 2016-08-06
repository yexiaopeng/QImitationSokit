#include "qimitationsokit.h"

#include "clientform/clientform.h"
#include <QTabWidget>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include<QLineEdit>

QImitationSokit::QImitationSokit(QWidget *parent)
    : QDialog(parent)
{
    this->tabQidget    = new QTabWidget;

    //new first  page
//    QWidget * widget =  new QWidget();
//    QLineEdit *lineEdit = new QLineEdit();
//    QPushButton *pushButton = new QPushButton("Test");
//    QVBoxLayout *vLayout = new QVBoxLayout();
//    vLayout->addWidget(lineEdit);
//    vLayout->addWidget(pushButton);
//    widget->setLayout(vLayout);

//    tabQidget->addTab(widget,"test11");

    clientform * client = new clientform();
     tabQidget->addTab(client,"clinett");


    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(tabQidget);

    this->setLayout(layout);
    this->resize(400, 300);
}

QImitationSokit::~QImitationSokit()
{

}

void QImitationSokit::init_ui()
{


}




