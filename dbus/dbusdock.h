/*
 * This file was generated by qdbusxml2cpp-fix version 0.8
 * Command line was: qdbusxml2cpp-fix -c DBusDock -p dbusdock com.deepin.dde.daemon.Dock.xml
 *
 * qdbusxml2cpp-fix is Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSDOCK_H
#define DBUSDOCK_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

typedef QRect Rect;

/*
 * Proxy class for interface com.deepin.dde.daemon.Dock
 */
class DBusDock: public QDBusAbstractInterface
{
    Q_OBJECT

    Q_SLOT void __propertyChanged__(const QDBusMessage& msg)
    {
        QList<QVariant> arguments = msg.arguments();
        if (3 != arguments.count())
            return;
        QString interfaceName = msg.arguments().at(0).toString();
        if (interfaceName != "com.deepin.dde.daemon.Dock")
            return;
        QVariantMap changedProps = qdbus_cast<QVariantMap>(arguments.at(1).value<QDBusArgument>());
        foreach(const QString &prop, changedProps.keys()) {
        const QMetaObject* self = metaObject();
            for (int i=self->propertyOffset(); i < self->propertyCount(); ++i) {
                QMetaProperty p = self->property(i);
                if (p.name() == prop) {
                    emit p.notifySignal().invoke(this);
                }
            }
        }
   }
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.dde.daemon.Dock"; }

public:
    DBusDock(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~DBusDock();

    Q_PROPERTY(int DisplayMode READ displayMode WRITE setDisplayMode NOTIFY DisplayModeChanged)
    inline int displayMode() const
    { return qvariant_cast< int >(property("DisplayMode")); }
    inline void setDisplayMode(int value)
    { setProperty("DisplayMode", QVariant::fromValue(value)); }

    Q_PROPERTY(QStringList DockedApps READ dockedApps NOTIFY DockedAppsChanged)
    inline QStringList dockedApps() const
    { return qvariant_cast< QStringList >(property("DockedApps")); }

    Q_PROPERTY(QList<QDBusObjectPath> Entries READ entries NOTIFY EntriesChanged)
    inline QList<QDBusObjectPath> entries() const
    { return qvariant_cast< QList<QDBusObjectPath> >(property("Entries")); }

    Q_PROPERTY(Rect FrontendWindowRect READ frontendWindowRect NOTIFY FrontendWindowRectChanged)
    inline Rect frontendWindowRect() const
    { return qvariant_cast< Rect >(property("FrontendWindowRect")); }

    Q_PROPERTY(int HideMode READ hideMode WRITE setHideMode NOTIFY HideModeChanged)
    inline int hideMode() const
    { return qvariant_cast< int >(property("HideMode")); }
    inline void setHideMode(int value)
    { setProperty("HideMode", QVariant::fromValue(value)); }

    Q_PROPERTY(int HideState READ hideState NOTIFY HideStateChanged)
    inline int hideState() const
    { return qvariant_cast< int >(property("HideState")); }

    Q_PROPERTY(uint HideTimeout READ hideTimeout WRITE setHideTimeout NOTIFY HideTimeoutChanged)
    inline uint hideTimeout() const
    { return qvariant_cast< uint >(property("HideTimeout")); }
    inline void setHideTimeout(uint value)
    { setProperty("HideTimeout", QVariant::fromValue(value)); }

    Q_PROPERTY(uint IconSize READ iconSize WRITE setIconSize NOTIFY IconSizeChanged)
    inline uint iconSize() const
    { return qvariant_cast< uint >(property("IconSize")); }
    inline void setIconSize(uint value)
    { setProperty("IconSize", QVariant::fromValue(value)); }

    Q_PROPERTY(int Position READ position WRITE setPosition NOTIFY PositionChanged)
    inline int position() const
    { return qvariant_cast< int >(property("Position")); }
    inline void setPosition(int value)
    { setProperty("Position", QVariant::fromValue(value)); }

    Q_PROPERTY(uint ShowTimeout READ showTimeout WRITE setShowTimeout NOTIFY ShowTimeoutChanged)
    inline uint showTimeout() const
    { return qvariant_cast< uint >(property("ShowTimeout")); }
    inline void setShowTimeout(uint value)
    { setProperty("ShowTimeout", QVariant::fromValue(value)); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> ActivateWindow(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("ActivateWindow"), argumentList);
    }

    inline QDBusPendingReply<> CancelPreviewWindow()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("CancelPreviewWindow"), argumentList);
    }

    inline QDBusPendingReply<> CloseWindow(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("CloseWindow"), argumentList);
    }

    inline QDBusPendingReply<QStringList> GetEntryIDs()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("GetEntryIDs"), argumentList);
    }

    inline QDBusPendingReply<bool> IsDocked(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("IsDocked"), argumentList);
    }

    inline QDBusPendingReply<bool> IsOnDock(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("IsOnDock"), argumentList);
    }

    inline QDBusPendingReply<> MakeWindowAbove(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("MakeWindowAbove"), argumentList);
    }

    inline QDBusPendingReply<> MaximizeWindow(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("MaximizeWindow"), argumentList);
    }

    inline QDBusPendingReply<> MinimizeWindow(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("MinimizeWindow"), argumentList);
    }

    inline QDBusPendingReply<> MoveEntry(int in0, int in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("MoveEntry"), argumentList);
    }

    inline QDBusPendingReply<> MoveWindow(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("MoveWindow"), argumentList);
    }

    inline QDBusPendingReply<> PreviewWindow(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("PreviewWindow"), argumentList);
    }

    inline QDBusPendingReply<QString> QueryWindowIdentifyMethod(uint in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("QueryWindowIdentifyMethod"), argumentList);
    }

    inline QDBusPendingReply<bool> RequestDock(const QString &in0, int in1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1);
        return asyncCallWithArgumentList(QStringLiteral("RequestDock"), argumentList);
    }

    inline QDBusPendingReply<bool> RequestUndock(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("RequestUndock"), argumentList);
    }

    inline QDBusPendingReply<> SetFrontendWindowRect(int in0, int in1, uint in2, uint in3)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0) << QVariant::fromValue(in1) << QVariant::fromValue(in2) << QVariant::fromValue(in3);
        return asyncCallWithArgumentList(QStringLiteral("SetFrontendWindowRect"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void EntryAdded(const QDBusObjectPath &in0, int in1);
    void EntryRemoved(const QString &in0);
    void ServiceRestarted();
// begin property changed signals
void DisplayModeChanged();
void DockedAppsChanged();
void EntriesChanged();
void FrontendWindowRectChanged();
void HideModeChanged();
void HideStateChanged();
void HideTimeoutChanged();
void IconSizeChanged();
void PositionChanged();
void ShowTimeoutChanged();
};

namespace com {
  namespace deepin {
    namespace dde {
      namespace daemon {
        typedef ::DBusDock Dock;
      }
    }
  }
}
#endif