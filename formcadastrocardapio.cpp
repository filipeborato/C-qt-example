#include "formcadastrocardapio.h"
#include "ui_formcadastrocardapio.h"

#include <QMessageBox>
#include <QtSql>
#include <QSqlQueryModel>
#include <QSqlQuery>



FormCadastroCardapio::FormCadastroCardapio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormCadastroCardapio)
{
    ui->setupUi(this);


}

FormCadastroCardapio::~FormCadastroCardapio()
{
    delete ui;
}

void FormCadastroCardapio::on_pushButton_5_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("cardapio");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open()) {
        if(ui->radioButton->isChecked() || ui->radioButton_2->isChecked()   || ui->radioButton_3->isChecked()  || ui->radioButton_4->isChecked() ){
            if(ui->radioButton->isChecked()){
                QString strQry = "INSERT INTO TAMANHO(tamanho) VALUES(?)";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);
                if(ui->lineEdit->text()!='\0')
                query->addBindValue(ui->lineEdit->text());


                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro inserido com sucesso!");
                else
                    msg.setText("Houve um erro na insercao dos dados!");
                msg.exec();
            }
            if(ui->radioButton_2->isChecked()){
                QString strQry = "INSERT INTO SABORES(sabores) VALUES(?)";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);

              if(ui->lineEdit->text()!='\0')
                query->addBindValue(ui->lineEdit->text());

                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro inserido com sucesso!");
                else
                    msg.setText("Houve um erro na insercao dos dados!");
                msg.exec();

            }
            if(ui->radioButton_3->isChecked()){
                QString strQry = "INSERT INTO OPCIONAIS(opcionais) VALUES(?)";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);
               if(ui->lineEdit->text()!='\0')
                query->addBindValue(ui->lineEdit->text());

                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro inserido com sucesso!");
                else
                    msg.setText("Houve um erro na insercao dos dados!");
                msg.exec();

            }
            if(ui->radioButton_4->isChecked()){
                QString strQry = "INSERT INTO BEBIDAS(bebidas) VALUES(?)";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);
               if(ui->lineEdit->text()!='\0')
                query->addBindValue(ui->lineEdit->text());

                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro inserido com sucesso!");
                else
                    msg.setText("Houve um erro na insercao dos dados!");
                msg.exec();

            }


       }
        else{
            QMessageBox msg;
            msg.setText("Houve um erro na insercao dos dados. Selecione umas das opcoes");
        msg.exec();

        }

    db.close();
    }
    ui->lineEdit->clear();
}

void FormCadastroCardapio::on_radioButton_clicked()
{
    ui->listWidget->clear();
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("cardapio");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open()) {
        QString strQry = "SELECT * FROM TAMANHO";
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

void FormCadastroCardapio::on_radioButton_2_clicked()
{
    ui->listWidget->clear();
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("cardapio");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open()) {
        QString strQry = "SELECT * FROM SABORES";
        QSqlQuery * query = new QSqlQuery(db);
        query->prepare(strQry);
        query->exec();


    while(query->next()) { // avanca para o proximo registro
        QString tmp;


        tmp = query->value(1).toString(); // le o campo da coluna 1
        if(tmp!=NULL){

        ui->listWidget->addItem(tmp) ; // adiciona tmp a lista

       }
    }
    db.close();
    }

}

void FormCadastroCardapio::on_radioButton_3_clicked()
{
    ui->listWidget->clear();
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("cardapio");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open()) {
        QString strQry = "SELECT * FROM OPCIONAIS";
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

void FormCadastroCardapio::on_radioButton_4_clicked()
{
    ui->listWidget->clear();
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("cardapio");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open()) {
        QString strQry = "SELECT * FROM BEBIDAS";
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

void FormCadastroCardapio::on_pushButton_7_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("cardapio");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open()) {
        if(ui->radioButton->isChecked() || ui->radioButton_2->isChecked()   || ui->radioButton_3->isChecked()  || ui->radioButton_4->isChecked() ){
            if(ui->radioButton->isChecked()){
                QString strQry = "DELETE FROM TAMANHO WHERE(tamanho=?);";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);
               query->addBindValue(listcrick);

                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro REMOVIDO com sucesso!");
                else
                     msg.setText("Houve um erro na REMOÇÃO dos dados!");
                msg.exec();
            }



            if(ui->radioButton_2->isChecked()){
                QString strQry = "DELETE FROM SABORES WHERE(sabores=?);";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);
                query->addBindValue((listcrick));

                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro REMOVIDO com sucesso!");
                else
                     msg.setText("Houve um erro na REMOÇÃO dos dados!");
                msg.exec();
            }

            if(ui->radioButton_3->isChecked()){
                QString strQry = "DELETE FROM OPCIONAIS WHERE(opcionais=?);";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);

                query->addBindValue((listcrick));


                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro REMOVIDO com sucesso!");
                else
                     msg.setText("Houve um erro na REMOÇÃO dos dados!");
                msg.exec();
            }

            if(ui->radioButton_4->isChecked()){
                QString strQry = "DELETE FROM BEBIDAS WHERE(bebidas=?);";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);
                query->addBindValue((listcrick));

                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro REMOVIDO com sucesso!");
                else
                      msg.setText("Houve um erro na REMOÇÃO dos dados!");
                msg.exec();
            }

        }

        else{
            QMessageBox msg;
            msg.setText("Houve um erro na insercao dos dados. Selecione umas das opcoes");
        msg.exec();

        }

    }
    db.close();
}

void FormCadastroCardapio::on_listWidget_currentTextChanged(const QString &currentText)
{
    listcrick=currentText;
}

void FormCadastroCardapio::on_pushButton_6_clicked()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("cardapio");
    db.setUserName("root");
    db.setPassword("root");
    if(db.open()) {
        if(ui->radioButton->isChecked() || ui->radioButton_2->isChecked()   || ui->radioButton_3->isChecked()  || ui->radioButton_4->isChecked() ){
            if(ui->radioButton->isChecked()){
                QString strQry = "UPDATE TAMANHO SET TAMANHO = ? WHERE TAMANHO=?;";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);
                if(ui->lineEdit->text()!='\0')
                query->addBindValue(ui->lineEdit->text());
                query->addBindValue(listcrick);

                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro ALTERADO com sucesso!");
                else
                     msg.setText("Houve um erro na ALTERAÇÃO dos dados!");
                msg.exec();
            }


            if(ui->radioButton_2->isChecked()){
                QString strQry = "UPDATE SABORES SET SABORES = ? WHERE SABORES=?;";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);

               if(ui->lineEdit->text()!='\0')
               query->addBindValue(ui->lineEdit->text());
               query->addBindValue(listcrick);

                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro ALTERADO com sucesso!");
                else
                     msg.setText("Houve um erro na ALTERAÇÃO dos dados!");
                msg.exec();
            }

            if(ui->radioButton_3->isChecked()){
                QString strQry = "UPDATE OPCIONAIS SET OPCIONAIS = ? WHERE OPCIONAIS=?;";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);
               if(ui->lineEdit->text()!='\0')
                query->addBindValue(ui->lineEdit->text());
                query->addBindValue(listcrick);

                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro ALTERADO com sucesso!");
                else
                     msg.setText("Houve um erro na ALTERAÇÃO dos dados!");
                msg.exec();
            }

            /*
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
            */

            if(ui->radioButton_4->isChecked()){
                QString strQry = "UPDATE BEBIDAS SET BEBIDAS = ? WHERE BEBIDAS=?;";
                QSqlQuery * query = new QSqlQuery(db);
                query->prepare(strQry);
                if(ui->lineEdit->text()!='\0')
                query->addBindValue(ui->lineEdit->text());
               query->addBindValue(listcrick);
                QMessageBox msg;
                if(query->exec())
                    msg.setText("Registro ALTERADO com sucesso!");
                else
                     msg.setText("Houve um erro na ALTERAÇÃO dos dados!");
                msg.exec();
            }

        }

        else{
            QMessageBox msg;
            msg.setText("Houve um erro na insercao dos dados. Selecione umas das opcoes");
        msg.exec();

        }
}
db.close();
}
