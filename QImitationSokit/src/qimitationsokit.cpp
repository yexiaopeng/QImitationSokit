#include "qimitationsokit.h"


#include <QTabWidget>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>

#include "clientform/clientform.h"
#include "serverform/serverform.h"


QImitationSokit::QImitationSokit(QWidget *parent)
    : QDialog(parent)
{
    this->tabQidget    = new QTabWidget;

    //new first  page

    clientform * client = new clientform();
    tabQidget->addTab(client,"客户端");

    serverform * server = new serverform();
    tabQidget->addTab(server,"服务器");

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(tabQidget);

    this->setLayout(layout);
    this->resize(850, 530);
    this->setMinimumSize(850, 530);
    this->setMaximumSize(850, 530);
}

QImitationSokit::~QImitationSokit()
{

}

void QImitationSokit::init_ui()
{


}




