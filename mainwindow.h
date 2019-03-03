#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "formcadastrocardapio.h"
#include "formlistapedidos.h"



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:
    void on_actionCadastrar_Card_pio_triggered();
    void on_actionPedidos_triggered();



    void on_listWidget_currentTextChanged(const QString &currentText);

    void on_listWidget_2_currentTextChanged(const QString &currentText);

    void on_listWidget_3_currentTextChanged(const QString &currentText);

    void on_listWidget_4_currentTextChanged(const QString &currentText);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();




    void on_pushButton_3_clicked();

    void on_actionFazer_pedido_triggered();

    void on_listWidget_activated(const QModelIndex &index);

    void on_listWidget_5_activated(const QModelIndex &index);

private:
    Ui::MainWindow *ui;
    FormCadastroCardapio cadastro;
    FormListaPedidos pedidos;
     QString products[100];
    int i=0;


};

#endif // MAINWINDOW_H
