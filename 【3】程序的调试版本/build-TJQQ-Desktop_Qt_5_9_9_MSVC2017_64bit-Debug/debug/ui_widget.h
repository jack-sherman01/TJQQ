/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextBrowser *msgBrowser;
    QTextEdit *msgTxtEdit;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QToolButton *boldTBtn;
    QToolButton *italicTBtn;
    QToolButton *underlineTBtn;
    QToolButton *colorTBtn;
    QToolButton *saveTBtn;
    QToolButton *clearTBtn;
    QTableWidget *usrTblWidget;
    QPushButton *sendBtn;
    QPushButton *exitBtn;
    QLabel *usrNumLbl;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 600);
        msgBrowser = new QTextBrowser(Widget);
        msgBrowser->setObjectName(QStringLiteral("msgBrowser"));
        msgBrowser->setGeometry(QRect(5, 11, 551, 321));
        msgTxtEdit = new QTextEdit(Widget);
        msgTxtEdit->setObjectName(QStringLiteral("msgTxtEdit"));
        msgTxtEdit->setGeometry(QRect(10, 380, 541, 161));
        fontCbx = new QFontComboBox(Widget);
        fontCbx->setObjectName(QStringLiteral("fontCbx"));
        fontCbx->setGeometry(QRect(10, 330, 216, 31));
        sizeCbx = new QComboBox(Widget);
        sizeCbx->setObjectName(QStringLiteral("sizeCbx"));
        sizeCbx->setGeometry(QRect(240, 330, 72, 31));
        boldTBtn = new QToolButton(Widget);
        boldTBtn->setObjectName(QStringLiteral("boldTBtn"));
        boldTBtn->setGeometry(QRect(320, 330, 31, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        boldTBtn->setFont(font);
#ifndef QT_NO_TOOLTIP
        boldTBtn->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        boldTBtn->setCheckable(true);
        italicTBtn = new QToolButton(Widget);
        italicTBtn->setObjectName(QStringLiteral("italicTBtn"));
        italicTBtn->setGeometry(QRect(360, 330, 31, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        italicTBtn->setFont(font1);
#ifndef QT_NO_TOOLTIP
        italicTBtn->setToolTip(QStringLiteral(""));
#endif // QT_NO_TOOLTIP
        italicTBtn->setToolTipDuration(1);
        italicTBtn->setCheckable(true);
        underlineTBtn = new QToolButton(Widget);
        underlineTBtn->setObjectName(QStringLiteral("underlineTBtn"));
        underlineTBtn->setGeometry(QRect(400, 330, 31, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setUnderline(true);
        underlineTBtn->setFont(font2);
        underlineTBtn->setCheckable(true);
        underlineTBtn->setAutoRaise(false);
        colorTBtn = new QToolButton(Widget);
        colorTBtn->setObjectName(QStringLiteral("colorTBtn"));
        colorTBtn->setGeometry(QRect(440, 330, 31, 31));
        colorTBtn->setCheckable(true);
        saveTBtn = new QToolButton(Widget);
        saveTBtn->setObjectName(QStringLiteral("saveTBtn"));
        saveTBtn->setGeometry(QRect(480, 330, 31, 31));
        saveTBtn->setCheckable(true);
        clearTBtn = new QToolButton(Widget);
        clearTBtn->setObjectName(QStringLiteral("clearTBtn"));
        clearTBtn->setGeometry(QRect(520, 330, 31, 31));
        clearTBtn->setCheckable(true);
        usrTblWidget = new QTableWidget(Widget);
        if (usrTblWidget->columnCount() < 1)
            usrTblWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        usrTblWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        usrTblWidget->setObjectName(QStringLiteral("usrTblWidget"));
        usrTblWidget->setGeometry(QRect(570, 10, 221, 531));
        usrTblWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        usrTblWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        usrTblWidget->setShowGrid(false);
        sendBtn = new QPushButton(Widget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(150, 560, 80, 20));
        exitBtn = new QPushButton(Widget);
        exitBtn->setObjectName(QStringLiteral("exitBtn"));
        exitBtn->setGeometry(QRect(710, 560, 80, 20));
        usrNumLbl = new QLabel(Widget);
        usrNumLbl->setObjectName(QStringLiteral("usrNumLbl"));
        usrNumLbl->setGeometry(QRect(400, 560, 54, 12));

        retranslateUi(Widget);

        sizeCbx->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        sizeCbx->clear();
        sizeCbx->insertItems(0, QStringList()
         << QApplication::translate("Widget", "8", Q_NULLPTR)
         << QApplication::translate("Widget", "9", Q_NULLPTR)
         << QApplication::translate("Widget", "10", Q_NULLPTR)
         << QApplication::translate("Widget", "11", Q_NULLPTR)
         << QApplication::translate("Widget", "12", Q_NULLPTR)
         << QApplication::translate("Widget", "13", Q_NULLPTR)
         << QApplication::translate("Widget", "14", Q_NULLPTR)
         << QApplication::translate("Widget", "15", Q_NULLPTR)
         << QApplication::translate("Widget", "16", Q_NULLPTR)
         << QApplication::translate("Widget", "17", Q_NULLPTR)
         << QApplication::translate("Widget", "18", Q_NULLPTR)
         << QApplication::translate("Widget", "19", Q_NULLPTR)
         << QApplication::translate("Widget", "20", Q_NULLPTR)
         << QApplication::translate("Widget", "21", Q_NULLPTR)
         << QApplication::translate("Widget", "22", Q_NULLPTR)
        );
        sizeCbx->setCurrentText(QApplication::translate("Widget", "12", Q_NULLPTR));
        boldTBtn->setText(QApplication::translate("Widget", "B", Q_NULLPTR));
        italicTBtn->setText(QApplication::translate("Widget", "I", Q_NULLPTR));
        underlineTBtn->setText(QApplication::translate("Widget", "U", Q_NULLPTR));
        colorTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        saveTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        clearTBtn->setText(QApplication::translate("Widget", "...", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = usrTblWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", Q_NULLPTR));
        exitBtn->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        usrNumLbl->setText(QApplication::translate("Widget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
