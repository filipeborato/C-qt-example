#ifndef FORMPRODUCAO_H
#define FORMPRODUCAO_H

#include <QWidget>

namespace Ui {
class FormProducao;
}

class FormProducao : public QWidget
{
    Q_OBJECT

public:
    explicit FormProducao(QWidget *parent = 0);
    ~FormProducao();

private:
    Ui::FormProducao *ui;
};

#endif // FORMPRODUCAO_H
