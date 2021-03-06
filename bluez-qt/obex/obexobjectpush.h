/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c ObexObjectPushInterface -p obexobjectpush.h:obexobjectpush.cpp -i bluezobextypes.h objectpush.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OBEXOBJECTPUSH_H_1377146097
#define OBEXOBJECTPUSH_H_1377146097

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "bluezobextypes.h"

/*
 * Proxy class for interface org.bluez.obex.ObjectPush
 */
class ObexObjectPushInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.bluez.obex.ObjectPush"; }

public:
    ObexObjectPushInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ObexObjectPushInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QObexObjectData> ExchangeBusinessCards(const QString &in0, const QString &in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("ExchangeBusinessCards"), argumentList);
    }

    inline QDBusPendingReply<QObexObjectData> PullBusinessCard(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("PullBusinessCard"), argumentList);
    }

    inline QDBusPendingReply<QObexObjectData> SendFile(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("SendFile"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

namespace org {
  namespace bluez {
    namespace obex {
      typedef ::ObexObjectPushInterface ObjectPush;
    }
  }
}
#endif
