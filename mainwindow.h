#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSound>
#include "character.h"
#include "graphic.h"
#include "menu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_menuButton_clicked();
    void music_setting();
    void keyPressEvent(QKeyEvent * event);

private:
    Ui::MainWindow *ui;
    Character chara;
    Menu * menu;
    QList<QLabel *> maplist;
    Graphic graphic;
    Map map;
    QSound * bells;
    bool playing;
    void MoveProcess(int m);
};

#endif // MAINWINDOW_H
