/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QStackedWidget *stackedWidget;
    QWidget *mainPage;
    QGroupBox *package1;
    QLabel *label;
    QPushButton *pushButton;
    QGroupBox *package2;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QGroupBox *package3;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QGroupBox *package4;
    QLabel *label_4;
    QPushButton *pushButton_4;
    QPushButton *dfs;
    QPushButton *mst;
    QGroupBox *pushButtonGroup;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *travelPackButton;
    QPushButton *teamButton;
    QPushButton *infoButton;
    QPushButton *coachButton;
    QPushButton *confrenceButton;
    QPushButton *divisionButton;
    QPushButton *arenaButton;
    QPushButton *logoutButton;

    void setupUi(QWidget *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName(QString::fromUtf8("user"));
        user->resize(1200, 700);
        stackedWidget = new QStackedWidget(user);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 60, 1200, 640));
        mainPage = new QWidget();
        mainPage->setObjectName(QString::fromUtf8("mainPage"));
        mainPage->setStyleSheet(QString::fromUtf8(""));
        package1 = new QGroupBox(mainPage);
        package1->setObjectName(QString::fromUtf8("package1"));
        package1->setGeometry(QRect(10, 100, 285, 381));
        package1->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color:black;"));
        label = new QLabel(package1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 131, 16));
        pushButton = new QPushButton(package1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 340, 93, 28));
        package2 = new QGroupBox(mainPage);
        package2->setObjectName(QString::fromUtf8("package2"));
        package2->setGeometry(QRect(310, 100, 285, 381));
        package2->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color:black;"));
        label_2 = new QLabel(package2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 30, 191, 16));
        pushButton_2 = new QPushButton(package2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 340, 93, 28));
        package3 = new QGroupBox(mainPage);
        package3->setObjectName(QString::fromUtf8("package3"));
        package3->setGeometry(QRect(605, 100, 285, 381));
        package3->setStyleSheet(QString::fromUtf8("background-color:#ffffff;\n"
"color:black;"));
        label_3 = new QLabel(package3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 30, 201, 16));
        pushButton_3 = new QPushButton(package3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 340, 93, 28));
        package4 = new QGroupBox(mainPage);
        package4->setObjectName(QString::fromUtf8("package4"));
        package4->setGeometry(QRect(900, 100, 285, 381));
        package4->setStyleSheet(QString::fromUtf8("background-color:#ffffff\n"
""));
        label_4 = new QLabel(package4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 40, 231, 16));
        pushButton_4 = new QPushButton(package4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(180, 340, 93, 28));
        dfs = new QPushButton(mainPage);
        dfs->setObjectName(QString::fromUtf8("dfs"));
        dfs->setGeometry(QRect(330, 40, 261, 21));
        mst = new QPushButton(mainPage);
        mst->setObjectName(QString::fromUtf8("mst"));
        mst->setGeometry(QRect(20, 40, 261, 21));
        stackedWidget->addWidget(mainPage);
        pushButtonGroup = new QGroupBox(user);
        pushButtonGroup->setObjectName(QString::fromUtf8("pushButtonGroup"));
        pushButtonGroup->setGeometry(QRect(0, 0, 1200, 60));
        pushButtonGroup->setStyleSheet(QString::fromUtf8("background-color: #ecf1f5;\n"
"color:black;"));
        layoutWidget = new QWidget(pushButtonGroup);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 20, 1171, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        travelPackButton = new QPushButton(layoutWidget);
        travelPackButton->setObjectName(QString::fromUtf8("travelPackButton"));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        travelPackButton->setFont(font);
        travelPackButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(travelPackButton);

        teamButton = new QPushButton(layoutWidget);
        teamButton->setObjectName(QString::fromUtf8("teamButton"));
        teamButton->setMaximumSize(QSize(16777215, 16777215));
        teamButton->setFont(font);
        teamButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(teamButton);

        infoButton = new QPushButton(layoutWidget);
        infoButton->setObjectName(QString::fromUtf8("infoButton"));
        infoButton->setMaximumSize(QSize(16777215, 16777215));
        infoButton->setFont(font);
        infoButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(infoButton);

        coachButton = new QPushButton(layoutWidget);
        coachButton->setObjectName(QString::fromUtf8("coachButton"));
        coachButton->setMaximumSize(QSize(16777215, 16777215));
        coachButton->setFont(font);
        coachButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(coachButton);

        confrenceButton = new QPushButton(layoutWidget);
        confrenceButton->setObjectName(QString::fromUtf8("confrenceButton"));
        confrenceButton->setMaximumSize(QSize(16777215, 16777215));
        confrenceButton->setFont(font);
        confrenceButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(confrenceButton);

        divisionButton = new QPushButton(layoutWidget);
        divisionButton->setObjectName(QString::fromUtf8("divisionButton"));
        divisionButton->setMaximumSize(QSize(16777215, 16777215));
        divisionButton->setFont(font);
        divisionButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(divisionButton);

        arenaButton = new QPushButton(layoutWidget);
        arenaButton->setObjectName(QString::fromUtf8("arenaButton"));
        arenaButton->setMaximumSize(QSize(16777215, 16777215));
        arenaButton->setFont(font);
        arenaButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(arenaButton);

        logoutButton = new QPushButton(layoutWidget);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setFont(font);
        logoutButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(logoutButton);


        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QWidget *user)
    {
        user->setWindowTitle(QApplication::translate("user", "Form", nullptr));
        package1->setTitle(QString());
        label->setText(QApplication::translate("user", "Start from Denver", nullptr));
        pushButton->setText(QApplication::translate("user", "Select", nullptr));
        package2->setTitle(QString());
        label_2->setText(QApplication::translate("user", "Custom trip (they pick city order)", nullptr));
        pushButton_2->setText(QApplication::translate("user", "Select", nullptr));
        package3->setTitle(QString());
        label_3->setText(QApplication::translate("user", "Visit all cities starting from Detroit", nullptr));
        pushButton_3->setText(QApplication::translate("user", "Select", nullptr));
        package4->setTitle(QString());
        label_4->setText(QApplication::translate("user", "Custom trip (we pick city order)", nullptr));
        pushButton_4->setText(QApplication::translate("user", "Select", nullptr));
        dfs->setText(QApplication::translate("user", "DFS Starting with Orlando Magic", nullptr));
        mst->setText(QApplication::translate("user", "MST", nullptr));
        pushButtonGroup->setTitle(QString());
        travelPackButton->setText(QApplication::translate("user", "Travel Options", nullptr));
        teamButton->setText(QApplication::translate("user", "The Teams", nullptr));
        infoButton->setText(QApplication::translate("user", "Team Info", nullptr));
        coachButton->setText(QApplication::translate("user", "Coaches", nullptr));
        confrenceButton->setText(QApplication::translate("user", "Confrences", nullptr));
        divisionButton->setText(QApplication::translate("user", "Divisions", nullptr));
        arenaButton->setText(QApplication::translate("user", "Arenas", nullptr));
        logoutButton->setText(QApplication::translate("user", "LOGOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
