#ifndef NMCWEBFLOWCREDENTIALSDIALOG_H
#define NMCWEBFLOWCREDENTIALSDIALOG_H

#include "creds/WebFlowCredentialsDialog.h"

namespace OCC {

class NMCWebFlowCredentialsDialog : public WebFlowCredentialsDialog
{
    Q_OBJECT
public:
    NMCWebFlowCredentialsDialog(Account *account, bool useFlow2, QWidget *parent = nullptr);
    ~NMCWebFlowCredentialsDialog() = default;
};

} // namespace OCC

#endif // NMCWEBFLOWCREDENTIALSDIALOG_H
