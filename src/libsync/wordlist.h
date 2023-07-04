#ifndef WORDLIST_H
#define WORDLIST_H

#include <QString>
#include <QList>

#include "owncloudlib.h"

namespace OCC {
    namespace WordList {
        OWNCLOUDSYNC_EXPORT QStringList getRandomWords(int nr);
        OWNCLOUDSYNC_EXPORT QString getUnifiedString(const QStringList& l);
    }
}

#endif
