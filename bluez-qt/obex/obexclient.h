/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c ObexClientInterface -p obexclient.h:obexclient.cpp client.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OBEXCLIENT_H_1377072588
#define OBEXCLIENT_H_1377072588

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.bluez.obex.Client
 */
class ObexClientInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.bluez.obex.Client"; }

public:
    ObexClientInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ObexClientInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QDBusObjectPath> CreateSession(const QString &in0, const QVariantMap &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("CreateSession"), argumentList);
    }

    inline QDBusPendingReply<> RemoveSession(const QDBusObjectPath &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("RemoveSession"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace bluez {
    namespace obex {
      typedef ::ObexClientInterface Client;
    }
  }
}
#endif
