/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *qgb_game;
    QPushButton *qpb_game_end;
    QPushButton *qpb_game_move;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *ql_game_player_now;
    QLabel *ql_game_sticks_now;
    QSpinBox *qsb_game_step;
    QGroupBox *qgb_settings;
    QGroupBox *qgb_mod;
    QRadioButton *qrb_human_computer;
    QRadioButton *qrb_human_human;
    QPushButton *qpb_game_begim;
    QLabel *label_4;
    QComboBox *qcb_game_player_first;
    QLabel *label_2;
    QPushButton *qpb_game_sticks_random;
    QSpinBox *qsb_game_sticks;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(938, 605);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        qgb_game = new QGroupBox(centralwidget);
        qgb_game->setObjectName(QString::fromUtf8("qgb_game"));
        qgb_game->setGeometry(QRect(10, 240, 461, 191));
        qpb_game_end = new QPushButton(qgb_game);
        qpb_game_end->setObjectName(QString::fromUtf8("qpb_game_end"));
        qpb_game_end->setGeometry(QRect(8, 150, 441, 25));
        qpb_game_move = new QPushButton(qgb_game);
        qpb_game_move->setObjectName(QString::fromUtf8("qpb_game_move"));
        qpb_game_move->setGeometry(QRect(8, 120, 441, 25));
        label_8 = new QLabel(qgb_game);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 80, 61, 29));
        label_9 = new QLabel(qgb_game);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 50, 61, 29));
        label_6 = new QLabel(qgb_game);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 30, 51, 21));
        ql_game_player_now = new QLabel(qgb_game);
        ql_game_player_now->setObjectName(QString::fromUtf8("ql_game_player_now"));
        ql_game_player_now->setGeometry(QRect(80, 30, 201, 20));
        ql_game_sticks_now = new QLabel(qgb_game);
        ql_game_sticks_now->setObjectName(QString::fromUtf8("ql_game_sticks_now"));
        ql_game_sticks_now->setGeometry(QRect(80, 50, 371, 29));
        qsb_game_step = new QSpinBox(qgb_game);
        qsb_game_step->setObjectName(QString::fromUtf8("qsb_game_step"));
        qsb_game_step->setGeometry(QRect(80, 80, 371, 25));
        qsb_game_step->setMinimum(1);
        qsb_game_step->setMaximum(3);
        qsb_game_step->setSingleStep(1);
        qgb_settings = new QGroupBox(centralwidget);
        qgb_settings->setObjectName(QString::fromUtf8("qgb_settings"));
        qgb_settings->setGeometry(QRect(10, 10, 461, 221));
        qgb_mod = new QGroupBox(qgb_settings);
        qgb_mod->setObjectName(QString::fromUtf8("qgb_mod"));
        qgb_mod->setGeometry(QRect(10, 70, 441, 61));
        qrb_human_computer = new QRadioButton(qgb_mod);
        qrb_human_computer->setObjectName(QString::fromUtf8("qrb_human_computer"));
        qrb_human_computer->setGeometry(QRect(10, 30, 210, 22));
        qrb_human_human = new QRadioButton(qgb_mod);
        qrb_human_human->setObjectName(QString::fromUtf8("qrb_human_human"));
        qrb_human_human->setGeometry(QRect(210, 30, 211, 22));
        qpb_game_begim = new QPushButton(qgb_settings);
        qpb_game_begim->setObjectName(QString::fromUtf8("qpb_game_begim"));
        qpb_game_begim->setGeometry(QRect(10, 180, 441, 25));
        label_4 = new QLabel(qgb_settings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 140, 81, 29));
        qcb_game_player_first = new QComboBox(qgb_settings);
        qcb_game_player_first->addItem(QString());
        qcb_game_player_first->addItem(QString());
        qcb_game_player_first->addItem(QString());
        qcb_game_player_first->setObjectName(QString::fromUtf8("qcb_game_player_first"));
        qcb_game_player_first->setGeometry(QRect(90, 140, 361, 31));
        label_2 = new QLabel(qgb_settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 131, 27));
        qpb_game_sticks_random = new QPushButton(qgb_settings);
        qpb_game_sticks_random->setObjectName(QString::fromUtf8("qpb_game_sticks_random"));
        qpb_game_sticks_random->setGeometry(QRect(370, 30, 81, 31));
        qsb_game_sticks = new QSpinBox(qgb_settings);
        qsb_game_sticks->setObjectName(QString::fromUtf8("qsb_game_sticks"));
        qsb_game_sticks->setGeometry(QRect(150, 30, 211, 31));
        qsb_game_sticks->setMinimum(5);
        qsb_game_sticks->setMaximum(50);
        qsb_game_sticks->setDisplayIntegerBase(10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 938, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        qgb_game->setTitle(QApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        qpb_game_end->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        qpb_game_move->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \321\205\320\276\320\264", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\320\222\320\260\321\210 \321\205\320\276\320\264:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\237\320\260\320\273\320\276\321\207\320\272\320\270:", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\320\245\320\276\320\264\320\270\321\202:", nullptr));
        ql_game_player_now->setText(QApplication::translate("MainWindow", "\320\230\320\263\321\200\320\276\320\272 1", nullptr));
        ql_game_sticks_now->setText(QApplication::translate("MainWindow", "||||| (5)", nullptr));
        qgb_settings->setTitle(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\270\320\263\321\200\321\213", nullptr));
        qgb_mod->setTitle(QApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \320\270\320\263\321\200\321\213", nullptr));
        qrb_human_computer->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214 - \320\232\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200", nullptr));
        qrb_human_human->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214 - \320\237\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        qpb_game_begim->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \320\270\320\263\321\200\321\203", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\262\321\213\320\271 \321\205\320\276\320\264 ", nullptr));
        qcb_game_player_first->setItemText(0, QApplication::translate("MainWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\320\276", nullptr));
        qcb_game_player_first->setItemText(1, QApplication::translate("MainWindow", "\320\230\320\263\321\200\320\276\320\272 1", nullptr));
        qcb_game_player_first->setItemText(2, QApplication::translate("MainWindow", "\320\230\320\263\321\200\320\276\320\272 2", nullptr));

        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\260\320\273\320\276\321\207\320\265\320\272 ", nullptr));
        qpb_game_sticks_random->setText(QApplication::translate("MainWindow", "\320\241\320\273\321\203\321\207\320\260\320\271\320\275\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
