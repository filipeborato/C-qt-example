#ifndef FORMCADASTROCARDAPIO_H
#define FORMCADASTROCARDAPIO_H

#include <QWidget>


namespace Ui {
class FormCadastroCardapio;
}

class FormCadastroCardapio : public QWidget
{
    Q_OBJECT

public:
    explicit FormCadastroCardapio(QWidget *parent = 0);
    ~FormCadastroCardapio();

private slots:
    void on_pushButton_5_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_pushButton_7_clicked();


    void on_listWidget_currentTextChanged(const QString &currentText);

    void on_pushButton_6_clicked();

private:
    Ui::FormCadastroCardapio *ui;
    QString listcrick;
};

#endif // FORMCADASTROCARDAPIO_H
