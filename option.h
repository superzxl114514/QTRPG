#ifndef OPTION_H
#define OPTION_H

#include <QWidget>
namespace Ui {
class Option;
}

class Option : public QWidget
{
    Q_OBJECT

public:
    explicit Option(QWidget *parent = nullptr);
    ~Option();
signals:
    void musicchange();


private slots:
    void on_Music_stateChanged(int arg1);


    void on_backButton_clicked();

private:
    Ui::Option *ui;

};

#endif // OPTION_H
