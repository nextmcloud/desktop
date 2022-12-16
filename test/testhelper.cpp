#include "testhelper.h"

#include "gui/accountstate.h"

OCC::FolderDefinition folderDefinition(const QString &path)
{
    OCC::FolderDefinition d;
    d.localPath = path;
    d.targetPath = path;
    d.alias = path;
    return d;
}

class FakeAccountState : public OCC::AccountState
{
    Q_OBJECT

public:
    explicit FakeAccountState(OCC::AccountPtr account)
        : OCC::AccountState()
    {
        _account = account;
        _state = Connected;
    }

public slots:
    void checkConnectivity() override {};

private slots:
    void setState(OCC::AccountState::State state) override { Q_UNUSED(state) };
};
