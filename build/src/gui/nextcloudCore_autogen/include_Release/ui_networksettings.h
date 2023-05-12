/********************************************************************************
** Form generated from reading UI file 'networksettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKSETTINGS_H
#define UI_NETWORKSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace OCC {

class Ui_NetworkSettings
{
public:
    QGridLayout *gridLayout_3;
    QGroupBox *proxyGroupBox;
    QGridLayout *gridLayout;
    QComboBox *typeComboBox;
    QRadioButton *noProxyRadioButton;
    QRadioButton *systemProxyRadioButton;
    QRadioButton *manualProxyRadioButton;
    QWidget *manualSettings;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *hostLabel;
    QLineEdit *hostLineEdit;
    QLabel *label;
    QSpinBox *portSpinBox;
    QCheckBox *authRequiredcheckBox;
    QWidget *authWidgets;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *userLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *labelLocalhost;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *downloadBox;
    QGridLayout *gridLayout_2;
    QRadioButton *downloadLimitRadioButton;
    QRadioButton *noDownloadLimitRadioButton;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *downloadSpinBox;
    QLabel *label_3;
    QRadioButton *autoDownloadLimitRadioButton;
    QGroupBox *uploadBox;
    QGridLayout *gridLayout_4;
    QRadioButton *uploadLimitRadioButton;
    QRadioButton *autoUploadLimitRadioButton;
    QRadioButton *noUploadLimitRadioButton;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *uploadSpinBox;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QButtonGroup *proxyButtonGroup;

    void setupUi(QWidget *OCC__NetworkSettings)
    {
        if (OCC__NetworkSettings->objectName().isEmpty())
            OCC__NetworkSettings->setObjectName(QString::fromUtf8("OCC__NetworkSettings"));
        OCC__NetworkSettings->resize(623, 581);
        OCC__NetworkSettings->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout_3 = new QGridLayout(OCC__NetworkSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        proxyGroupBox = new QGroupBox(OCC__NetworkSettings);
        proxyGroupBox->setObjectName(QString::fromUtf8("proxyGroupBox"));
        proxyGroupBox->setEnabled(true);
        gridLayout = new QGridLayout(proxyGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        typeComboBox = new QComboBox(proxyGroupBox);
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));
        typeComboBox->setEnabled(false);

        gridLayout->addWidget(typeComboBox, 2, 1, 1, 1);

        noProxyRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup = new QButtonGroup(OCC__NetworkSettings);
        proxyButtonGroup->setObjectName(QString::fromUtf8("proxyButtonGroup"));
        proxyButtonGroup->addButton(noProxyRadioButton);
        noProxyRadioButton->setObjectName(QString::fromUtf8("noProxyRadioButton"));
        noProxyRadioButton->setChecked(true);

        gridLayout->addWidget(noProxyRadioButton, 0, 0, 1, 1);

        systemProxyRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup->addButton(systemProxyRadioButton);
        systemProxyRadioButton->setObjectName(QString::fromUtf8("systemProxyRadioButton"));

        gridLayout->addWidget(systemProxyRadioButton, 1, 0, 1, 1);

        manualProxyRadioButton = new QRadioButton(proxyGroupBox);
        proxyButtonGroup->addButton(manualProxyRadioButton);
        manualProxyRadioButton->setObjectName(QString::fromUtf8("manualProxyRadioButton"));

        gridLayout->addWidget(manualProxyRadioButton, 2, 0, 1, 1);

        manualSettings = new QWidget(proxyGroupBox);
        manualSettings->setObjectName(QString::fromUtf8("manualSettings"));
        manualSettings->setEnabled(false);
        verticalLayout = new QVBoxLayout(manualSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        hostLabel = new QLabel(manualSettings);
        hostLabel->setObjectName(QString::fromUtf8("hostLabel"));

        horizontalLayout->addWidget(hostLabel);

        hostLineEdit = new QLineEdit(manualSettings);
        hostLineEdit->setObjectName(QString::fromUtf8("hostLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hostLineEdit->sizePolicy().hasHeightForWidth());
        hostLineEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(hostLineEdit);

        label = new QLabel(manualSettings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8(":"));

        horizontalLayout->addWidget(label);

        portSpinBox = new QSpinBox(manualSettings);
        portSpinBox->setObjectName(QString::fromUtf8("portSpinBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(portSpinBox->sizePolicy().hasHeightForWidth());
        portSpinBox->setSizePolicy(sizePolicy1);
        portSpinBox->setMinimum(1);
        portSpinBox->setMaximum(65535);
        portSpinBox->setValue(8080);

        horizontalLayout->addWidget(portSpinBox);


        verticalLayout->addLayout(horizontalLayout);

        authRequiredcheckBox = new QCheckBox(manualSettings);
        authRequiredcheckBox->setObjectName(QString::fromUtf8("authRequiredcheckBox"));
        authRequiredcheckBox->setEnabled(false);

        verticalLayout->addWidget(authRequiredcheckBox);

        authWidgets = new QWidget(manualSettings);
        authWidgets->setObjectName(QString::fromUtf8("authWidgets"));
        authWidgets->setEnabled(false);
        horizontalLayout_2 = new QHBoxLayout(authWidgets);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        userLineEdit = new QLineEdit(authWidgets);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));

        horizontalLayout_2->addWidget(userLineEdit);

        passwordLineEdit = new QLineEdit(authWidgets);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addWidget(authWidgets);

        labelLocalhost = new QLabel(manualSettings);
        labelLocalhost->setObjectName(QString::fromUtf8("labelLocalhost"));

        verticalLayout->addWidget(labelLocalhost);


        gridLayout->addWidget(manualSettings, 3, 0, 1, 2);


        gridLayout_3->addWidget(proxyGroupBox, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        downloadBox = new QGroupBox(OCC__NetworkSettings);
        downloadBox->setObjectName(QString::fromUtf8("downloadBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(downloadBox->sizePolicy().hasHeightForWidth());
        downloadBox->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(downloadBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        downloadLimitRadioButton = new QRadioButton(downloadBox);
        downloadLimitRadioButton->setObjectName(QString::fromUtf8("downloadLimitRadioButton"));

        gridLayout_2->addWidget(downloadLimitRadioButton, 3, 0, 1, 1);

        noDownloadLimitRadioButton = new QRadioButton(downloadBox);
        noDownloadLimitRadioButton->setObjectName(QString::fromUtf8("noDownloadLimitRadioButton"));
        noDownloadLimitRadioButton->setChecked(true);

        gridLayout_2->addWidget(noDownloadLimitRadioButton, 0, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(147, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 4, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        downloadSpinBox = new QSpinBox(downloadBox);
        downloadSpinBox->setObjectName(QString::fromUtf8("downloadSpinBox"));
        downloadSpinBox->setEnabled(false);
        downloadSpinBox->setMaximum(999999);
        downloadSpinBox->setValue(80);

        horizontalLayout_3->addWidget(downloadSpinBox);

        label_3 = new QLabel(downloadBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);


        gridLayout_2->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        autoDownloadLimitRadioButton = new QRadioButton(downloadBox);
        autoDownloadLimitRadioButton->setObjectName(QString::fromUtf8("autoDownloadLimitRadioButton"));

        gridLayout_2->addWidget(autoDownloadLimitRadioButton, 1, 0, 1, 2);


        horizontalLayout_5->addWidget(downloadBox);

        uploadBox = new QGroupBox(OCC__NetworkSettings);
        uploadBox->setObjectName(QString::fromUtf8("uploadBox"));
        sizePolicy2.setHeightForWidth(uploadBox->sizePolicy().hasHeightForWidth());
        uploadBox->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(uploadBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        uploadLimitRadioButton = new QRadioButton(uploadBox);
        uploadLimitRadioButton->setObjectName(QString::fromUtf8("uploadLimitRadioButton"));

        gridLayout_4->addWidget(uploadLimitRadioButton, 2, 0, 1, 1);

        autoUploadLimitRadioButton = new QRadioButton(uploadBox);
        autoUploadLimitRadioButton->setObjectName(QString::fromUtf8("autoUploadLimitRadioButton"));

        gridLayout_4->addWidget(autoUploadLimitRadioButton, 1, 0, 1, 2);

        noUploadLimitRadioButton = new QRadioButton(uploadBox);
        noUploadLimitRadioButton->setObjectName(QString::fromUtf8("noUploadLimitRadioButton"));
        noUploadLimitRadioButton->setChecked(true);

        gridLayout_4->addWidget(noUploadLimitRadioButton, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        uploadSpinBox = new QSpinBox(uploadBox);
        uploadSpinBox->setObjectName(QString::fromUtf8("uploadSpinBox"));
        uploadSpinBox->setEnabled(false);
        uploadSpinBox->setMinimum(1);
        uploadSpinBox->setMaximum(999999);
        uploadSpinBox->setValue(10);

        horizontalLayout_4->addWidget(uploadSpinBox);

        label_4 = new QLabel(uploadBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);


        gridLayout_4->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        autoUploadLimitRadioButton->raise();
        uploadLimitRadioButton->raise();
        noUploadLimitRadioButton->raise();

        horizontalLayout_5->addWidget(uploadBox);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(OCC__NetworkSettings);
        QObject::connect(downloadLimitRadioButton, SIGNAL(toggled(bool)), downloadSpinBox, SLOT(setEnabled(bool)));
        QObject::connect(uploadLimitRadioButton, SIGNAL(toggled(bool)), uploadSpinBox, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OCC__NetworkSettings);
    } // setupUi

    void retranslateUi(QWidget *OCC__NetworkSettings)
    {
        proxyGroupBox->setTitle(QCoreApplication::translate("OCC::NetworkSettings", "Proxy Settings", nullptr));
        noProxyRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "No Proxy", nullptr));
        systemProxyRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Use system proxy", nullptr));
        manualProxyRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Specify proxy manually as", nullptr));
        hostLabel->setText(QCoreApplication::translate("OCC::NetworkSettings", "Host", nullptr));
        hostLineEdit->setText(QString());
        authRequiredcheckBox->setText(QCoreApplication::translate("OCC::NetworkSettings", "Proxy server requires authentication", nullptr));
        userLineEdit->setText(QString());
        passwordLineEdit->setText(QString());
        labelLocalhost->setText(QCoreApplication::translate("OCC::NetworkSettings", "Note: proxy settings have no effects for accounts on localhost", nullptr));
        downloadBox->setTitle(QCoreApplication::translate("OCC::NetworkSettings", "Download Bandwidth", nullptr));
        downloadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Limit to", nullptr));
        noDownloadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "No limit", nullptr));
        label_3->setText(QCoreApplication::translate("OCC::NetworkSettings", "KBytes/s", nullptr));
#if QT_CONFIG(tooltip)
        autoDownloadLimitRadioButton->setToolTip(QCoreApplication::translate("OCC::NetworkSettings", "Limit to 3/4 of estimated bandwidth", nullptr));
#endif // QT_CONFIG(tooltip)
        autoDownloadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Limit automatically", nullptr));
        uploadBox->setTitle(QCoreApplication::translate("OCC::NetworkSettings", "Upload Bandwidth", nullptr));
        uploadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Limit to", nullptr));
#if QT_CONFIG(tooltip)
        autoUploadLimitRadioButton->setToolTip(QCoreApplication::translate("OCC::NetworkSettings", "Limit to 3/4 of estimated bandwidth", nullptr));
#endif // QT_CONFIG(tooltip)
        autoUploadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "Limit automatically", nullptr));
        noUploadLimitRadioButton->setText(QCoreApplication::translate("OCC::NetworkSettings", "No limit", nullptr));
        label_4->setText(QCoreApplication::translate("OCC::NetworkSettings", "KBytes/s", nullptr));
        (void)OCC__NetworkSettings;
    } // retranslateUi

};

} // namespace OCC

namespace OCC {
namespace Ui {
    class NetworkSettings: public Ui_NetworkSettings {};
} // namespace Ui
} // namespace OCC

#endif // UI_NETWORKSETTINGS_H
