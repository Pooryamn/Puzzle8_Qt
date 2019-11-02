#ifndef INPUT_DIALOG_H
#define INPUT_DIALOG_H

#include <QDialog>

namespace Ui {
class input_dialog;
}

class input_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit input_dialog(QWidget *parent = nullptr);
    QString input_str;
    QString get_data(void);
    int rand_maker(int low,int high);
    void fill(int *Arr);
    ~input_dialog();

private slots:
    void on_btn_set_clicked();

    void on_Btn_random_clicked();

private:
    Ui::input_dialog *ui;
    bool check();
};

#endif // INPUT_DIALOG_H
