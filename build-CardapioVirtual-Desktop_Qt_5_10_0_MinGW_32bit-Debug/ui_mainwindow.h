/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFazer_pedido;
    QAction *actionCadastrar_Card_pio;
    QAction *actionPedidos;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QListWidget *listWidget_4;
    QListWidget *listWidget_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menuCARD_PIO;
    QMenu *menuPEDIDO;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(862, 567);
        actionFazer_pedido = new QAction(MainWindow);
        actionFazer_pedido->setObjectName(QStringLiteral("actionFazer_pedido"));
        actionCadastrar_Card_pio = new QAction(MainWindow);
        actionCadastrar_Card_pio->setObjectName(QStringLiteral("actionCadastrar_Card_pio"));
        actionPedidos = new QAction(MainWindow);
        actionPedidos->setObjectName(QStringLiteral("actionPedidos"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 430, 75, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 70, 81, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 70, 71, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(510, 70, 81, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(700, 70, 61, 16));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(40, 110, 201, 171));
        listWidget_2 = new QListWidget(centralWidget);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(240, 110, 211, 171));
        listWidget_3 = new QListWidget(centralWidget);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(450, 110, 191, 171));
        listWidget_4 = new QListWidget(centralWidget);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));
        listWidget_4->setGeometry(QRect(640, 110, 191, 171));
        listWidget_5 = new QListWidget(centralWidget);
        listWidget_5->setObjectName(QStringLiteral("listWidget_5"));
        listWidget_5->setGeometry(QRect(170, 340, 501, 121));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(700, 380, 80, 25));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(20, 350, 111, 111));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 862, 21));
        menuCARD_PIO = new QMenu(menuBar);
        menuCARD_PIO->setObjectName(QStringLiteral("menuCARD_PIO"));
        menuPEDIDO = new QMenu(menuBar);
        menuPEDIDO->setObjectName(QStringLiteral("menuPEDIDO"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPEDIDO->menuAction());
        menuBar->addAction(menuCARD_PIO->menuAction());
        menuCARD_PIO->addAction(actionPedidos);
        menuPEDIDO->addAction(actionFazer_pedido);
        menuPEDIDO->addAction(actionCadastrar_Card_pio);
        mainToolBar->addAction(actionFazer_pedido);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionFazer_pedido->setText(QApplication::translate("MainWindow", "Sair", nullptr));
        actionCadastrar_Card_pio->setText(QApplication::translate("MainWindow", "Cadastrar Card\303\241pio", nullptr));
        actionPedidos->setText(QApplication::translate("MainWindow", "Pedidos", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Pedir", nullptr));
        label->setText(QApplication::translate("MainWindow", "TAMANHO", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "SABORES", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "OPCIONAIS", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "BEBIDAS", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Limpar", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "REFRESH", nullptr));
        menuCARD_PIO->setTitle(QApplication::translate("MainWindow", "Produ\303\247\303\243o", nullptr));
        menuPEDIDO->setTitle(QApplication::translate("MainWindow", "Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
