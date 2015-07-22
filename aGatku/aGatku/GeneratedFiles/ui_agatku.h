/********************************************************************************
** Form generated from reading UI file 'agatku.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGATKU_H
#define UI_AGATKU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AgatkuClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEditFile;
    QLabel *label;
    QLineEdit *lineEditSearch;
    QLabel *label_2;
    QPushButton *pushButtonBrowse;
    QTableView *tableViewPayments;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AgatkuClass)
    {
        if (AgatkuClass->objectName().isEmpty())
            AgatkuClass->setObjectName(QStringLiteral("AgatkuClass"));
        AgatkuClass->resize(935, 382);
        centralWidget = new QWidget(AgatkuClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEditFile = new QLineEdit(centralWidget);
        lineEditFile->setObjectName(QStringLiteral("lineEditFile"));
        lineEditFile->setGeometry(QRect(72, 20, 271, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 61, 20));
        lineEditSearch = new QLineEdit(centralWidget);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));
        lineEditSearch->setGeometry(QRect(480, 20, 441, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(430, 20, 61, 16));
        pushButtonBrowse = new QPushButton(centralWidget);
        pushButtonBrowse->setObjectName(QStringLiteral("pushButtonBrowse"));
        pushButtonBrowse->setGeometry(QRect(350, 20, 75, 23));
        tableViewPayments = new QTableView(centralWidget);
        tableViewPayments->setObjectName(QStringLiteral("tableViewPayments"));
        tableViewPayments->setGeometry(QRect(10, 50, 911, 281));
        AgatkuClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AgatkuClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 935, 21));
        AgatkuClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AgatkuClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        AgatkuClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AgatkuClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AgatkuClass->setStatusBar(statusBar);

        retranslateUi(AgatkuClass);

        QMetaObject::connectSlotsByName(AgatkuClass);
    } // setupUi

    void retranslateUi(QMainWindow *AgatkuClass)
    {
        AgatkuClass->setWindowTitle(QApplication::translate("AgatkuClass", "Agatku", 0));
        label->setText(QApplication::translate("AgatkuClass", "Wybierz plik:", 0));
        lineEditSearch->setText(QString());
        label_2->setText(QApplication::translate("AgatkuClass", "Wyszukaj: ", 0));
        pushButtonBrowse->setText(QApplication::translate("AgatkuClass", "Przegl\304\205daj", 0));
    } // retranslateUi

};

namespace Ui {
    class AgatkuClass: public Ui_AgatkuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGATKU_H
