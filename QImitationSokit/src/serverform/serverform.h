#ifndef SERVERFORM_H
#define SERVERFORM_H

#include <QDialog>

namespace Ui {
class serverform;
}

class serverform : public QDialog
{
    Q_OBJECT

public:
    explicit serverform(QWidget *parent = 0);
    ~serverform();

private:
    Ui::serverform *ui;
};

#endif // SERVERFORM_H
