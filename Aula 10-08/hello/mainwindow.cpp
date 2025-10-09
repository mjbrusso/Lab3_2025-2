#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // showFullScreen();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_fecharPushButton_clicked()
{
    ui->fecharPushButton->setText("Obrigado");
}

