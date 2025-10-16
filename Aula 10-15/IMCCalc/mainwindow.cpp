#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_calcularPushButton_clicked()
{
    QLocale lc;
    auto peso = ui->pesoDoubleSpinBox->value();
    auto altura = ui->alturaSpinBox->value() / 100.0;
    auto imc = peso / (altura * altura);
    ui->IMCOutputLabel->setText(lc.toString(imc, 'f', 1));

    auto out = ui->classificacaoOutputlabel;
    out->setStyleSheet("");
    if(imc<18.5)
        out->setText("Abaixo do peso");
    else if(imc<25)
        out->setText("Normal");
    else if(imc<30)
        out->setText("Sobrepeso");
    else{
        out->setText("Obeso");
        out->setStyleSheet("color: red;");
    }
}


