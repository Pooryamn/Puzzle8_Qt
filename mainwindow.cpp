#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

// input dialog header:
#include "input_dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_input_clicked()
{
    // open input dialog
    input_dialog input(this);
    input.setModal(true);
    input.exec();

    // get data from input dialog
    QString input_str = input.get_data();


}
