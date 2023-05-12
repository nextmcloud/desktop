/********************************************************************************
** Form generated from reading UI file 'webview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEBVIEW_H
#define UI_WEBVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WebView
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar;
    QHBoxLayout *resultLayout;

    void setupUi(QWidget *WebView)
    {
        if (WebView->objectName().isEmpty())
            WebView->setObjectName(QString::fromUtf8("WebView"));
        WebView->resize(800, 700);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WebView->sizePolicy().hasHeightForWidth());
        WebView->setSizePolicy(sizePolicy);
        WebView->setMinimumSize(QSize(0, 0));
        WebView->setWindowTitle(QString::fromUtf8("Form"));
        gridLayout = new QGridLayout(WebView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        progressBar = new QProgressBar(WebView);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 5));
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar::chunk {\n"
"    background-color: rgba(0, 130, 201, 255);\n"
"}"));
        progressBar->setValue(0);
        progressBar->setTextVisible(false);

        verticalLayout->addWidget(progressBar);

        resultLayout = new QHBoxLayout();
        resultLayout->setSpacing(0);
        resultLayout->setObjectName(QString::fromUtf8("resultLayout"));

        verticalLayout->addLayout(resultLayout);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(WebView);

        QMetaObject::connectSlotsByName(WebView);
    } // setupUi

    void retranslateUi(QWidget *WebView)
    {
        (void)WebView;
    } // retranslateUi

};

namespace Ui {
    class WebView: public Ui_WebView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEBVIEW_H
