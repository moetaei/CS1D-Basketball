/********************************************************************************
** Form generated from reading UI file 'editteam.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTEAM_H
#define UI_EDITTEAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editTeam
{
public:
    QLabel *editteamLabel;
    QListWidget *listWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *editTeamButton;
    QPushButton *addTeamButton;

    void setupUi(QWidget *editTeam)
    {
        if (editTeam->objectName().isEmpty())
            editTeam->setObjectName(QString::fromUtf8("editTeam"));
        editTeam->resize(1200, 700);
        editteamLabel = new QLabel(editTeam);
        editteamLabel->setObjectName(QString::fromUtf8("editteamLabel"));
        editteamLabel->setGeometry(QRect(150, 100, 331, 41));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        editteamLabel->setFont(font);
        editteamLabel->setTextFormat(Qt::PlainText);
        listWidget = new QListWidget(editTeam);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(780, 170, 291, 391));
        horizontalLayoutWidget = new QWidget(editTeam);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 220, 211, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        editTeamButton = new QPushButton(horizontalLayoutWidget);
        editTeamButton->setObjectName(QString::fromUtf8("editTeamButton"));

        horizontalLayout->addWidget(editTeamButton);

        addTeamButton = new QPushButton(horizontalLayoutWidget);
        addTeamButton->setObjectName(QString::fromUtf8("addTeamButton"));

        horizontalLayout->addWidget(addTeamButton);


        retranslateUi(editTeam);

        QMetaObject::connectSlotsByName(editTeam);
    } // setupUi

    void retranslateUi(QWidget *editTeam)
    {
        editTeam->setWindowTitle(QApplication::translate("editTeam", "Form", nullptr));
        editteamLabel->setText(QApplication::translate("editTeam", "Edit/Add Teams", nullptr));
        editTeamButton->setText(QApplication::translate("editTeam", "Edit", nullptr));
        addTeamButton->setText(QApplication::translate("editTeam", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editTeam: public Ui_editTeam {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTEAM_H
