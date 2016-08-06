#include "qimitationsokit.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QImitationSokit w;


    w.init_ui();

     w.show();

    return a.exec();
}
