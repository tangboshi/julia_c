/********************************************************************************
** Form generated from reading UI file 'fakeglass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAKEGLASS_H
#define UI_FAKEGLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fakeglass
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *fakeglass)
    {
        if (fakeglass->objectName().isEmpty())
            fakeglass->setObjectName(QStringLiteral("fakeglass"));
        fakeglass->resize(914, 530);
        gridLayout = new QGridLayout(fakeglass);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(fakeglass);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font-size:24px;\n"
"padding:10px;\n"
"color:#f00;\n"
"margin:0;\n"
"qproperty-alignment:AlignCenter;\n"
""));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(fakeglass);

        QMetaObject::connectSlotsByName(fakeglass);
    } // setupUi

    void retranslateUi(QWidget *fakeglass)
    {
        fakeglass->setWindowTitle(QApplication::translate("fakeglass", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("fakeglass", "Please select a rectangle-shaped area. ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class fakeglass: public Ui_fakeglass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAKEGLASS_H
