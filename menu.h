#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include "option.h"

namespace Ui {
class Menu;
}

class Menu : public QWidget
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();
    Option* getOption();


private slots:
    void on_backButton_clicked();

    void on_optionButton_clicked();

    void on_exitButton_clicked();

private:
    Ui::Menu *ui;
     Option * option;
};

#endif // MENU_H
