/********************************************************************************
** Form generated from reading UI file 'gameform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEFORM_H
#define UI_GAMEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameForm
{
public:
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QLabel *score;
    QLabel *level;
    QFrame *line_2;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnleft;
    QPushButton *btnbut;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnright;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btntop;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnstop;
    QPushButton *btnsta;
    QPushButton *btnret;

    void setupUi(QWidget *GameForm)
    {
        if (GameForm->objectName().isEmpty())
            GameForm->setObjectName(QStringLiteral("GameForm"));
        GameForm->resize(470, 300);
        GameForm->setStyleSheet(QStringLiteral(""));
        line = new QFrame(GameForm);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(300, 0, 20, 291));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(GameForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 40, 71, 21));
        QFont font;
        font.setFamily(QStringLiteral("Andalus"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(GameForm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 70, 71, 31));
        label_2->setFont(font);
        score = new QLabel(GameForm);
        score->setObjectName(QStringLiteral("score"));
        score->setGeometry(QRect(400, 35, 61, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(24);
        font1.setBold(true);
        font1.setWeight(75);
        score->setFont(font1);
        score->setFrameShape(QFrame::Box);
        score->setAlignment(Qt::AlignCenter);
        level = new QLabel(GameForm);
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(400, 70, 61, 31));
        level->setFont(font1);
        level->setFrameShape(QFrame::Box);
        level->setAlignment(Qt::AlignCenter);
        line_2 = new QFrame(GameForm);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 280, 311, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(GameForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 110, 161, 140));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        btnleft = new QPushButton(layoutWidget);
        btnleft->setObjectName(QStringLiteral("btnleft"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/lef.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnleft->setIcon(icon);
        btnleft->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnleft, 1, 0, 1, 1);

        btnbut = new QPushButton(layoutWidget);
        btnbut->setObjectName(QStringLiteral("btnbut"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/but.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnbut->setIcon(icon1);
        btnbut->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnbut, 2, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 2, 1, 1);

        btnright = new QPushButton(layoutWidget);
        btnright->setObjectName(QStringLiteral("btnright"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/rig.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnright->setIcon(icon2);
        btnright->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnright, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 0, 1, 1);

        btntop = new QPushButton(layoutWidget);
        btntop->setObjectName(QStringLiteral("btntop"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/top.png"), QSize(), QIcon::Normal, QIcon::Off);
        btntop->setIcon(icon3);
        btntop->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btntop, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        btnstop = new QPushButton(GameForm);
        btnstop->setObjectName(QStringLiteral("btnstop"));
        btnstop->setGeometry(QRect(320, 260, 61, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        btnstop->setFont(font2);
        btnsta = new QPushButton(GameForm);
        btnsta->setObjectName(QStringLiteral("btnsta"));
        btnsta->setGeometry(QRect(320, 260, 61, 31));
        btnsta->setFont(font2);
        btnret = new QPushButton(GameForm);
        btnret->setObjectName(QStringLiteral("btnret"));
        btnret->setGeometry(QRect(400, 260, 61, 31));
        btnret->setFont(font2);

        retranslateUi(GameForm);

        QMetaObject::connectSlotsByName(GameForm);
    } // setupUi

    void retranslateUi(QWidget *GameForm)
    {
        GameForm->setWindowTitle(QApplication::translate("GameForm", "\346\270\270\346\210\217\344\270\255", 0));
        label->setText(QApplication::translate("GameForm", "\345\210\206  \346\225\260\357\274\232", 0));
        label_2->setText(QApplication::translate("GameForm", "\347\255\211  \347\272\247\357\274\232", 0));
        score->setText(QString());
        level->setText(QString());
        btnleft->setText(QString());
        btnbut->setText(QString());
        btnright->setText(QString());
        btntop->setText(QString());
        btnstop->setText(QApplication::translate("GameForm", "\346\232\202\345\201\234", 0));
        btnsta->setText(QApplication::translate("GameForm", "\345\274\200\345\247\213", 0));
        btnret->setText(QApplication::translate("GameForm", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class GameForm: public Ui_GameForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEFORM_H
