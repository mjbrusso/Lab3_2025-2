#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "compoundinterestcalculator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CompoundInterestCalculator calc;
    calc.setMonths(12);
    calc.setAmount(5000.0);
    calc.setRate(1.3);

    ui->resultTableWidget->setRowCount(calc.months());
    for(const auto &[m, j, v] : calc.calculate()){
        ui->resultTableWidget->setItem(m-1, 0, new QTableWidgetItem(""));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

