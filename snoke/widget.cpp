#include "widget.h"
#include "ui_widget.h"
#include <qdebug.h>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{

    QString applicationDirPath;
    applicationDirPath = QCoreApplication::applicationDirPath();


    this->setAutoFillBackground(true);
    ui->setupUi(this);

    QPalette pal;

    applicationDirPath += "/img/back2.png";

    pal.setBrush(QPalette::Background,QBrush(QPixmap(applicationDirPath).scaled(this->size())));
    //"F:/C++/QT/snoke/back2.png"
    this->setPalette(pal);

    ui->pushButton->setFlat(true);
    ui->pushButton_2->setFlat(true);
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_2_clicked));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_clicked));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_2_clicked(bool checked)
{
    if (QMessageBox::Yes == QMessageBox::question(this,QString::fromLocal8Bit("Ñ¯ÎÊ"),QString::fromLocal8Bit("ÒªÍË³öÂð£¿"),QMessageBox::Yes|QMessageBox::No))
    {
        QApplication::exit();
    }
}

void Widget::on_pushButton_clicked(bool checked)
{
    game = new GameForm(this);
//    this->hide();
    game->show();
}
