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
    int fx;//����
    QTimer * tme;//��ʱ��
    int snoke[100][2];//�����ߵ�ÿ���ڵ㣨�������ꡣ
    int snoke1[100][2];//��������
    int x, y;//����ʳ�������
    int count;

    int sc;//����
    int lev;//�ȼ�

    int time;//�ߵ��ٶ�

    QString applicationDirPath;
private slots:
    void sjd();
    void on_btnstop_clicked(bool checked);
};

#endif // GAMEFORM_H
