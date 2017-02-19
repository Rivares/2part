/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_3;
    QWidget *centralWidget;
    QFrame *line;
    QLabel *label;
    QLabel *outputGraph;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *inputLeftX;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *inputRightX;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *inputLeftY;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *inputRightY;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *inputAccuracy;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *Tpar;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *Tjyd;
    QLabel *label_10;
    QVBoxLayout *verticalLayout;
    QFrame *line_2;
    QPushButton *draw;
    QPushButton *clear;
    QPushButton *save;
    QPushButton *exit;
    QTextBrowser *valTemper1;
    QTextBrowser *valTemper2;
    QTextBrowser *valTemper3;
    QFrame *line_4;
    QLabel *label_11;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(776, 473);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(560, 10, 20, 391));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(650, 0, 51, 21));
        outputGraph = new QLabel(centralWidget);
        outputGraph->setObjectName(QStringLiteral("outputGraph"));
        outputGraph->setGeometry(QRect(20, 20, 541, 381));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(580, 20, 192, 381));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        inputLeftX = new QLineEdit(layoutWidget);
        inputLeftX->setObjectName(QStringLiteral("inputLeftX"));

        horizontalLayout->addWidget(inputLeftX);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        inputRightX = new QLineEdit(layoutWidget);
        inputRightX->setObjectName(QStringLiteral("inputRightX"));

        horizontalLayout_2->addWidget(inputRightX);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_6->addWidget(label_5);

        inputLeftY = new QLineEdit(layoutWidget);
        inputLeftY->setObjectName(QStringLiteral("inputLeftY"));

        horizontalLayout_6->addWidget(inputLeftY);


        horizontalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        inputRightY = new QLineEdit(layoutWidget);
        inputRightY->setObjectName(QStringLiteral("inputRightY"));

        horizontalLayout_8->addWidget(inputRightY);


        horizontalLayout_7->addLayout(horizontalLayout_8);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);


        horizontalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        inputAccuracy = new QLineEdit(layoutWidget);
        inputAccuracy->setObjectName(QStringLiteral("inputAccuracy"));

        horizontalLayout_9->addWidget(inputAccuracy);


        verticalLayout_4->addLayout(horizontalLayout_9);


        verticalLayout_5->addLayout(verticalLayout_4);

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        Tpar = new QCheckBox(layoutWidget);
        Tpar->setObjectName(QStringLiteral("Tpar"));
        Tpar->setMaximumSize(QSize(55, 16777215));
        QFont font;
        font.setItalic(false);
        font.setUnderline(false);
        font.setKerning(true);
        Tpar->setFont(font);

        horizontalLayout_10->addWidget(Tpar);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_10->addWidget(label_9);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        Tjyd = new QCheckBox(layoutWidget);
        Tjyd->setObjectName(QStringLiteral("Tjyd"));
        Tjyd->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_11->addWidget(Tjyd);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_11->addWidget(label_10);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        line_2 = new QFrame(layoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        draw = new QPushButton(layoutWidget);
        draw->setObjectName(QStringLiteral("draw"));

        verticalLayout->addWidget(draw);

        clear = new QPushButton(layoutWidget);
        clear->setObjectName(QStringLiteral("clear"));

        verticalLayout->addWidget(clear);

        save = new QPushButton(layoutWidget);
        save->setObjectName(QStringLiteral("save"));

        verticalLayout->addWidget(save);

        exit = new QPushButton(layoutWidget);
        exit->setObjectName(QStringLiteral("exit"));

        verticalLayout->addWidget(exit);


        verticalLayout_6->addLayout(verticalLayout);

        valTemper1 = new QTextBrowser(centralWidget);
        valTemper1->setObjectName(QStringLiteral("valTemper1"));
        valTemper1->setGeometry(QRect(150, 410, 71, 21));
        valTemper2 = new QTextBrowser(centralWidget);
        valTemper2->setObjectName(QStringLiteral("valTemper2"));
        valTemper2->setGeometry(QRect(280, 410, 71, 21));
        valTemper3 = new QTextBrowser(centralWidget);
        valTemper3->setObjectName(QStringLiteral("valTemper3"));
        valTemper3->setGeometry(QRect(410, 410, 61, 21));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(10, 400, 551, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 410, 71, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 776, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addSeparator();
        menu->addAction(action_3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\321\200\321\202\320\270\320\275\320\272\321\203", 0));
        action_3->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        label->setText(QApplication::translate("MainWindow", "Intervals:", 0));
        outputGraph->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_2->setText(QApplication::translate("MainWindow", "t = [", 0));
        inputLeftX->setText(QApplication::translate("MainWindow", "0", 0));
        label_3->setText(QApplication::translate("MainWindow", ",", 0));
        label_4->setText(QApplication::translate("MainWindow", "]", 0));
        label_5->setText(QApplication::translate("MainWindow", "T 'C = [", 0));
        inputLeftY->setText(QApplication::translate("MainWindow", "0", 0));
        label_6->setText(QApplication::translate("MainWindow", ",", 0));
        label_7->setText(QApplication::translate("MainWindow", "]", 0));
        label_8->setText(QApplication::translate("MainWindow", "Accuracy:", 0));
        inputAccuracy->setText(QApplication::translate("MainWindow", "700", 0));
        Tpar->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#0000ff;\">Tpar(t)</span></p></body></html>", 0));
        Tjyd->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#008000;\">Tjyd(t)</span></p></body></html>", 0));
        draw->setText(QApplication::translate("MainWindow", "Draw", 0));
        clear->setText(QApplication::translate("MainWindow", "Clear", 0));
        save->setText(QApplication::translate("MainWindow", "Save", 0));
        exit->setText(QApplication::translate("MainWindow", "Exit", 0));
        label_11->setText(QApplication::translate("MainWindow", "Initial values:", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
