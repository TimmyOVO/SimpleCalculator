#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow){
    ui->setupUi(this);
    //prevent resizing
    this->setFixedSize(this->size());
    ui->lineEdit->setText(this->currentValue);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::resetAll() {
    resetCurrentValue();
    currentOperator = CalculatorOperator::NONE;
    previousValue = "0";
}

void MainWindow::calculate() {
    if (currentValue == "0") {
        return;
    }
    if (previousValue == "0") {
        return;
    }
    if (currentOperator == CalculatorOperator::NONE) {
        return;
    }
    auto c1 = std::stod(currentValue.toStdString());
    auto c2 = std::stod(previousValue.toStdString());
    double c3 = 0;
    switch (currentOperator) {
        case CalculatorOperator::ADDITION:
            c3 = c1 + c2;
            break;
        case CalculatorOperator::SUBTRACTION:
            c3 = c2 - c1;
            break;
        case CalculatorOperator::MULTIPLY:
            c3 = c1 * c2;
            break;
        case CalculatorOperator::DIVISION:
            c3 = c2 / c1;
        default:
            break;
    }
    std::ostringstream c4;
    c4 << std::setprecision(64) << c3;
    QString qs = QString::fromStdString(c4.str());
    ui->lineEdit->setText(qs);
    currentValue = qs;
    previousValue = "0";
    currentOperator = CalculatorOperator::NONE;
}

void MainWindow::resetCurrentValue() {
    ui->lineEdit->setText("0");
    currentValue = "0";
}

bool MainWindow::applyOperator(CalculatorOperator op) {
    currentOperator = op;
    if (op == CalculatorOperator::NONE){
        return true;
    }
    auto value = getCurrentValue();
    previousValue = value;
    resetCurrentValue();
}

QString MainWindow::getCurrentValue() {
    if (ui->lineEdit->text() == "0"){
        return "";
    }
    return this->currentValue;
}

bool MainWindow::typeNumber(int i){
    auto value = this->getCurrentValue();
    auto before = ui->lineEdit->text();
    this->currentValue = value.append(QString::fromStdString(std::to_string(i)));
    ui->lineEdit->setText(value);
    return before == ui->lineEdit->text();
}


void MainWindow::on_button_number_1_clicked()
{
    typeNumber(1);
}

void MainWindow::on_button_number_2_clicked() {
    typeNumber(2);
}

void MainWindow::on_button_number_3_clicked() {
    typeNumber(3);
}

void MainWindow::on_button_number_4_clicked() {
    typeNumber(4);
}

void MainWindow::on_button_number_5_clicked() {
    typeNumber(5);
}

void MainWindow::on_button_number_6_clicked() {
    typeNumber(6);
}

void MainWindow::on_button_number_7_clicked() {
    typeNumber(7);
}

void MainWindow::on_button_number_8_clicked() {
    typeNumber(8);
}

void MainWindow::on_button_number_9_clicked() {
    typeNumber(9);
}


void MainWindow::on_button_number_0_clicked() {
    typeNumber(0);
}

void MainWindow::on_button_addition_clicked() {
    applyOperator(CalculatorOperator::ADDITION);
}

void MainWindow::on_button_subtraction_clicked() {
    applyOperator(CalculatorOperator::SUBTRACTION);
}

void MainWindow::on_button_multiply_clicked() {
    applyOperator(CalculatorOperator::MULTIPLY);
}

void MainWindow::on_button_division_clicked() {
    applyOperator(CalculatorOperator::DIVISION);
}

void MainWindow::on_button_clear_clicked() {
    resetAll();
}

void MainWindow::on_button_calculate_clicked() {
    calculate();
}

