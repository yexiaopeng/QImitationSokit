#ifndef SETTING_H
#define SETTING_H

#include <qstring.h>
#include <qsettings.h>

#define SET_APP_NAME   "sokit"

#define SET_SEC_CFG  "config"
#define SET_SEC_DIR  "dir"
#define SET_KEY_LOG  "/log"

#define SET_KEY_LANG "/lang"
#define SET_VAL_LANG "sokit"
#define SET_VAL_LANX ".lan"

class setting
{
public:
    setting();

    static QString get(const QString& section, const QString& key, const QString& def);
    static QString path();
private:
    static QSettings& storage();
};

#endif // SETTING_H
