#ifndef CLIENTFORM_H
#define CLIENTFORM_H

#include <QWizardPage>

namespace Ui {
class clientform;
}

class clientform : public QWizardPage
{
    Q_OBJECT

public:
    explicit clientform(QWidget *parent = 0);
    ~clientform();



private slots:
    void on_pushButton_clicked();

private:
    Ui::clientform *clientform_ui;
};

#endif // CLIENTFORM_H
