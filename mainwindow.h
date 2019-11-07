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
    QString input_str;
    int step;
    ~MainWindow();

private slots:
    void on_btn_input_clicked();

    void on_btn_refresh_clicked();

    void on_btn_solve_clicked();

    void on_btn_nextstep_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
