#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLocale>
#include "compoundinterestcalculator.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_amountDoubleSpinBox_valueChanged(double arg1);

    void on_rateDoubleSpinBox_valueChanged(double arg1);

    void on_monthsSpinBox_valueChanged(int arg1);

    void on_action_Sobre_triggered();

    void on_actionExportar_triggered();

private:
    Ui::MainWindow *ui;
    CompoundInterestCalculator calc_;
    QLocale locale_;

    void updateTable();
};
#endif // MAINWINDOW_H
