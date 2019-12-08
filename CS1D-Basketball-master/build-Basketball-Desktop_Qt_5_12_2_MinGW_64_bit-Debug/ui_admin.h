/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QGroupBox *pushButtonGroup;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *adminButton;
    QPushButton *teamButton;
    QPushButton *distanceButton;
    QPushButton *souvenirButton;
    QPushButton *logoutButton;
    QStackedWidget *stackedWidget;
    QWidget *mainPage;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(1200, 700);
        pushButtonGroup = new QGroupBox(admin);
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
        adminButton = new QPushButton(layoutWidget);
        adminButton->setObjectName(QString::fromUtf8("adminButton"));
        adminButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        adminButton->setFont(font);
        adminButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(adminButton);

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

        distanceButton = new QPushButton(layoutWidget);
        distanceButton->setObjectName(QString::fromUtf8("distanceButton"));
        distanceButton->setMaximumSize(QSize(16777215, 16777215));
        distanceButton->setFont(font);
        distanceButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(distanceButton);

        souvenirButton = new QPushButton(layoutWidget);
        souvenirButton->setObjectName(QString::fromUtf8("souvenirButton"));
        souvenirButton->setMaximumSize(QSize(16777215, 16777215));
        souvenirButton->setFont(font);
        souvenirButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(souvenirButton);

        logoutButton = new QPushButton(layoutWidget);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setFont(font);
        logoutButton->setStyleSheet(QString::fromUtf8("background-color:#ccccff;\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 2px;\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(logoutButton);

        stackedWidget = new QStackedWidget(admin);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 60, 1200, 640));
        mainPage = new QWidget();
        mainPage->setObjectName(QString::fromUtf8("mainPage"));
        mainPage->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(mainPage);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "Form", nullptr));
        pushButtonGroup->setTitle(QString());
        adminButton->setText(QApplication::translate("admin", "Admin Options", nullptr));
        teamButton->setText(QApplication::translate("admin", "Edit/Add Teams", nullptr));
        distanceButton->setText(QApplication::translate("admin", "Edit Distances", nullptr));
        souvenirButton->setText(QApplication::translate("admin", "Souvenirs", nullptr));
        logoutButton->setText(QApplication::translate("admin", "LOGOUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
