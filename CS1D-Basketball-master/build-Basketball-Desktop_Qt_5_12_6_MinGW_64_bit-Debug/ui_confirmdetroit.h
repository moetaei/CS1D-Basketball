/********************************************************************************
** Form generated from reading UI file 'confirmdetroit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMDETROIT_H
#define UI_CONFIRMDETROIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfirmDetroit
{
public:
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *selectCityPage;
    QLabel *label_2;
    QListWidget *detroitList;
    QWidget *confirmSelectionPage;
    QLabel *confirmedDestLabel;
    QListWidget *confirmListWidget;
    QLabel *distanceLabel;
    QLineEdit *lineEdit;
    QPushButton *confirm;
    QPushButton *cancel;
    QPushButton *select;

    void setupUi(QWidget *ConfirmDetroit)
    {
        if (ConfirmDetroit->objectName().isEmpty())
            ConfirmDetroit->setObjectName(QString::fromUtf8("ConfirmDetroit"));
        ConfirmDetroit->resize(315, 537);
        label = new QLabel(ConfirmDetroit);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 231, 71));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        label->setFont(font);
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        stackedWidget = new QStackedWidget(ConfirmDetroit);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 90, 291, 351));
        selectCityPage = new QWidget();
        selectCityPage->setObjectName(QString::fromUtf8("selectCityPage"));
        label_2 = new QLabel(selectCityPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 251, 41));
        label_2->setWordWrap(true);
        detroitList = new QListWidget(selectCityPage);
        detroitList->setObjectName(QString::fromUtf8("detroitList"));
        detroitList->setGeometry(QRect(40, 60, 211, 291));
        detroitList->setSelectionMode(QAbstractItemView::MultiSelection);
        stackedWidget->addWidget(selectCityPage);
        confirmSelectionPage = new QWidget();
        confirmSelectionPage->setObjectName(QString::fromUtf8("confirmSelectionPage"));
        confirmedDestLabel = new QLabel(confirmSelectionPage);
        confirmedDestLabel->setObjectName(QString::fromUtf8("confirmedDestLabel"));
        confirmedDestLabel->setGeometry(QRect(10, 20, 250, 20));
        confirmListWidget = new QListWidget(confirmSelectionPage);
        confirmListWidget->setObjectName(QString::fromUtf8("confirmListWidget"));
        confirmListWidget->setGeometry(QRect(40, 60, 211, 241));
        distanceLabel = new QLabel(confirmSelectionPage);
        distanceLabel->setObjectName(QString::fromUtf8("distanceLabel"));
        distanceLabel->setGeometry(QRect(10, 310, 250, 20));
        lineEdit = new QLineEdit(confirmSelectionPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 310, 91, 20));
        stackedWidget->addWidget(confirmSelectionPage);
        confirm = new QPushButton(ConfirmDetroit);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(210, 490, 75, 31));
        cancel = new QPushButton(ConfirmDetroit);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(30, 490, 75, 31));
        select = new QPushButton(ConfirmDetroit);
        select->setObjectName(QString::fromUtf8("select"));
        select->setGeometry(QRect(210, 450, 75, 31));

        retranslateUi(ConfirmDetroit);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfirmDetroit);
    } // setupUi

    void retranslateUi(QWidget *ConfirmDetroit)
    {
        ConfirmDetroit->setWindowTitle(QApplication::translate("ConfirmDetroit", "Form", nullptr));
        label->setText(QApplication::translate("ConfirmDetroit", "Pick cities to travel to visit starting from Detroit", nullptr));
        label_2->setText(QApplication::translate("ConfirmDetroit", "<html><head/><body><p><span style=\" font-size:10pt;\">Please select </span><span style=\" font-size:10pt; font-weight:600;\">two or more</span><span style=\" font-size:10pt;\"> destinations below.</span></p></body></html>", nullptr));
        confirmedDestLabel->setText(QApplication::translate("ConfirmDetroit", "<html><head/><body><p><span style=\" font-size:10pt;\">Your vacation plan:</span></p></body></html>", nullptr));
        distanceLabel->setText(QApplication::translate("ConfirmDetroit", "<html><head/><body><p><span style=\" font-size:10pt;\">Total distance traveled:</span></p></body></html>", nullptr));
        confirm->setText(QApplication::translate("ConfirmDetroit", "Confirm", nullptr));
        cancel->setText(QApplication::translate("ConfirmDetroit", "Cancel", nullptr));
        select->setText(QApplication::translate("ConfirmDetroit", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmDetroit: public Ui_ConfirmDetroit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMDETROIT_H
