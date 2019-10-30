#include "input_dialog.h"
#include "ui_input_dialog.h"

input_dialog::input_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::input_dialog)
{
    ui->setupUi(this);
}

input_dialog::~input_dialog()
{
    delete ui;
}
