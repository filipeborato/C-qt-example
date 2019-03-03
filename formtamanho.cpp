#include "formtamanho.h"
#include "ui_formtamanho.h"

FormTamanho::FormTamanho(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormTamanho)
{
    ui->setupUi(this);
}

FormTamanho::~FormTamanho()
{
    delete ui;
}
