#include "widget.h"
#include <QApplication>
#include <qdebug.h>
#include <QDir>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    qDebug()<<QDir::currentPath();
    w.show();

    return a.exec();
}
