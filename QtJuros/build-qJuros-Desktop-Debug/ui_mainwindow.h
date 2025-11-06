/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExportar;
    QAction *action_Sair;
    QAction *action_Sobre;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *amountLabel;
    QLabel *rateLabel;
    QLabel *monthsLabel;
    QDoubleSpinBox *amountDoubleSpinBox;
    QDoubleSpinBox *rateDoubleSpinBox;
    QSpinBox *monthsSpinBox;
    QTableWidget *resultTableWidget;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QMenu *menuA_juda;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(347, 420);
        actionExportar = new QAction(MainWindow);
        actionExportar->setObjectName(QString::fromUtf8("actionExportar"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("x-office-spreadsheet");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionExportar->setIcon(icon);
        action_Sair = new QAction(MainWindow);
        action_Sair->setObjectName(QString::fromUtf8("action_Sair"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Sair->setIcon(icon1);
        action_Sobre = new QAction(MainWindow);
        action_Sobre->setObjectName(QString::fromUtf8("action_Sobre"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        action_Sobre->setIcon(icon2);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        amountLabel = new QLabel(centralwidget);
        amountLabel->setObjectName(QString::fromUtf8("amountLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, amountLabel);

        rateLabel = new QLabel(centralwidget);
        rateLabel->setObjectName(QString::fromUtf8("rateLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, rateLabel);

        monthsLabel = new QLabel(centralwidget);
        monthsLabel->setObjectName(QString::fromUtf8("monthsLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, monthsLabel);

        amountDoubleSpinBox = new QDoubleSpinBox(centralwidget);
        amountDoubleSpinBox->setObjectName(QString::fromUtf8("amountDoubleSpinBox"));
        amountDoubleSpinBox->setMaximum(99999999999.000000000000000);
        amountDoubleSpinBox->setSingleStep(0.010000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, amountDoubleSpinBox);

        rateDoubleSpinBox = new QDoubleSpinBox(centralwidget);
        rateDoubleSpinBox->setObjectName(QString::fromUtf8("rateDoubleSpinBox"));
        rateDoubleSpinBox->setDecimals(1);
        rateDoubleSpinBox->setSingleStep(0.100000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, rateDoubleSpinBox);

        monthsSpinBox = new QSpinBox(centralwidget);
        monthsSpinBox->setObjectName(QString::fromUtf8("monthsSpinBox"));
        monthsSpinBox->setMinimum(1);
        monthsSpinBox->setMaximum(120);
        monthsSpinBox->setValue(1);

        formLayout->setWidget(2, QFormLayout::FieldRole, monthsSpinBox);


        verticalLayout->addLayout(formLayout);

        resultTableWidget = new QTableWidget(centralwidget);
        if (resultTableWidget->columnCount() < 3)
            resultTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        resultTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        resultTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        resultTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        resultTableWidget->setObjectName(QString::fromUtf8("resultTableWidget"));
        resultTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        resultTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        resultTableWidget->horizontalHeader()->setVisible(false);
        resultTableWidget->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(resultTableWidget);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 347, 22));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        menuA_juda = new QMenu(menuBar);
        menuA_juda->setObjectName(QString::fromUtf8("menuA_juda"));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuBar->addAction(menuA_juda->menuAction());
        menuArquivo->addAction(actionExportar);
        menuArquivo->addSeparator();
        menuArquivo->addAction(action_Sair);
        menuA_juda->addAction(action_Sobre);
        toolBar->addAction(actionExportar);
        toolBar->addAction(action_Sobre);

        retranslateUi(MainWindow);
        QObject::connect(action_Sair, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculadora de Juros Compostos", nullptr));
        actionExportar->setText(QCoreApplication::translate("MainWindow", "E&xportar", nullptr));
#if QT_CONFIG(tooltip)
        actionExportar->setToolTip(QCoreApplication::translate("MainWindow", "Exportar para CSV", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actionExportar->setStatusTip(QCoreApplication::translate("MainWindow", "Exportar os dados calculados em CSV", nullptr));
#endif // QT_CONFIG(statustip)
        action_Sair->setText(QCoreApplication::translate("MainWindow", "&Sair", nullptr));
#if QT_CONFIG(shortcut)
        action_Sair->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Sobre->setText(QCoreApplication::translate("MainWindow", "&Sobre", nullptr));
        amountLabel->setText(QCoreApplication::translate("MainWindow", "Valor da Aplica\303\247\303\243o:", nullptr));
        rateLabel->setText(QCoreApplication::translate("MainWindow", "Taxa de Juros Mensal:", nullptr));
        monthsLabel->setText(QCoreApplication::translate("MainWindow", "N\303\272mero de Meses:", nullptr));
        amountDoubleSpinBox->setPrefix(QCoreApplication::translate("MainWindow", "R$ ", nullptr));
        rateDoubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "%", nullptr));
        QTableWidgetItem *___qtablewidgetitem = resultTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "M\303\252s", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = resultTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Juros", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = resultTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Valor Atualizado", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "&Arquivo", nullptr));
        menuA_juda->setTitle(QCoreApplication::translate("MainWindow", "A&juda", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
