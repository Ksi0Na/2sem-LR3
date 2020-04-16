#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

//_____GETTERS_______________________________________________________1
    int MainWindow::get_given_sticks()     const
    {
        return ui->qsb_game_sticks->value();
    }

    int MainWindow::get_sticks_now()       const
    {
       QString number = ui->ql_game_sticks_now->text();
       QString sticks;
       int i = 0;
       for (; number[i] != '('; i++);
       sticks[0] = number[i + 1];
       if (number[i + 2] != ')') sticks[1] = number[i + 2];
       return sticks.toInt();
    }

    int MainWindow::get_step()             const
    {
        return ui->qsb_game_step->value();
    }

    QString MainWindow::get_mode()         const
    {
        return _mode;
    }

    QString MainWindow::get_player_first() const
    {
        if (!(ui->qcb_game_player_first->currentIndex()))
        {
            if (rand()%2) return "Игрок 2";
            else          return "Игрок 1";
        }
        else
            return ui->qcb_game_player_first->currentText();
    }

    QString MainWindow::get_player_now()   const
    {
        return ui->ql_game_player_now->text();
    }
//___________________________________________________________________1
//_____SETTERS_FOR_MODE______________________________________________2
    void MainWindow::on_qrb_human_computer_clicked()
    {
        _mode = "human-computer";
    }

    void MainWindow::on_qrb_human_human_clicked()
    {
        _mode = "human-human";
    }
//___________________________________________________________________2
//_____GAME__________________________________________________________3
    void MainWindow::begin()
{
    ui->qgb_game->setEnabled(false);
}

    void MainWindow::view_sticks(int number)
    {
        QString sticks = nullptr;
        for (int i = 0; i != number; i++)
        {
            sticks += "|";
        }
        sticks += " (";
        sticks += QString::number(number);
        sticks += ")";
        ui->ql_game_sticks_now->setText(sticks);
    }

    void MainWindow::on_qpb_game_move_clicked()
    {
        if (get_mode() == "human-human")        human_game();
        if (get_mode() == "human-computer")
        {
            if (get_player_now() == "Игрок 2")  computer_game(1);
            if (get_player_now() == "Игрок 1")  human_game();
        }
    }

    void MainWindow::computer_game(int step)
    {
        checking_sticks_number();
        view_sticks(get_sticks_now() - step);
        player_change();
        on_qpb_game_move_clicked();
    }

    void MainWindow::human_game()
    {
        checking_sticks_number();
        view_sticks(get_sticks_now() - get_step());
        player_change();
        checking_sticks_number();
    }

    void MainWindow::checking_sticks_number()
    {
        if (get_sticks_now() == 2)
        {
            ui->qsb_game_step->setMaximum(2);
        }
        if (get_sticks_now() == 1)
        {
            ui->qsb_game_step->setMaximum(1);
        }
        if (get_sticks_now() == 0)
        {
            ui->qpb_game_move->setEnabled(false);
            player_change();
            QString message = "Победил " + get_player_now();
            QMessageBox::
              information(this, "Поздравляем!", message);
        }
    }

    void MainWindow::player_change()
    {
        if (get_player_now() == "Игрок 1")
        {
            ui->ql_game_player_now->setText("Игрок 2");
        }
        if (get_player_now() == "Игрок 2")
        {
            ui->ql_game_player_now->setText("Игрок 1");
        }
    }

    void MainWindow::on_qpb_game_begim_clicked()
    {
       if (get_mode() != nullptr)
       {
        ui->qgb_settings->setEnabled(false);
        ui->qgb_game->setEnabled(true);
        ui->ql_game_player_now->setText(get_player_first());
        view_sticks(get_given_sticks());
        ui->qpb_game_move->setEnabled(true);
        if ((get_mode() == "human-computer") &&
            (get_player_first() == "Игрок 2"))
        {
            computer_game(1);
        }
        }
       else
       {
           QMessageBox::
             information(this, "Ошибка", "Выберите режим игры!");
       }
    }

    void MainWindow::on_qpb_game_end_clicked()
    {
        ui->qgb_game->setEnabled(false);
        ui->qgb_settings->setEnabled(true);
        QMessageBox::
          information(this, "Благодарность", "Спасибо за игру!");
    }

    void MainWindow::on_qpb_game_sticks_random_clicked()
    {
        int sticks = 10 + rand() % 25;
        ui->qsb_game_sticks->setValue(sticks);
    }
//___________________________________________________________________3
