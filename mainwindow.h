#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

enum CalculatorOperator {
    ADDITION,
    SUBTRACTION,
    MULTIPLY,
    DIVISION,
    NONE
};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QString currentValue = "0";
    QString previousValue = "0";
    CalculatorOperator currentOperator = CalculatorOperator::NONE;

    QString getCurrentValue();
    void calculate();
    bool applyOperator(CalculatorOperator);
    bool typeNumber(int);
    void resetCurrentValue();
    void resetAll();

private slots:
    void on_button_addition_clicked();

    void on_button_number_1_clicked();

    void on_button_number_2_clicked();

    void on_button_number_3_clicked();

    void on_button_number_4_clicked();

    void on_button_number_5_clicked();

    void on_button_number_6_clicked();

    void on_button_subtraction_clicked();

    void on_button_number_7_clicked();

    void on_button_number_8_clicked();

    void on_button_number_9_clicked();

    void on_button_multiply_clicked();

    void on_button_number_0_clicked();

    void on_button_clear_clicked();

    void on_button_calculate_clicked();

    void on_button_division_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
