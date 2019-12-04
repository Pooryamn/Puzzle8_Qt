#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <fstream>
#include <QFile>
#include <time.h>
// input dialog header:
#include "input_dialog.h"

// input UCS Solver :
#include "bfs_solver.h"

// input BFS solver
#include "bfs_t.h"

// input dfs solver
#include "dfs_solver.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->btn_solve->setEnabled(false);
    ui->btn_nextstep->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_input_clicked()
{
    ui->txt_solution->clear();
    // open input dialog
    input_dialog input(this);
    input.setModal(true);
    input.exec();

    // get data from input dialog
    input_str = input.get_data();

    // set solve enable :
    ui->btn_solve->setEnabled(true);

    // set input to int
    int a = input_str.toInt();

    // set each element position
    set_position(a);

    // set ouyput box initial :
    ui->txt_solution->append("Start state : ");
    ui->txt_solution->append(input_str + "\n");

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


void MainWindow::refresh(){
    ui->txt_solution->clear();

    input_str = "";

    ui->lbl_a1->setGeometry(24,26,172,155);
    ui->lbl_a2->setGeometry(211,26,172,155);
    ui->lbl_a3->setGeometry(398,26,172,155);

    ui->lbl_a4->setGeometry(24,196,172,155);
    ui->lbl_a5->setGeometry(211,196,172,155);
    ui->lbl_a6->setGeometry(398,196,172,155);

    ui->lbl_a7->setGeometry(24,366,172,155);
    ui->lbl_a8->setGeometry(211,366,172,155);
    ui->lbl_Blank->setGeometry(398,366,172,155);

    ui->btn_solve->setEnabled(false);
}

void MainWindow::on_btn_refresh_clicked()
{
    refresh();
}



void MainWindow::on_btn_solve_clicked()
{
    ui->lbl_moves->clear();
    ui->lbl_time->clear();
    QString algorithm = ui->combo_algorithm->currentText();

    // delete last solution :
    QFile rmfile("nodes.dat");
    rmfile.remove();


    // convert Qstring to 3 * 3 matrix :

    int input = input_str.toInt();
    int k = 100000000;
    int mat[3][3];
    int x , y; // zero position

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            mat[i][j] = (input / k) % 10 ;
            if(mat[i][j] == 0){
                x = i;
                y = j;
            }
            k = k / 10 ;
        }
    }

    // check the algorithms :
    if(algorithm == "UCS"){
        BFS_Solver BFS(mat,x,y);
        BFS.Solve();
        clock_t times = BFS.get_time();
        float td = (float)times/1000000000000;
        ui->lbl_time->setText(QString::number(td));
    }
    else if (algorithm == "BFS") {
        bfs_t BBFS(mat,x,y);
        BBFS.Solve();
        clock_t times = BBFS.get_time();
        float td = (float)times/1000000000000;
        ui->lbl_time->setText(QString::number(td));
    }
    else if (algorithm == "DFS") {
        dfs_solver DFS(mat,x,y);
        DFS.Solve();
        clock_t times = DFS.get_time();
        float td = (float)times/1000000000000;
        ui->lbl_time->setText(QString::number(td));
    }

    // print solve :
    QFile in("nodes.dat");

    if(!in.open(QIODevice::ReadOnly)){
        return;
    }

    QTextStream in_text(&in);

    QString tmp = in_text.readAll();

    ui->txt_solution->append(tmp);

    QStringList strlist = tmp.split(QRegExp("[\n]"),QString::SkipEmptyParts);

    ui->lbl_moves->setText(QString::number(strlist.size()-1));


    in.close();

    ui->btn_nextstep->setEnabled(true);
    step = 1;
}



void MainWindow::on_btn_nextstep_clicked()
{
    QFile in("nodes.dat");

    if(!in.open(QIODevice::ReadOnly)){
        return;
    }
    QTextStream in_text(&in);

    QString tmp = in_text.readAll();
    QStringList strlist = tmp.split(QRegExp("[\n]"),QString::SkipEmptyParts);

    int a = strlist[step].toInt();

    step++ ;

    set_position(a);

    if(step == strlist.size()){
        ui->btn_nextstep->setEnabled(false);
    }

}

