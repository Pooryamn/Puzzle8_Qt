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

    // set input to int
    int a = input_str.toInt();

    // test :
    qDebug() << a;
    qDebug() << a%10;
    // set each element position
    set_position(a);
}

void MainWindow::set_position(int a){

    int tmp;

    // 9'th nnmber:
    tmp = (a/100000000)%10;

    if(tmp==1){
        ui->lbl_a1->setGeometry(24,26,172,155);
    }
    else if (tmp == 2) {
        ui->lbl_a2->setGeometry(24,26,172,155);
    }
    else if (tmp == 3) {
        ui->lbl_a3->setGeometry(24,26,172,155);
    }
    else if (tmp == 4) {
        ui->lbl_a4->setGeometry(24,26,172,155);
    }
    else if (tmp == 5) {
        ui->lbl_a5->setGeometry(24,26,172,155);
    }
    else if (tmp == 6) {
        ui->lbl_a6->setGeometry(24,26,172,155);
    }
    else if (tmp == 7) {
        ui->lbl_a7->setGeometry(24,26,172,155);
    }
    else if (tmp == 8) {
        ui->lbl_a8->setGeometry(24,26,172,155);
    }
    else {
        ui->lbl_Blank->setGeometry(24,26,172,155);
    }

    // 8'th number :
    tmp = (a/10000000)%10;

    if(tmp==1){
        ui->lbl_a1->setGeometry(211,26,172,155);
    }
    else if (tmp == 2) {
        ui->lbl_a2->setGeometry(211,26,172,155);
    }
    else if (tmp == 3) {
        ui->lbl_a3->setGeometry(211,26,172,155);
    }
    else if (tmp == 4) {
        ui->lbl_a4->setGeometry(211,26,172,155);
    }
    else if (tmp == 5) {
        ui->lbl_a5->setGeometry(211,26,172,155);
    }
    else if (tmp == 6) {
        ui->lbl_a6->setGeometry(211,26,172,155);
    }
    else if (tmp == 7) {
        ui->lbl_a7->setGeometry(211,26,172,155);
    }
    else if (tmp == 8) {
        ui->lbl_a8->setGeometry(211,26,172,155);
    }
    else {
        ui->lbl_Blank->setGeometry(211,26,172,155);
    }

    // 7'th number:
    tmp = (a/1000000)%10;

    if(tmp==1){
        ui->lbl_a1->setGeometry(398,26,172,155);
    }
    else if (tmp == 2) {
        ui->lbl_a2->setGeometry(398,26,172,155);
    }
    else if (tmp == 3) {
        ui->lbl_a3->setGeometry(398,26,172,155);
    }
    else if (tmp == 4) {
        ui->lbl_a4->setGeometry(398,26,172,155);
    }
    else if (tmp == 5) {
        ui->lbl_a5->setGeometry(398,26,172,155);
    }
    else if (tmp == 6) {
        ui->lbl_a6->setGeometry(398,26,172,155);
    }
    else if (tmp == 7) {
        ui->lbl_a7->setGeometry(398,26,172,155);
    }
    else if (tmp == 8) {
        ui->lbl_a8->setGeometry(398,26,172,155);
    }
    else {
        ui->lbl_Blank->setGeometry(398,26,172,155);
    }

    // 6'th number :
    tmp = (a/100000)%10;

    if(tmp==1){
        ui->lbl_a1->setGeometry(24,196,172,155);
    }
    else if (tmp == 2) {
        ui->lbl_a2->setGeometry(24,196,172,155);
    }
    else if (tmp == 3) {
        ui->lbl_a3->setGeometry(24,196,172,155);
    }
    else if (tmp == 4) {
        ui->lbl_a4->setGeometry(24,196,172,155);
    }
    else if (tmp == 5) {
        ui->lbl_a5->setGeometry(24,196,172,155);
    }
    else if (tmp == 6) {
        ui->lbl_a6->setGeometry(24,196,172,155);
    }
    else if (tmp == 7) {
        ui->lbl_a7->setGeometry(24,196,172,155);
    }
    else if (tmp == 8) {
        ui->lbl_a8->setGeometry(24,196,172,155);
    }
    else {
        ui->lbl_Blank->setGeometry(24,196,172,155);
    }

    // 5'th number :
    tmp = (a/10000)%10;

    if(tmp==1){
        ui->lbl_a1->setGeometry(211,196,172,155);
    }
    else if (tmp == 2) {
        ui->lbl_a2->setGeometry(211,196,172,155);
    }
    else if (tmp == 3) {
        ui->lbl_a3->setGeometry(211,196,172,155);
    }
    else if (tmp == 4) {
        ui->lbl_a4->setGeometry(211,196,172,155);
    }
    else if (tmp == 5) {
        ui->lbl_a5->setGeometry(211,196,172,155);
    }
    else if (tmp == 6) {
        ui->lbl_a6->setGeometry(211,196,172,155);
    }
    else if (tmp == 7) {
        ui->lbl_a7->setGeometry(211,196,172,155);
    }
    else if (tmp == 8) {
        ui->lbl_a8->setGeometry(211,196,172,155);
    }
    else {
        ui->lbl_Blank->setGeometry(211,196,172,155);
    }

    // 4'th number :
    tmp = (a/1000)%10;

    if(tmp==1){
        ui->lbl_a1->setGeometry(398,196,172,155);
    }
    else if (tmp == 2) {
        ui->lbl_a2->setGeometry(398,196,172,155);
    }
    else if (tmp == 3) {
        ui->lbl_a3->setGeometry(398,196,172,155);
    }
    else if (tmp == 4) {
        ui->lbl_a4->setGeometry(398,196,172,155);
    }
    else if (tmp == 5) {
        ui->lbl_a5->setGeometry(398,196,172,155);
    }
    else if (tmp == 6) {
        ui->lbl_a6->setGeometry(398,196,172,155);
    }
    else if (tmp == 7) {
        ui->lbl_a7->setGeometry(398,196,172,155);
    }
    else if (tmp == 8) {
        ui->lbl_a8->setGeometry(398,196,172,155);
    }
    else {
        ui->lbl_Blank->setGeometry(398,196,172,155);
    }

    // 3'th number:
    tmp = (a/100)% 10;

    if(tmp==1){
        ui->lbl_a1->setGeometry(24,366,172,155);
    }
    else if (tmp == 2) {
        ui->lbl_a2->setGeometry(24,366,172,155);
    }
    else if (tmp == 3) {
        ui->lbl_a3->setGeometry(24,366,172,155);
    }
    else if (tmp == 4) {
        ui->lbl_a4->setGeometry(24,366,172,155);
    }
    else if (tmp == 5) {
        ui->lbl_a5->setGeometry(24,366,172,155);
    }
    else if (tmp == 6) {
        ui->lbl_a6->setGeometry(24,366,172,155);
    }
    else if (tmp == 7) {
        ui->lbl_a7->setGeometry(24,366,172,155);
    }
    else if (tmp == 8) {
        ui->lbl_a8->setGeometry(24,366,172,155);
    }
    else {
        ui->lbl_Blank->setGeometry(24,366,172,155);
    }

    // 2'th number :
    tmp = (a/10)%10;

    if(tmp==1){
        ui->lbl_a1->setGeometry(211,366,172,155);
    }
    else if (tmp == 2) {
        ui->lbl_a2->setGeometry(211,366,172,155);
    }
    else if (tmp == 3) {
        ui->lbl_a3->setGeometry(211,366,172,155);
    }
    else if (tmp == 4) {
        ui->lbl_a4->setGeometry(211,366,172,155);
    }
    else if (tmp == 5) {
        ui->lbl_a5->setGeometry(211,366,172,155);
    }
    else if (tmp == 6) {
        ui->lbl_a6->setGeometry(211,366,172,155);
    }
    else if (tmp == 7) {
        ui->lbl_a7->setGeometry(211,366,172,155);
    }
    else if (tmp == 8) {
        ui->lbl_a8->setGeometry(211,366,172,155);
    }
    else {
        ui->lbl_Blank->setGeometry(211,366,172,155);
    }

    // 1'th number:
    tmp = a%10;

    if(tmp==1){
        ui->lbl_a1->setGeometry(398,366,172,155);
    }
    else if (tmp == 2) {
        ui->lbl_a2->setGeometry(398,366,172,155);
    }
    else if (tmp == 3) {
        ui->lbl_a3->setGeometry(398,366,172,155);
    }
    else if (tmp == 4) {
        ui->lbl_a4->setGeometry(398,366,172,155);
    }
    else if (tmp == 5) {
        ui->lbl_a5->setGeometry(398,366,172,155);
    }
    else if (tmp == 6) {
        ui->lbl_a6->setGeometry(398,366,172,155);
    }
    else if (tmp == 7) {
        ui->lbl_a7->setGeometry(398,366,172,155);
    }
    else if (tmp == 8) {
        ui->lbl_a8->setGeometry(398,366,172,155);
    }
    else {
        ui->lbl_Blank->setGeometry(398,366,172,155);
    }


}
