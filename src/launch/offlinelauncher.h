//
// Created by nils on 11/4/21.
//

#ifndef LUNAR_CLIENT_QT_OFFLINELAUNCHER_H
#define LUNAR_CLIENT_QT_OFFLINELAUNCHER_H

#include <QObject>

#include "launcher.h"


class OfflineLauncher : public Launcher{
Q_OBJECT
public:
    explicit OfflineLauncher(const Config& config, QObject* parent = nullptr);

    bool launch();
signals:
    void error(const QString& message);
private:
    static QString findJavaExecutable();
    static void HelperLaunch(const QString& helper);
};


#endif //LUNAR_CLIENT_QT_OFFLINELAUNCHER_H
