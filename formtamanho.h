#ifndef FORMTAMANHO_H
#define FORMTAMANHO_H

#include <QWidget>

namespace Ui {
class FormTamanho;
}

class FormTamanho : public QWidget
{
    Q_OBJECT

public:
    explicit FormTamanho(QWidget *parent = 0);
    ~FormTamanho();

private:
    Ui::FormTamanho *ui;
};

#endif // FORMTAMANHO_H
