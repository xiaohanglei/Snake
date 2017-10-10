#include "gameform.h"
#include "ui_gameform.h"
#include <conio.h>
#include <QMessageBox>
#include <qdebug.h>
#include <conio.h>
#define ROW 14
#define COL 15
GameForm::GameForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameForm)
{

    this->setFocus();
    //huodelujing
    //QString applicationDirPath;
    applicationDirPath = QCoreApplication::applicationDirPath();

    this->setAutoFillBackground(true);
    ui->setupUi(this);
    ui->btnstop->setVisible(false);
    sc = 0;
    lev = 1;
    ui->score->setText(QString::number(sc,10));
    ui->level->setText(QString::number(lev, 10));
    QPalette pal;

    QString back3 = applicationDirPath + "/img/back3.png";

    pal.setBrush(QPalette::Background,QBrush(QPixmap(back3).scaled(this->size())));

    this->setPalette(pal);



    snoke[0][0] = qrand() % COL;
    snoke[0][1] = qrand() % ROW;
    fx = qrand() % 4;
    tme = new QTimer(this);
    connect(this->tme,SIGNAL(timeout()),this,SLOT(sjd()));



    x = qrand() % COL;
    y = qrand() % ROW;
    count = 0;

    time = 400;//��ʼ�ٶ�
}
void GameForm::paintEvent(QPaintEvent *)//��������ͼ��
{
    int i , j ;
    QPainter pa(this);
    //��������
    for (i = 0 ; i < COL ; i++)
    {
        for (j = 0 ; j < ROW ; j++)
        {
           pa.drawRect(QRect(20*i,20*j,20,20));
        }
    }

    //����ʳ��

    QString shiwu = applicationDirPath + "/img/shiwu.png";
    pa.drawImage(QRectF(x*20,y*20,20,20),QImage(shiwu));

    QString head;
    //������ͷ
    switch(fx)
    {
    case 0:
        head = applicationDirPath + "/img/headtop.png";
        pa.drawImage(QRectF(snoke[0][0]*20,snoke[0][1]*20,20,20),QImage(head));
        break;
    case 1:
        head = applicationDirPath + "/img/headbut.png";
        pa.drawImage(QRectF(snoke[0][0]*20,snoke[0][1]*20,20,20),QImage(head));
        break;
    case 2:
        head = applicationDirPath + "/img/headleft.png";
        pa.drawImage(QRectF(snoke[0][0]*20,snoke[0][1]*20,20,20),QImage(head));
        break;
    case 3:
        head = applicationDirPath + "/img/headright.png";
        pa.drawImage(QRectF(snoke[0][0]*20,snoke[0][1]*20,20,20),QImage(head));
        break;
    default :
        break;
    }
    //��������
    for (i = 1 ; i < count; i++)
    {

        if (snoke[i][0] < snoke[i-1][0] && snoke[i][1] < snoke[i+1][1]
                || snoke[i][0] < snoke[i+1][0] && snoke[i][1] < snoke[i-1][1])
        {
            QString w4 = applicationDirPath + "/img/w4.png";
            pa.drawImage(QRectF(snoke[i][0]*20,snoke[i][1]*20,20,20),QImage(w4));
        }

        else if (snoke[i][0] < snoke[i-1][0] && snoke[i][1] > snoke[i+1][1]
                 || snoke[i][0] < snoke[i+1][0] && snoke[i][1] > snoke[i-1][1])
        {
            QString w3 = applicationDirPath + "/img/w3.png";
            pa.drawImage(QRectF(snoke[i][0]*20,snoke[i][1]*20,20,20),QImage(w3));
        }

        else if (snoke[i][0] > snoke[i+1][0] && snoke[i][1] > snoke[i-1][1]
                 || snoke[i][0] > snoke[i-1][0] && snoke[i][1] > snoke[i+1][1])
        {
            QString w2 = applicationDirPath + "/img/w2.png";
            pa.drawImage(QRectF(snoke[i][0]*20,snoke[i][1]*20,20,20),QImage(w2));
        }
        else if (snoke[i][0] > snoke[i-1][0] && snoke[i][1] < snoke[i+1][1]
                 || snoke[i][0] > snoke[i+1][0] && snoke[i][1] < snoke[i-1][1])
        {
            QString w1 = applicationDirPath + "/img/w1.png";
            pa.drawImage(QRectF(snoke[i][0]*20,snoke[i][1]*20,20,20),QImage(w1));
        }
        else
        {

        if (snoke[i][0] == snoke[i-1][0])
        {
            //����
            QString shen = applicationDirPath + "/img/shen.png";
            pa.drawImage(QRectF(snoke[i][0]*20,snoke[i][1]*20,20,20),QImage(shen));

        }
        else if (snoke[i][1] == snoke[i-1][1])
        {
            //����
            QString shen1 = applicationDirPath + "/img/shen1.png";
            pa.drawImage(QRectF(snoke[i][0]*20,snoke[i][1]*20,20,20),QImage(shen1));
        }
        }
    }
    //������β
    if (count != 0)
    {
        if ( snoke[count][1] == snoke[count-1][1] )
        {
            if (snoke[count][0] > snoke[count-1][0])
            {
                QString wei4 = applicationDirPath + "/img/wei4.png";
                pa.drawImage(QRectF(snoke[count][0]*20,snoke[count][1]*20,20,20),QImage(wei4));
            }
            else
            {
                QString wei3 = applicationDirPath + "/img/wei3.png";
                pa.drawImage(QRectF(snoke[count][0]*20,snoke[count][1]*20,20,20),QImage(wei3));
            }
        }
        else if (snoke[count][0] == snoke[count-1][0])
        {
            if (snoke[count][1] > snoke[count-1][1])
            {
                QString wei2 = applicationDirPath + "/img/wei2.png";
                pa.drawImage(QRectF(snoke[count][0]*20,snoke[count][1]*20,20,20),QImage(wei2));
            }
            else
            {
                QString wei1 = applicationDirPath + "/img/wei1.png";
                pa.drawImage(QRectF(snoke[count][0]*20,snoke[count][1]*20,20,20),QImage(wei1));
            }
        }
    }
}
void GameForm:: sjd()
{//������Ӧ�����������Ӧ���ƶ������꣬
    int i = 0;
    if (snoke[0][0] == x && snoke[0][1] == y)
    {
        //���²���ʳ��
        x = qrand() % COL;
        y = qrand() % ROW;
        //���ʳ��Ĳ�����λ�ò��ܺ��ߵ�λ���غ�
        for (i = 0 ; i <= count ; i++)
        {
            if (x == snoke[i][0] && y == snoke[i][1])
            {
                x = qrand() % COL;
                y = qrand() % ROW;
            }
        }


        count++;
        sc = count * 10;
        if (sc % 50 == 0)
        {
            lev++;
            time -= 100;
        }
        ui->score->setText(QString::number(sc, 10));
        ui->level->setText(QString::number(lev, 10));
    }
    memcpy(snoke1,snoke,sizeof(snoke));
    //�ı�����ĵ�����
    for ( i = count ; i > 0 ; i--)
    {
        snoke[i][0] = snoke[i-1][0];
        snoke[i][1] = snoke[i-1][1];
    }
   //��ͷ
    switch(fx)
    {
    case 0:
        snoke[0][1]--;

        break;
    case 1:
        snoke[0][1]++;

        break;
    case 2:
        snoke[0][0]--;

        break;
    case 3:
        snoke[0][0]++;

        break;
    }
//�����ͷ�Ƿ������ĸ��߽�
    if (snoke[0][1] < 0 || snoke[0][1] >= ROW || snoke[0][0] < 0 || snoke[0][0] >= COL)
    {
        memcpy(snoke,snoke1,sizeof(snoke1));

        QMessageBox::warning(this,QString::fromLocal8Bit("ʧ��"),QString::fromLocal8Bit("��Ϸʧ�ܣ�"));
        tme->stop();
        delete this;
        return;
    }
//�����ͷ�Ƿ������Լ�����
    for (i = 1 ; i <= count ; i++)
    {
        if (snoke[0][0] == snoke[i][0] && snoke[0][1] == snoke[i][1])
        {
            memcpy(snoke,snoke1,sizeof(snoke1));
            QMessageBox::warning(this,QString::fromLocal8Bit("ʧ��"),QString::fromLocal8Bit("��Ϸʧ�ܣ�"));
            tme->stop();
            delete this;
            return;
        }
    }
    //���������Ժ��ڸ����µ������ڻ�һ�Ρ�

    this->update();
    this->setFocus();//ÿ�θ������Ժ�ʹ�����������»�ý��㣬�Ա㲶׽�������
}

GameForm::~GameForm()
{
    delete ui;
}

void GameForm::on_btnret_clicked(bool checked)
{
    delete this;
}

void GameForm::on_btnsta_clicked(bool checked)
{
    tme->start(time);
    ui->btnsta->setVisible(false);
    ui->btnstop->setVisible(true);

}

void GameForm::on_btntop_clicked(bool checked)
{
    fx = 0;
}

void GameForm::on_btnright_clicked(bool checked)
{
    fx = 3;
}

void GameForm::on_btnbut_clicked(bool checked)
{
    fx = 1;
}

void GameForm::on_btnleft_clicked(bool checked)
{
    fx = 2;
}

void GameForm::on_btnstop_clicked(bool checked)
{
    tme->stop();
    ui->btnstop->setVisible(false);
    ui->btnsta->setText(QString::fromLocal8Bit("����"));
    ui->btnsta->setVisible(true);
}


void GameForm::keyPressEvent(QKeyEvent *k)
{
    switch(k->key())
    {
    case Qt::Key_Up:
    case Qt::Key_W :
        fx = 0;
        break;
    case Qt::Key_Down:
    case Qt::Key_S   :
        fx = 1;
        break;
    case Qt::Key_Left:
    case Qt::Key_A   :
        fx = 2;
        break;
    case Qt::Key_Right:
    case Qt::Key_D    :
        fx = 3;
        break;
    }
}









