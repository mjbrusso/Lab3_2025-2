#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDialog>
#include <QFileDialog>
#include <QMessageBox>
#include <QInputDialog>

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


void MainWindow::on_fontDialogPushButton_clicked()
{
    bool ok;
    auto newFont = QFontDialog::getFont(&ok, ui->fontDialogPushButton->font());
    if(ok){
        ui->fontDialogPushButton->setFont(newFont);
    }
}


void MainWindow::on_DetDirectoryPushButton_clicked()
{
    auto path = QFileDialog::getExistingDirectory();
    if(!path.isEmpty())
        this->setWindowTitle(path);
}


void MainWindow::on_openFilePushButton_clicked()
{
    auto path = QFileDialog::getOpenFileName();
    if(!path.isEmpty())
        this->setWindowTitle(path);
}

void MainWindow::on_saveFileNamePushButton_clicked()
{
    auto path = QFileDialog::getSaveFileName();
    if(!path.isEmpty())
        this->setWindowTitle(path);
}


void MainWindow::on_aboutPushButton_clicked()
{
    QMessageBox::about(this, "Meu programa", "blá blá  bbbasdasdsa asd asdsa\nblá dois");
}


void MainWindow::on_criticalPushButton_clicked()
{
    if(QMessageBox::question(this, "Atenção",
                             "Você foi hackeado! Quer fazer um pix?",
                             QMessageBox::Yes | QMessageBox::SaveAll)==QMessageBox::Yes){
        QMessageBox::information(this, "Aviso", "Bom garoto!");
    }
}


void MainWindow::on_inputDialogPushButton_clicked()
{
    QStringList opcoes = {"Solteiro", "Casado", "Viúvo", "Indefinido" };
    QInputDialog::getItem(this, "Estado civil", "Escolha uma opção", opcoes);

    // QInputDialog::getInt(this, "Informe seu peso", "Peso em kg", 10, 0, 100);

    //this->setWindowTitle(QInputDialog::getText(this, "Informe seus dados", "Seu endereço"));
}


















