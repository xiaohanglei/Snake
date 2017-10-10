#ifndef GAMEFORM_H
#define GAMEFORM_H

#include <QWidget>
#include <QPainter>
#include <QImage>
#include <QTimer>
#include <QMessageBox>
#include <QPixmap>
#include <QKeyEvent>

namespace Ui {
class GameForm;
}

class GameForm : public QWidget
{
    Q_OBJECT

public:
    explicit GameForm(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    ~GameForm();

     void keyPressEvent( QKeyEvent * k );

private slots:
    void on_btnret_clicked(bool checked);

    void on_btnsta_clicked(bool checked);

    void on_btntop_clicked(bool checked);

    void on_btnright_clicked(bool checked);

    void on_btnbut_clicked(bool checked);

    void on_btnleft_clicked(bool checked);

private:
    Ui::GameForm *ui;
    int fx;//方向
    QTimer * tme;//计时器
    int snoke[100][2];//保存蛇的每个节点（蛇身）坐标。
    int snoke1[100][2];//备份坐标
    int x, y;//保存食物的坐标
    int count;

    int sc;//分数
    int lev;//等级

    int time;//蛇的速度

    QString applicationDirPath;
private slots:
    void sjd();
    void on_btnstop_clicked(bool checked);
};

#endif // GAMEFORM_H
