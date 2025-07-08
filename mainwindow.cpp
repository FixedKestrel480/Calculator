#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//versiion 1 testing buttons in qt

//button for multiplying
void MainWindow::on_pushButton_mult_clicked()
{
    double a = ui->lineEdit_num1->text().toDouble();
    double b = ui->lineEdit_num2->text().toDouble();
    double resultado = a*b;
    ui->label_result->setText(QString::number(resultado));
}


//botton for summing
void MainWindow::on_pushButton_sum_clicked()
{
    double a = ui->lineEdit_num1->text().toDouble();
    double b = ui->lineEdit_num2->text().toDouble();
    double resultado = a+b;
    ui->label_result->setText(QString::number(resultado));
}

//button for subtracting
void MainWindow::on_pushButton_rest_clicked()
{
    double a = ui->lineEdit_num1->text().toDouble();
    double b = ui->lineEdit_num2->text().toDouble();
    double resultado = a-b;
    ui->label_result->setText(QString::number(resultado));
}

//button for dividing
void MainWindow::on_pushButton_div_clicked()
{
    double a = ui->lineEdit_num1->text().toDouble();
    double b = ui->lineEdit_num2->text().toDouble();
    double resultado = a/b;
    ui->label_result->setText(QString::number(resultado));
}

