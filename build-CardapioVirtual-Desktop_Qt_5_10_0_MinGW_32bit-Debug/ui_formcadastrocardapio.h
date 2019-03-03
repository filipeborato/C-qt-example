/********************************************************************************
** Form generated from reading UI file 'formcadastrocardapio.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCADASTROCARDAPIO_H
#define UI_FORMCADASTROCARDAPIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCadastroCardapio
{
public:
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;

    void setupUi(QWidget *FormCadastroCardapio)
    {
        if (FormCadastroCardapio->objectName().isEmpty())
            FormCadastroCardapio->setObjectName(QStringLiteral("FormCadastroCardapio"));
        FormCadastroCardapio->resize(454, 414);
        label = new QLabel(FormCadastroCardapio);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 30, 171, 16));
        pushButton_5 = new QPushButton(FormCadastroCardapio);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(220, 110, 75, 23));
        pushButton_6 = new QPushButton(FormCadastroCardapio);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(320, 160, 75, 23));
        pushButton_7 = new QPushButton(FormCadastroCardapio);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(320, 200, 75, 23));
        lineEdit = new QLineEdit(FormCadastroCardapio);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 110, 161, 20));
        listWidget = new QListWidget(FormCadastroCardapio);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 150, 256, 192));
        radioButton = new QRadioButton(FormCadastroCardapio);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(90, 50, 82, 17));
        radioButton_2 = new QRadioButton(FormCadastroCardapio);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(180, 50, 82, 17));
        radioButton_3 = new QRadioButton(FormCadastroCardapio);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(280, 50, 82, 17));
        radioButton_4 = new QRadioButton(FormCadastroCardapio);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(360, 50, 82, 17));

        retranslateUi(FormCadastroCardapio);

        QMetaObject::connectSlotsByName(FormCadastroCardapio);
    } // setupUi

    void retranslateUi(QWidget *FormCadastroCardapio)
    {
        FormCadastroCardapio->setWindowTitle(QApplication::translate("FormCadastroCardapio", "Form", nullptr));
        label->setText(QApplication::translate("FormCadastroCardapio", "QUAL \303\215TEM DESEJA ALTERAR?", nullptr));
        pushButton_5->setText(QApplication::translate("FormCadastroCardapio", "Inserir", nullptr));
        pushButton_6->setText(QApplication::translate("FormCadastroCardapio", "Alterar", nullptr));
        pushButton_7->setText(QApplication::translate("FormCadastroCardapio", "Excluir", nullptr));
        radioButton->setText(QApplication::translate("FormCadastroCardapio", "Tamanho", nullptr));
        radioButton_2->setText(QApplication::translate("FormCadastroCardapio", "Sabores", nullptr));
        radioButton_3->setText(QApplication::translate("FormCadastroCardapio", "Opcionais", nullptr));
        radioButton_4->setText(QApplication::translate("FormCadastroCardapio", "Bebidas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormCadastroCardapio: public Ui_FormCadastroCardapio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCADASTROCARDAPIO_H
