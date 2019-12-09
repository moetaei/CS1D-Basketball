/********************************************************************************
** Form generated from reading UI file 'confirmcustom2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMCUSTOM2_H
#define UI_CONFIRMCUSTOM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_confirmCustom2
{
public:
    QLabel *label;
    QPushButton *confirm;
    QPushButton *cancel;
    QStackedWidget *stackedWidget;
    QWidget *selectCityPage;
    QListWidget *customList;
    QLabel *label_2;
    QWidget *confirmSelectionPage;
    QLabel *confirmedDestLabel;
    QListWidget *confirmListWidget;
    QLabel *startCityLabel;
    QComboBox *startCityComboBox;
    QPushButton *reset;
    QPushButton *select;

    void setupUi(QWidget *confirmCustom2)
    {
        if (confirmCustom2->objectName().isEmpty())
            confirmCustom2->setObjectName(QString::fromUtf8("confirmCustom2"));
        confirmCustom2->resize(299, 552);
        label = new QLabel(confirmCustom2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 251, 61));
        label->setWordWrap(true);
        confirm = new QPushButton(confirmCustom2);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(180, 500, 80, 30));
        confirm->setStyleSheet(QString::fromUtf8(""));
        cancel = new QPushButton(confirmCustom2);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(30, 500, 80, 30));
        cancel->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(confirmCustom2);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 80, 275, 371));
        selectCityPage = new QWidget();
        selectCityPage->setObjectName(QString::fromUtf8("selectCityPage"));
        customList = new QListWidget(selectCityPage);
        customList->setObjectName(QString::fromUtf8("customList"));
        customList->setGeometry(QRect(10, 60, 255, 291));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(customList->sizePolicy().hasHeightForWidth());
        customList->setSizePolicy(sizePolicy);
        customList->setEditTriggers(QAbstractItemView::SelectedClicked);
        customList->setAlternatingRowColors(false);
        customList->setSelectionMode(QAbstractItemView::MultiSelection);
        customList->setSelectionBehavior(QAbstractItemView::SelectRows);
        customList->setLayoutMode(QListView::SinglePass);
        label_2 = new QLabel(selectCityPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 251, 41));
        label_2->setWordWrap(true);
        stackedWidget->addWidget(selectCityPage);
        confirmSelectionPage = new QWidget();
        confirmSelectionPage->setObjectName(QString::fromUtf8("confirmSelectionPage"));
        confirmedDestLabel = new QLabel(confirmSelectionPage);
        confirmedDestLabel->setObjectName(QString::fromUtf8("confirmedDestLabel"));
        confirmedDestLabel->setGeometry(QRect(10, 5, 250, 20));
        confirmListWidget = new QListWidget(confirmSelectionPage);
        confirmListWidget->setObjectName(QString::fromUtf8("confirmListWidget"));
        confirmListWidget->setGeometry(QRect(10, 30, 255, 271));
        startCityLabel = new QLabel(confirmSelectionPage);
        startCityLabel->setObjectName(QString::fromUtf8("startCityLabel"));
        startCityLabel->setGeometry(QRect(10, 300, 251, 31));
        startCityComboBox = new QComboBox(confirmSelectionPage);
        startCityComboBox->addItem(QString());
        startCityComboBox->setObjectName(QString::fromUtf8("startCityComboBox"));
        startCityComboBox->setGeometry(QRect(10, 330, 250, 22));
        stackedWidget->addWidget(confirmSelectionPage);
        reset = new QPushButton(confirmCustom2);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(30, 460, 80, 30));
        reset->setStyleSheet(QString::fromUtf8(""));
        select = new QPushButton(confirmCustom2);
        select->setObjectName(QString::fromUtf8("select"));
        select->setGeometry(QRect(180, 460, 80, 30));
        select->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(confirmCustom2);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(confirmCustom2);
    } // setupUi

    void retranslateUi(QWidget *confirmCustom2)
    {
        confirmCustom2->setWindowTitle(QApplication::translate("confirmCustom2", "Form", nullptr));
        label->setText(QApplication::translate("confirmCustom2", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600;\">Create a Custom<br/>Vacation</span></p></body></html>", nullptr));
        confirm->setText(QApplication::translate("confirmCustom2", "Confirm", nullptr));
        cancel->setText(QApplication::translate("confirmCustom2", "Cancel", nullptr));
        label_2->setText(QApplication::translate("confirmCustom2", "<html><head/><body><p><span style=\" font-size:10pt;\">Please select </span><span style=\" font-size:10pt; font-weight:600;\">two or more</span><span style=\" font-size:10pt;\"> destinations below.</span></p></body></html>", nullptr));
        confirmedDestLabel->setText(QApplication::translate("confirmCustom2", "<html><head/><body><p><span style=\" font-size:10pt;\">Your selected destinations are:</span></p></body></html>", nullptr));
        startCityLabel->setText(QApplication::translate("confirmCustom2", "<html><head/><body><p><span style=\" font-size:10pt;\">Select your starting city below:</span></p></body></html>", nullptr));
        startCityComboBox->setItemText(0, QString());

        reset->setText(QApplication::translate("confirmCustom2", "Reset", nullptr));
        select->setText(QApplication::translate("confirmCustom2", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirmCustom2: public Ui_confirmCustom2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMCUSTOM2_H
