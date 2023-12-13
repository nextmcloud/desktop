#include "nmcgui/nmcwebflowcredentialsdialog.h"
#include "QtWidgets/qboxlayout.h"
#include "QtWidgets/qlabel.h"
#include "QtWidgets/qpushbutton.h"
#include "creds/webflowcredentialsdialog.h"
#include "wizard/flow2authwidget.h"

namespace OCC {

NMCWebFlowCredentialsDialog::NMCWebFlowCredentialsDialog(Account *account, bool useFlow2, QWidget *parent)
    :WebFlowCredentialsDialog(account, useFlow2, parent)
{

    if (_useFlow2) {
        //NMC Customization
        setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
        const QString styleSheet("QDialog{background-color: white;}");
        this->setStyleSheet(styleSheet);

        QPushButton *closeButton = new QPushButton(this);
        closeButton->setText("X");
        closeButton->setFocusPolicy(Qt::NoFocus);
        connect(closeButton, &QPushButton::clicked, this, [this](){
            this->close();
        });

        //Remove widget, or the order will be wrong, we will add them later
        if(_infoLabel && _flow2AuthWidget)
        {
            _containerLayout->removeWidget(_infoLabel);
            _containerLayout->removeWidget(_flow2AuthWidget);

            //Now lets add them in a right spot
            _containerLayout->addWidget(closeButton,0,Qt::AlignRight);
            QSpacerItem *vSpacer = new QSpacerItem(1, 10, QSizePolicy::Fixed, QSizePolicy::Fixed);
            _containerLayout->addSpacerItem(vSpacer);
            _containerLayout->addWidget(_infoLabel);
            _containerLayout->addWidget(_flow2AuthWidget);
        }
    }
}

} // namespace OCC
