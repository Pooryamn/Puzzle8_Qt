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
    ~input_dialog();

private:
    Ui::input_dialog *ui;
};

#endif // INPUT_DIALOG_H
