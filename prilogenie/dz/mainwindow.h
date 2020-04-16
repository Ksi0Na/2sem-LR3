#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
//_____GETTERS__________________________________________1
    int     get_given_sticks() const;
    int     get_sticks_now()   const;
    int     get_step()         const;
    QString get_mode()         const;
    QString get_player_first() const;
    QString get_player_now()   const;
//______________________________________________________1
//_____GAME_____________________________________________3
    void begin();
    void view_sticks(int);
    void player_change();
    void computer_game(int);
    void human_game();
    void checking_sticks_number();
//______________________________________________________3
private slots:
//_____SETTER_FOR_MODE__________________________________2
    void on_qrb_human_computer_clicked();
    void on_qrb_human_human_clicked();
//______________________________________________________2
//_____GAME_____________________________________________3
    void on_qpb_game_begim_clicked();
    void on_qpb_game_end_clicked();
    void on_qpb_game_sticks_random_clicked();
    void on_qpb_game_move_clicked();
//______________________________________________________3
private:
    Ui::MainWindow *ui;
    QString _mode;
};
#endif // MAINWINDOW_H
