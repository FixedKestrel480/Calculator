#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>
#include <QString>
#include <QJSEngine> //evaluate text as if it was code

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

//version 2 calculator

void MainWindow::on_pushButton_num0_clicked()
{
    ui->lineEdit_display->insert("0");
}


void MainWindow::on_pushButton_num1_clicked()
{
    ui->lineEdit_display->insert("1");
}


void MainWindow::on_pushButton_num2_clicked()
{
    ui->lineEdit_display->insert("2");
}


void MainWindow::on_pushButton_num3_clicked()
{
    ui->lineEdit_display->insert("3");
}


void MainWindow::on_pushButton_num4_clicked()
{
    ui->lineEdit_display->insert("4");
}


void MainWindow::on_pushButton_num5_clicked()
{
    ui->lineEdit_display->insert("5");
}


void MainWindow::on_pushButton_num6_clicked()
{
    ui->lineEdit_display->insert("6");
}


void MainWindow::on_pushButton_num7_clicked()
{
    ui->lineEdit_display->insert("7");
}


void MainWindow::on_pushButton_num8_clicked()
{
    ui->lineEdit_display->insert("8");
}


void MainWindow::on_pushButton_num9_clicked()
{
    ui->lineEdit_display->insert("9");
}


void MainWindow::on_pushButton_mult_clicked()
{
    ui->lineEdit_display->insert("*");
}


void MainWindow::on_pushButton_sum_clicked()
{
    ui->lineEdit_display->insert("+");
}


void MainWindow::on_pushButton_rest_clicked()
{
    ui->lineEdit_display->insert("-");
}


void MainWindow::on_pushButton_div_clicked()
{
    ui->lineEdit_display->insert("/");
}


void MainWindow::on_pushButton_equal_clicked()
{
    QString expression = ui->lineEdit_display->text(); //read what the user put

    expression.replace("cos(", "Math.cos("); //in radians
    expression.replace("tan(", "Math.tan("); //in radians
    expression.replace("pow(", "Math.pow(");
    expression.replace("log(", "Math.log(");
    expression.replace("sin(", "Math.sin("); //in radians

    QJSEngine engine; //motor that will evaluate the text
    QJSValue result = engine.evaluate(expression); //evaluate

    if (result.isError()) {
        ui->lineEdit_display->setText("Error"); //manage errors, things that cannot be done
    } else {
        ui->lineEdit_display->setText(result.toString()); //show result
    }
}


void MainWindow::on_pushButton_cleaer_clicked()
{
    ui->lineEdit_display->clear();
}


void MainWindow::on_pushButton_cos_clicked()
{
    ui->lineEdit_display->insert("cos(");
}


void MainWindow::on_pushButton_sin_clicked()
{
    ui->lineEdit_display->insert("sin(");
}


void MainWindow::on_pushButton_tan_clicked()
{
    ui->lineEdit_display->insert("tan(");
}


void MainWindow::on_pushButton_pow_clicked()
{
    ui->lineEdit_display->insert("pow(");
}


void MainWindow::on_pushButton_log_clicked()
{
    ui->lineEdit_display->insert("log("); //natural logarithm
}


void MainWindow::on_pushButton_point_clicked()
{
    ui->lineEdit_display->insert(".");
}

