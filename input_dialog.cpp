#include "input_dialog.h"
#include "ui_input_dialog.h"
#include <QIntValidator>
#include <QMessageBox>

#include <QDebug>

input_dialog::input_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::input_dialog)
{
    ui->setupUi(this);
    // set inputs to be valid
    ui->txt_1->setValidator(new QIntValidator(0,8,this));
    ui->txt_2->setValidator(new QIntValidator(0,8,this));
    ui->txt_3->setValidator(new QIntValidator(0,8,this));
    ui->txt_4->setValidator(new QIntValidator(0,8,this));
    ui->txt_5->setValidator(new QIntValidator(0,8,this));
    ui->txt_6->setValidator(new QIntValidator(0,8,this));
    ui->txt_7->setValidator(new QIntValidator(0,8,this));
    ui->txt_8->setValidator(new QIntValidator(0,8,this));
    ui->txt_9->setValidator(new QIntValidator(0,8,this));

    input_str = "";
}

input_dialog::~input_dialog()
{
    delete ui;
}

QString input_dialog::get_data(){
    return input_str;
}


bool input_dialog::check(){

    // check that all blocks are filled
    if(input_str.length()<9){
        QMessageBox::warning(this,"Error","Please fill all blocks!");
        return false;
    }

    // check that there is exacly one of each number
    bool flag[10];
    for (int i = 0; i < 10;i++) {
        flag[i] = false;
    }

    int num ;
    // check 1'st block :
    num = ui->txt_1->text().toInt();
    if(flag[num] == true){
        QMessageBox::warning(this,"Error","You Can't use more than one number at a time");
        return false;
    }
    if(num == 9){
        QMessageBox::warning(this,"Error","You Can enter numbers between 0 - 8 ");
        return false;
    }
    flag[num] = true;

    num = ui->txt_2->text().toInt();
    if(flag[num] == true){
        QMessageBox::warning(this,"Error","You Can't use more than one number at a time");
        return false;
    }
    if(num == 9){
        QMessageBox::warning(this,"Error","You Can enter numbers between 0 - 8 ");
        return false;
    }
    flag[num] = true;

    num = ui->txt_3->text().toInt();
    if(flag[num] == true){
        QMessageBox::warning(this,"Error","You Can't use more than one number at a time");
        return false;
    }
    if(num == 9){
        QMessageBox::warning(this,"Error","You Can enter numbers between 0 - 8 ");
        return false;
    }
    flag[num] = true;

    num = ui->txt_4->text().toInt();
    if(flag[num] == true){
        QMessageBox::warning(this,"Error","You Can't use more than one number at a time");
        return false;
    }
    if(num == 9){
        QMessageBox::warning(this,"Error","You Can enter numbers between 0 - 8 ");
        return false;
    }
    flag[num] = true;

    num = ui->txt_5->text().toInt();
    if(flag[num] == true){
        QMessageBox::warning(this,"Error","You Can't use more than one number at a time");
        return false;
    }
    if(num == 9){
        QMessageBox::warning(this,"Error","You Can enter numbers between 0 - 8 ");
        return false;
    }
    flag[num] = true;

    num = ui->txt_6->text().toInt();
    if(flag[num] == true){
        QMessageBox::warning(this,"Error","You Can't use more than one number at a time");
        return false;
    }
    if(num == 9){
        QMessageBox::warning(this,"Error","You Can enter numbers between 0 - 8 ");
        return false;
    }
    flag[num] = true;

    num = ui->txt_7->text().toInt();
    if(flag[num] == true){
        QMessageBox::warning(this,"Error","You Can't use more than one number at a time");
        return false;
    }
    if(num == 9){
        QMessageBox::warning(this,"Error","You Can enter numbers between 0 - 8 ");
        return false;
    }
    flag[num] = true;

    num = ui->txt_8->text().toInt();
    if(flag[num] == true){
        QMessageBox::warning(this,"Error","You Can't use more than one number at a time");
        return false;
    }
    if(num == 9){
        QMessageBox::warning(this,"Error","You Can enter numbers between 0 - 8 ");
        return false;
    }
    flag[num] = true;

    num = ui->txt_9->text().toInt();
    if(flag[num] == true){
        QMessageBox::warning(this,"Error","You Can't use more than one number at a time");
        return false;
    }
    if(num == 9){
        QMessageBox::warning(this,"Error","You Can enter numbers between 0 - 8 ");
        return false;
    }
    flag[num] = true;


    return true;

}


void input_dialog::on_btn_set_clicked()
{
    input_str = "";
    // build input str
    input_str.append(ui->txt_1->text());
    input_str.append(ui->txt_2->text());
    input_str.append(ui->txt_3->text());
    input_str.append(ui->txt_4->text());
    input_str.append(ui->txt_5->text());
    input_str.append(ui->txt_6->text());
    input_str.append(ui->txt_7->text());
    input_str.append(ui->txt_8->text());
    input_str.append(ui->txt_9->text());

    if(check() == false){
        return;
    }

    this->close();

}

void input_dialog::on_Btn_random_clicked()
{
    // create random array
    int num[9] = {0};
    bool Flag;

    for (int i = 0; i < 8; i++) {
        Flag = false;

        do{
            num[i] = rand_maker(1,8);

            for (int j = 0; j < 9; j++) {
                if(num[i] == num[j] && i != j){
                    Flag = false;
                    break;
                }
                else {
                    Flag = true;
                }
            }

        }while(Flag == false);
    }

    // fill the blocks
    fill(num);
}

int input_dialog::rand_maker(int low,int high){
    return rand()%(high - low + 1)+low;
}

void input_dialog::fill(int *Arr){
    ui->txt_1->setText(QString::number(Arr[0]));
    ui->txt_2->setText(QString::number(Arr[1]));
    ui->txt_3->setText(QString::number(Arr[2]));
    ui->txt_4->setText(QString::number(Arr[3]));
    ui->txt_5->setText(QString::number(Arr[4]));
    ui->txt_6->setText(QString::number(Arr[5]));
    ui->txt_7->setText(QString::number(Arr[6]));
    ui->txt_8->setText(QString::number(Arr[7]));
    ui->txt_9->setText(QString::number(Arr[8]));
}
