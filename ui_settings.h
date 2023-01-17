/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(543, 446);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);

        tabWidget = new QTabWidget(Dialog);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {border: none;}"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(2);
        gridLayout_2->setContentsMargins(-1, -1, 42, -1);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout_2->addWidget(comboBox, 0, 1, 1, 1);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        gridLayout_2->addWidget(comboBox_2, 0, 3, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(lineEdit, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);
        gridLayout_2->setColumnStretch(3, 1);

        horizontalLayout->addWidget(groupBox);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "\320\242\320\260\320\271\320\274-\320\260\321\203\321\202:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "COM1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "COM2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog", "COM3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Dialog", "COM4", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("Dialog", "COM5", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("Dialog", "9600", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Dialog", "14400", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Dialog", "19200", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Dialog", "28800", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Dialog", "38400", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("Dialog", "56000", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("Dialog", "57600", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("Dialog", "76800", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("Dialog", "111112", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("Dialog", "115200", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("Dialog", "128000", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("Dialog", "230400", nullptr));
        comboBox_2->setItemText(12, QCoreApplication::translate("Dialog", "250000", nullptr));
        comboBox_2->setItemText(13, QCoreApplication::translate("Dialog", "256000", nullptr));
        comboBox_2->setItemText(14, QCoreApplication::translate("Dialog", "460800", nullptr));
        comboBox_2->setItemText(15, QCoreApplication::translate("Dialog", "500000", nullptr));
        comboBox_2->setItemText(16, QCoreApplication::translate("Dialog", "921600", nullptr));
        comboBox_2->setItemText(17, QCoreApplication::translate("Dialog", "1000000", nullptr));
        comboBox_2->setItemText(18, QCoreApplication::translate("Dialog", "1500000", nullptr));

        label->setText(QCoreApplication::translate("Dialog", "\320\237\320\276\321\200\321\202:", nullptr));
        lineEdit->setText(QCoreApplication::translate("Dialog", "1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Dialog", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
    
} // namespace Ui


QT_END_NAMESPACE

#endif // UI_SETTINGS_H
