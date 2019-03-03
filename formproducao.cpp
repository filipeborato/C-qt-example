#include "formproducao.h"
#include "ui_formproducao.h"

FormProducao::FormProducao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormProducao)
{
    ui->setupUi(this);
}

FormProducao::~FormProducao()
{
    delete ui;
}
