/*
    SPDX-FileCopyrightText: 2019 Michail Vourlakos <mvourlakos@gmail.com>
    SPDX-License-Identifier: GPL-2.0-or-later
*/

#include "indicatorpackage.h"

// Qt
#include <QDebug>

// KDE
#include <KPackage/PackageLoader>
#include <KLocalizedString>

namespace Latte {

IndicatorPackage::IndicatorPackage(QObject *parent, const QVariantList &args)
    : KPackage::PackageStructure(parent, args)
{
}

void IndicatorPackage::initPackage(KPackage::Package *package)
{
    package->setDefaultPackageRoot(QStringLiteral("latte/indicators"));

    package->addDirectoryDefinition(QByteArrayLiteral("config"), QStringLiteral("config"));
    package->addDirectoryDefinition(QByteArrayLiteral("ui"), QStringLiteral("ui"));
    package->addDirectoryDefinition(QByteArrayLiteral("data"), QStringLiteral("data"));
    package->addDirectoryDefinition(QByteArrayLiteral("scripts"), QStringLiteral("code"));
    package->addDirectoryDefinition(QByteArrayLiteral("translations"), QStringLiteral("locale"));
}

}

K_PLUGIN_CLASS(Latte::IndicatorPackage)

#include "indicatorpackage.moc"
