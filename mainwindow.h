#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void set_position(int a);
    void refresh();
    char *input_str;
    ~MainWindow();

private slots:
    void on_btn_input_clicked();

    void on_btn_refresh_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
