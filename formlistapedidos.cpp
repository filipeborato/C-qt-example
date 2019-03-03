#include "formlistapedidos.h"
#include "ui_formlistapedidos.h"

#include "mainwindow.h"
#include <QMessageBox>
#include <QtSql>
#include <QSqlQueryModel>
#include <QSqlQuery>


FormListaPedidos::FormListaPedidos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormListaPedidos)
{
    ui->setupUi(this);

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("CARDAPIO");
    db.setUserName("root");
    db.setPassword("root");


    if(db.open()) {
        QString strQry = "SELECT * FROM pedidos WHERE (CODPROD!=NULL)  order by codprod; ";
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
}

FormListaPedidos::~FormListaPedidos()
{
    delete ui;
}

void FormListaPedidos::on_pushButton_clicked()
{

    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("cardapio");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open()) {
        QString strQry = "TRUNCATE TABLE PEDIDOS;";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);


        QMessageBox msg;
        if(query->exec())
            msg.setText("Registro REMOVIDO com sucesso!");
        else
             msg.setText("Houve um erro na REMOÇÃO dos dados!");
        msg.exec();
    }
     ui->listWidget->clear();
    db.close();

}

void FormListaPedidos::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("CARDAPIO");
    db.setUserName("root");
    db.setPassword("root");


    if(db.open()) {
        QString strQry = "SELECT * FROM pedidos order by codprod ";
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
}
