#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "formcadastrocardapio.h"
#include "formlistapedidos.h"


#include <QMessageBox>
#include <QtSql>
#include <QSqlQueryModel>
#include <QSqlQuery>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("CARDAPIO");
    db.setUserName("root");
    db.setPassword("root");
    QMessageBox msg;
    if(db.open())
    msg.setText("Conexao realizada com sucesso!");
    else
    msg.setText("Houve um erro na conexao!");
    msg.exec();

    if(db.open()) {
        QString strQry = "SELECT * FROM TAMANHO ORDER BY tamanho";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->exec();


    while(query->next()) { // avanca para o proximo registro
        QString tmp;


        tmp = query->value(1).toString(); // le o campo da coluna 1
        if(tmp!=NULL)
        ui->listWidget->addItem(tmp) ; // adiciona tmp a lista
    }
    db.close();
    }

    if(db.open()) {
        QString strQry = "SELECT * FROM SABORES ORDER BY Sabores";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->exec();


    while(query->next()) { // avanca para o proximo registro
        QString tmp;


        tmp = query->value(1).toString(); // le o campo da coluna 1
        if(tmp!=NULL)
        ui->listWidget_2->addItem(tmp) ; // adiciona tmp a lista
    }
    db.close();
    }

    if(db.open()) {
        QString strQry = "SELECT * FROM OPCIONAIS order by opcionais";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->exec();


    while(query->next()) { // avanca para o proximo registro
        QString tmp;


        tmp = query->value(1).toString(); // le o campo da coluna 1
        if(tmp!=NULL)
        ui->listWidget_3->addItem(tmp) ; // adiciona tmp a lista
    }
    db.close();
    }
    if(db.open()) {
        QString strQry = "SELECT * FROM BEBIDAS order by bebidas";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->exec();


    while(query->next()) { // avanca para o proximo registro
        QString tmp;


        tmp = query->value(1).toString(); // le o campo da coluna 1
        if(tmp!=NULL)
        ui->listWidget_4->addItem(tmp) ; // adiciona tmp a lista
    }
    db.close();
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCadastrar_Card_pio_triggered()
{
    cadastro.show();
}




void MainWindow::on_listWidget_currentTextChanged(const QString &currentText)
{
    if(currentText!='\0'){
    ui->listWidget_5->addItem(currentText);
    products[i++]=currentText;
    }

}

void MainWindow::on_listWidget_2_currentTextChanged(const QString &currentText)
{
    if(currentText!='\0'){
    ui->listWidget_5->addItem(currentText);
    products[i++]=currentText;
    }
}

void MainWindow::on_listWidget_3_currentTextChanged(const QString &currentText)
{
    if(currentText!='\0'){
    ui->listWidget_5->addItem(currentText);
    products[i++]=currentText;
    }
}

void MainWindow::on_listWidget_4_currentTextChanged(const QString &currentText)
{

    if(currentText!='\0'){
    ui->listWidget_5->addItem(currentText);
    products[i++]=currentText;
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    /*
    QMessageBox msg;
    msg.setText(QString::number(i));
    msg.exec();*/
    ui->listWidget_5->clear();


    for(int j=0;j<=i;j++){


        products[j]='\0';
    }

     i=0;
}






void MainWindow::on_actionPedidos_triggered()
{
    pedidos.show();
}

void MainWindow::on_pushButton_clicked()
{

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("cardapio");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open()) {


        QString strQry = "INSERT INTO PEDIDOS(PEDIDOS) VALUES(?)";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->addBindValue(products[0]);

        for(int j=1;j<i;j++){
            QString strQry = "INSERT INTO PEDIDOS(PEDIDOS) VALUES(?)";
            QSqlQuery * query = new QSqlQuery(db);
            query->prepare(strQry);

            if(products[j]!='\0')
            query->addBindValue(products[j]);
            query->exec();
        }
        QMessageBox msg;
        if(query->exec())
            msg.setText("Registro inserido com sucesso!");
        else
            msg.setText("Houve um erro na insercao dos dados!");
        msg.exec();
    }
    ui->listWidget_5->clear();
    for(int j=0;j<=i;j++){


        products[j]='\0';
    }

     i=0;

    db.close();


}

void MainWindow::on_pushButton_3_clicked()
{
    ui->listWidget->clear();
    ui->listWidget_2->clear();
    ui->listWidget_3->clear();
    ui->listWidget_4->clear();
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("CARDAPIO");
    db.setUserName("root");
    db.setPassword("root");
    QMessageBox msg;
    if(db.open())
    msg.setText("Conexao realizada com sucesso!");
    else
    msg.setText("Houve um erro na conexao!");
    msg.exec();

    if(db.open()) {
        QString strQry = "SELECT * FROM TAMANHO ORDER BY tamanho";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->exec();


    while(query->next()) { // avanca para o proximo registro
        QString tmp;


        tmp = query->value(1).toString(); // le o campo da coluna 1
        if(tmp!=NULL)
        {
        ui->listWidget->addItem(tmp) ; // adiciona tmp a lista
        }
    }
    db.close();
    }

    if(db.open()) {
        QString strQry = "SELECT * FROM SABORES ORDER BY Sabores";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->exec();


    while(query->next()) { // avanca para o proximo registro
        QString tmp;


        tmp = query->value(1).toString(); // le o campo da coluna 1
        if(tmp!=NULL)
        {

        ui->listWidget_2->addItem(tmp) ; // adiciona tmp a lista
        }
    }
    db.close();
    }

    if(db.open()) {
        QString strQry = "SELECT * FROM OPCIONAIS order by opcionais";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->exec();


    while(query->next()) { // avanca para o proximo registro
        QString tmp;


        tmp = query->value(1).toString(); // le o campo da coluna 1
        if(tmp!=NULL)
        {

        ui->listWidget_3->addItem(tmp) ; // adiciona tmp a lista
        }
    }
    db.close();
    }
    if(db.open()) {
        QString strQry = "SELECT * FROM BEBIDAS order by bebidas";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->exec();


    while(query->next()) { // avanca para o proximo registro
        QString tmp;


        tmp = query->value(1).toString(); // le o campo da coluna 1
        if(tmp!=NULL)
        {

           ui->listWidget_4->addItem(tmp) ; // adiciona tmp a lista
        }

    }
    db.close();
    }

}

void MainWindow::on_actionFazer_pedido_triggered()
{
    close();
}
