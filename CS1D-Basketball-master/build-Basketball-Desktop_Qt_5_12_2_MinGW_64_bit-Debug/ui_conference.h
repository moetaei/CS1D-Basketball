/********************************************************************************
** Form generated from reading UI file 'conference.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFERENCE_H
#define UI_CONFERENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_conference
{
public:
    QTableView *conferenceTable;
    QComboBox *comboBox;

    void setupUi(QWidget *conference)
    {
        if (conference->objectName().isEmpty())
            conference->setObjectName(QString::fromUtf8("conference"));
        conference->resize(1200, 700);
        conferenceTable = new QTableView(conference);
        conferenceTable->setObjectName(QString::fromUtf8("conferenceTable"));
        conferenceTable->setGeometry(QRect(190, 120, 256, 301));
        comboBox = new QComboBox(conference);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(570, 120, 121, 31));

        retranslateUi(conference);

        QMetaObject::connectSlotsByName(conference);
    } // setupUi

    void retranslateUi(QWidget *conference)
    {
        conference->setWindowTitle(QApplication::translate("conference", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class conference: public Ui_conference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFERENCE_H
