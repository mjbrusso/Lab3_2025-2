/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *iconLabel;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(388, 286);
        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(160, 221, 201, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);
        iconLabel = new QLabel(AboutDialog);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));
        iconLabel->setGeometry(QRect(30, 30, 71, 100));
        iconLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/icone.png")));
        iconLabel->setScaledContents(true);
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 40, 251, 17));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 80, 241, 71));

        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AboutDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AboutDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "Sobre", nullptr));
        iconLabel->setText(QString());
        label->setText(QCoreApplication::translate("AboutDialog", "Calculadora de Juros Compostos", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>bla, bla, <span style=\" font-weight:600;\">bla</span>, bla</p><p>sasadasda   sdas</p><p><br/></p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
