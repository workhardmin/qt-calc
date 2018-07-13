#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

QString content = NULL;
QString num1 = NULL;
QString num2 = NULL;
QString *num =&num1;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_b1_clicked()
{
    content.append("1");
    num->append("1");
    ui->screen->setText(content);
}

void MainWindow::on_b2_clicked()
{
    content.append("2");
    num->append("2");
    ui->screen->setText(content);
}


void MainWindow::on_b3_clicked()
{
    content.append("3");
    num->append("3");
    ui->screen->setText(content);
}

void MainWindow::on_badd_clicked()
{
    content.append("+");
    num = &num2;
    ui->screen->setText(content);
}

void MainWindow::on_bequal_clicked()
{
    content.append("=");
    content.append(QString::number(num1.toDouble()+num2.toDouble()));
    ui->screen->setText(content);
}


void MainWindow::on_bclear_clicked()
{
    content.clear();
    ui->screen->clear();
}

void MainWindow::on_b4_clicked()
{
    content.append("4");
    num->append("4");
    ui->screen->setText(content);
}

void MainWindow::on_b5_clicked()
{
    content.append("5");
    ui->screen->setText(content);
}

void MainWindow::on_b6_clicked()
{
    content.append("6");
    ui->screen->setText(content);
}

void MainWindow::on_b7_clicked()
{
    content.append("7");
    ui->screen->setText(content);
}

void MainWindow::on_b8_clicked()
{
    content.append("8");
    ui->screen->setText(content);
}

void MainWindow::on_b9_clicked()
{
    content.append("9");
    ui->screen->setText(content);
}

void MainWindow::on_badd_2_clicked()
{
    content.append("0");
    ui->screen->setText(content);
}


