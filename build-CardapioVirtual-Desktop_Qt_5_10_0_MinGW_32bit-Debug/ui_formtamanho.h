/********************************************************************************
** Form generated from reading UI file 'formtamanho.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTAMANHO_H
#define UI_FORMTAMANHO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormTamanho
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *FormTamanho)
    {
        if (FormTamanho->objectName().isEmpty())
            FormTamanho->setObjectName(QStringLiteral("FormTamanho"));
        FormTamanho->resize(400, 300);
        tableWidget = new QTableWidget(FormTamanho);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 50, 131, 192));

        retranslateUi(FormTamanho);

        QMetaObject::connectSlotsByName(FormTamanho);
    } // setupUi

    void retranslateUi(QWidget *FormTamanho)
    {
        FormTamanho->setWindowTitle(QApplication::translate("FormTamanho", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTamanho: public Ui_FormTamanho {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTAMANHO_H
