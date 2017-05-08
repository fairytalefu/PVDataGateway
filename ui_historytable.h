/********************************************************************************
** Form generated from reading UI file 'historytable.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYTABLE_H
#define UI_HISTORYTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HistoryTable
{
public:
    QFrame *frame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableView *tableView;
    QPushButton *backTo;

    void setupUi(QDialog *HistoryTable)
    {
        if (HistoryTable->objectName().isEmpty())
            HistoryTable->setObjectName(QStringLiteral("HistoryTable"));
        HistoryTable->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HistoryTable->sizePolicy().hasHeightForWidth());
        HistoryTable->setSizePolicy(sizePolicy);
        frame = new QFrame(HistoryTable);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 10, 631, 371));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Mono"));
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        tableView = new QTableView(frame);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        backTo = new QPushButton(HistoryTable);
        backTo->setObjectName(QStringLiteral("backTo"));
        backTo->setGeometry(QRect(470, 380, 121, 33));

        retranslateUi(HistoryTable);

        QMetaObject::connectSlotsByName(HistoryTable);
    } // setupUi

    void retranslateUi(QDialog *HistoryTable)
    {
        HistoryTable->setWindowTitle(QApplication::translate("HistoryTable", "\345\216\206\345\217\262\346\225\260\346\215\256", 0));
        label->setText(QApplication::translate("HistoryTable", "\345\205\211\344\274\217\347\224\265\347\253\231\345\267\245\344\275\234\345\217\202\346\225\260\346\225\260\346\215\256", 0));
        backTo->setText(QApplication::translate("HistoryTable", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class HistoryTable: public Ui_HistoryTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYTABLE_H
