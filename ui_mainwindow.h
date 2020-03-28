/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button_addition;
    QPushButton *button_number_8;
    QPushButton *button_number_1;
    QPushButton *button_number_2;
    QPushButton *button_number_3;
    QPushButton *button_number_7;
    QPushButton *button_calculate;
    QLineEdit *lineEdit;
    QPushButton *button_clear;
    QPushButton *button_number_9;
    QPushButton *button_number_6;
    QPushButton *button_number_5;
    QPushButton *button_number_0;
    QPushButton *button_number_4;
    QPushButton *button_subtraction;
    QPushButton *button_division;
    QPushButton *button_multiply;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(271, 206);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setMaximumSize(QSize(1677777, 1677777));
        MainWindow->setWindowOpacity(1);
        MainWindow->setAutoFillBackground(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        centralWidget->setFont(font);
        centralWidget->setCursor(QCursor(Qt::PointingHandCursor));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 11, 251, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button_addition = new QPushButton(layoutWidget);
        button_addition->setObjectName(QStringLiteral("button_addition"));

        gridLayout->addWidget(button_addition, 1, 3, 1, 1);

        button_number_8 = new QPushButton(layoutWidget);
        button_number_8->setObjectName(QStringLiteral("button_number_8"));

        gridLayout->addWidget(button_number_8, 3, 1, 1, 1);

        button_number_1 = new QPushButton(layoutWidget);
        button_number_1->setObjectName(QStringLiteral("button_number_1"));

        gridLayout->addWidget(button_number_1, 1, 0, 1, 1);

        button_number_2 = new QPushButton(layoutWidget);
        button_number_2->setObjectName(QStringLiteral("button_number_2"));

        gridLayout->addWidget(button_number_2, 1, 1, 1, 1);

        button_number_3 = new QPushButton(layoutWidget);
        button_number_3->setObjectName(QStringLiteral("button_number_3"));

        gridLayout->addWidget(button_number_3, 1, 2, 1, 1);

        button_number_7 = new QPushButton(layoutWidget);
        button_number_7->setObjectName(QStringLiteral("button_number_7"));

        gridLayout->addWidget(button_number_7, 3, 0, 1, 1);

        button_calculate = new QPushButton(layoutWidget);
        button_calculate->setObjectName(QStringLiteral("button_calculate"));

        gridLayout->addWidget(button_calculate, 4, 2, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font1;
        font1.setPointSize(15);
        lineEdit->setFont(font1);
        lineEdit->setAcceptDrops(false);
        lineEdit->setMaxLength(32);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);
        lineEdit->setCursorMoveStyle(Qt::VisualMoveStyle);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 4);

        button_clear = new QPushButton(layoutWidget);
        button_clear->setObjectName(QStringLiteral("button_clear"));

        gridLayout->addWidget(button_clear, 4, 1, 1, 1);

        button_number_9 = new QPushButton(layoutWidget);
        button_number_9->setObjectName(QStringLiteral("button_number_9"));

        gridLayout->addWidget(button_number_9, 3, 2, 1, 1);

        button_number_6 = new QPushButton(layoutWidget);
        button_number_6->setObjectName(QStringLiteral("button_number_6"));

        gridLayout->addWidget(button_number_6, 2, 2, 1, 1);

        button_number_5 = new QPushButton(layoutWidget);
        button_number_5->setObjectName(QStringLiteral("button_number_5"));

        gridLayout->addWidget(button_number_5, 2, 1, 1, 1);

        button_number_0 = new QPushButton(layoutWidget);
        button_number_0->setObjectName(QStringLiteral("button_number_0"));

        gridLayout->addWidget(button_number_0, 4, 0, 1, 1);

        button_number_4 = new QPushButton(layoutWidget);
        button_number_4->setObjectName(QStringLiteral("button_number_4"));

        gridLayout->addWidget(button_number_4, 2, 0, 1, 1);

        button_subtraction = new QPushButton(layoutWidget);
        button_subtraction->setObjectName(QStringLiteral("button_subtraction"));

        gridLayout->addWidget(button_subtraction, 2, 3, 1, 1);

        button_division = new QPushButton(layoutWidget);
        button_division->setObjectName(QStringLiteral("button_division"));

        gridLayout->addWidget(button_division, 4, 3, 1, 1);

        button_multiply = new QPushButton(layoutWidget);
        button_multiply->setObjectName(QStringLiteral("button_multiply"));

        gridLayout->addWidget(button_multiply, 3, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250", Q_NULLPTR));
        button_addition->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        button_number_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        button_number_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        button_number_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        button_number_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        button_number_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        button_calculate->setText(QApplication::translate("MainWindow", "=", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        button_clear->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        button_number_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        button_number_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        button_number_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        button_number_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        button_number_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        button_subtraction->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        button_division->setText(QApplication::translate("MainWindow", "\303\267", Q_NULLPTR));
        button_multiply->setText(QApplication::translate("MainWindow", "\303\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
