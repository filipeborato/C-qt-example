#ifndef FORMLISTAPEDIDOS_H
#define FORMLISTAPEDIDOS_H

#include <QWidget>




namespace Ui {
class FormListaPedidos;
}

class FormListaPedidos : public QWidget
{
    Q_OBJECT

public:
    explicit FormListaPedidos(QWidget *parent = 0);
    ~FormListaPedidos();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FormListaPedidos *ui;
};


#endif // FORMLISTAPEDIDOS_H
