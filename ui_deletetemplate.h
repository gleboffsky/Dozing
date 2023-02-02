/********************************************************************************
** Form generated from reading UI file 'deletetemplate.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETEMPLATE_H
#define UI_DELETETEMPLATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DeleteTemplate
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeleteTemplate)
    {
        if (DeleteTemplate->objectName().isEmpty())
            DeleteTemplate->setObjectName("DeleteTemplate");
        DeleteTemplate->resize(581, 250);
        gridLayout = new QGridLayout(DeleteTemplate);
        gridLayout->setObjectName("gridLayout");
        groupBox = new QGroupBox(DeleteTemplate);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("Border:none"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DeleteTemplate);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(DeleteTemplate);

        QMetaObject::connectSlotsByName(DeleteTemplate);
    } // setupUi

    void retranslateUi(QDialog *DeleteTemplate)
    {
        DeleteTemplate->setWindowTitle(QCoreApplication::translate("DeleteTemplate", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("DeleteTemplate", "\320\222\321\213 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\264\320\260\320\273\320\270\321\202\321\214?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteTemplate: public Ui_DeleteTemplate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETEMPLATE_H
