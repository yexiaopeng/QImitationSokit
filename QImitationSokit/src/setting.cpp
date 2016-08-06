#include "setting.h"
#include <qfileinfo.h>
#include <QDir>

setting::setting()
{

}

QString setting::get(const QString &section, const QString &key, const QString &def)
{
    return storage().value(section+key, def).toString();
}

QString setting::path()
{
    return QFileInfo(storage().fileName()).dir().absolutePath();
}

QSettings &setting::storage()
{
    static setting dummy; // to ensure call QSettings::setPath before create the g_settings
    static QSettings g_settings(QSettings::IniFormat, QSettings::UserScope, SET_APP_NAME);
    return g_settings;
}

