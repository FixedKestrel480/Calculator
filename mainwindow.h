#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_pushButton_num0_clicked();

    void on_pushButton_num1_clicked();

    void on_pushButton_num2_clicked();

    void on_pushButton_num3_clicked();

    void on_pushButton_num4_clicked();

    void on_pushButton_num5_clicked();

    void on_pushButton_num6_clicked();

    void on_pushButton_num7_clicked();

    void on_pushButton_num8_clicked();

    void on_pushButton_num9_clicked();

    void on_pushButton_mult_clicked();

    void on_pushButton_sum_clicked();

    void on_pushButton_rest_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_cleaer_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_pow_clicked();

    void on_pushButton_log_clicked();

    void on_pushButton_point_clicked();

    void on_pushButton_clicked();

    void on_pushButton_DEL_clicked();

    void on_pushButton_par1_clicked();

    void on_pushButton_par2_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_left_clicked();

private:
    Ui::MainWindow *ui;
    QString lastResult = "0"; //for the ans function, store the last result
};
#endif // MAINWINDOW_H
