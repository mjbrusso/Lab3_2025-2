#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_fontDialogPushButton_clicked();

    void on_DetDirectoryPushButton_clicked();

    void on_openFilePushButton_clicked();

    void on_saveFileNamePushButton_clicked();

    void on_aboutPushButton_clicked();

    void on_criticalPushButton_clicked();

    void on_inputDialogPushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
