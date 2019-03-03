/********************************************************************************
** Form generated from reading UI file 'formlistapedidos.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLISTAPEDIDOS_H
#define UI_FORMLISTAPEDIDOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormListaPedidos
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *FormListaPedidos)
    {
        if (FormListaPedidos->objectName().isEmpty())
            FormListaPedidos->setObjectName(QStringLiteral("FormListaPedidos"));
        FormListaPedidos->resize(438, 653);
        listWidget = new QListWidget(FormListaPedidos);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(40, 30, 361, 391));
        pushButton = new QPushButton(FormListaPedidos);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 440, 211, 71));
        QFont font;
        font.setPointSize(12);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(FormListaPedidos);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 530, 201, 51));
        QFont font1;
        font1.setPointSize(11);
        pushButton_2->setFont(font1);

        retranslateUi(FormListaPedidos);

        QMetaObject::connectSlotsByName(FormListaPedidos);
    } // setupUi

    void retranslateUi(QWidget *FormListaPedidos)
    {
        FormListaPedidos->setWindowTitle(QApplication::translate("FormListaPedidos", "Form", nullptr));
        pushButton->setText(QApplication::translate("FormListaPedidos", "FINALIZAR", nullptr));
        pushButton_2->setText(QApplication::translate("FormListaPedidos", "ATUALIZAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormListaPedidos: public Ui_FormListaPedidos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLISTAPEDIDOS_H
