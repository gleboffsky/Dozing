/********************************************************************************
** Form generated from reading UI file 'savetemplate.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVETEMPLATE_H
#define UI_SAVETEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_SaveTemplate
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveTemplate)
    {
        if (SaveTemplate->objectName().isEmpty())
            SaveTemplate->setObjectName("SaveTemplate");
        SaveTemplate->resize(581, 300);
        label = new QLabel(SaveTemplate);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 30, 311, 22));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(SaveTemplate);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 150, 85, 20));
        QFont font1;
        font1.setPointSize(10);
        label_2->setFont(font1);
        lineEdit = new QLineEdit(SaveTemplate);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(120, 144, 411, 31));
        buttonBox = new QDialogButtonBox(SaveTemplate);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(370, 250, 193, 29));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SaveTemplate);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SaveTemplate, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SaveTemplate, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SaveTemplate);
    } // setupUi

    void retranslateUi(QDialog *SaveTemplate)
    {
        SaveTemplate->setWindowTitle(QCoreApplication::translate("SaveTemplate", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SaveTemplate", "\320\241\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\320\265 \321\210\320\260\320\261\320\273\320\276\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("SaveTemplate", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveTemplate: public Ui_SaveTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVETEMPLATE_H
