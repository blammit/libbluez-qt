/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c ObexTransferInterface -p obextransfer.h:obextransfer.cpp transfer.xml
 *
 * qdbusxml2cpp is Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "obextransfer.h"

/*
 * Implementation of interface class ObexTransferInterface
 */

ObexTransferInterface::ObexTransferInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

ObexTransferInterface::~ObexTransferInterface()
{
}

