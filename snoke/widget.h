#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include "gameform.h"
#include <QPixmap>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_2_clicked(bool checked);

    void on_pushButton_clicked(bool checked);

private:
    Ui::Widget *ui;
    GameForm * game;
};

#endif // WIDGET_H
