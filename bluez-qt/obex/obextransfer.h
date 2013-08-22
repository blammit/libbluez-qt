/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c ObexTransferInterface -p obextransfer.h:obextransfer.cpp transfer.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OBEXTRANSFER_H_1377130636
#define OBEXTRANSFER_H_1377130636

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.bluez.obex.Transfer
 */
class ObexTransferInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.bluez.obex.Transfer"; }

public:
    ObexTransferInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~ObexTransferInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Cancel()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Cancel"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetProperties"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Complete();
    void Error(const QString &in0, const QString &in1);
    void PropertyChanged(const QString &in0, const QDBusVariant &in1);
};

namespace org {
  namespace bluez {
    namespace obex {
      typedef ::ObexTransferInterface Transfer;
    }
  }
}
#endif
