#ifndef QIMITATIONSOKIT_H
#define QIMITATIONSOKIT_H

#include <QDialog>


#include "setting.h"
#include <QTabWidget>



class QImitationSokit : public QDialog
{
    Q_OBJECT

public:
    QImitationSokit(QWidget *parent = 0);
    ~QImitationSokit();


    //base
    void init_ui();

private:
   QTabWidget * tabQidget;


signals:

public slots:





};

#endif // QIMITATIONSOKIT_H
