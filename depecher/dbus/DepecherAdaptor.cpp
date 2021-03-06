/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp Projects\SailfishOS\depecher\depecher\dbus\harbour-depecher.xml -a DepecherAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "DepecherAdaptor.hpp"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DepecherAdaptor
 */

DepecherAdaptor::DepecherAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DepecherAdaptor::~DepecherAdaptor()
{
    // destructor
}

void DepecherAdaptor::showApp(const QStringList &item)
{
    // handle method call org.blacksailer.depecher.showApp
    QMetaObject::invokeMethod(parent(), "showApp", Q_ARG(QStringList, item));
}

void DepecherAdaptor::openConversation(qlonglong chatId)
{
    // handle method call org.blacksailer.depecher.openConversation
    QMetaObject::invokeMethod(parent(), "openConversation", Q_ARG(qlonglong, chatId));
}


