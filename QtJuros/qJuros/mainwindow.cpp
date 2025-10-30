#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "compoundinterestcalculator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->resultTableWidget->setColumnWidth(0, 40);
    ui->resultTableWidget->setColumnWidth(1, 130);
    ui->resultTableWidget->setColumnWidth(2, 130);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateTable(){
    ui->resultTableWidget->setRowCount(calc_.months());
    for(const auto &[m, j, v] : calc_.calculate()){
        auto month_item = new QTableWidgetItem(QString::number(m));
        month_item->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
        ui->resultTableWidget->setItem(m-1, 0, month_item);

        auto rate_item = new QTableWidgetItem(locale_.toCurrencyString(j));
        rate_item->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
        ui->resultTableWidget->setItem(m-1, 1, rate_item);

        auto value_item = new QTableWidgetItem(locale_.toCurrencyString(v));
        value_item->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
        ui->resultTableWidget->setItem(m-1, 2, value_item);
    }
}


void MainWindow::on_amountDoubleSpinBox_valueChanged(double arg1)
{
    calc_.setAmount(arg1);
    updateTable();
}

void MainWindow::on_rateDoubleSpinBox_valueChanged(double arg1)
{
    calc_.setRate(arg1);
    updateTable();
}

void MainWindow::on_monthsSpinBox_valueChanged(int arg1)
{
    calc_.setMonths(arg1);
    updateTable();
}








