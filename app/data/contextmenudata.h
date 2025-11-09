/*
    SPDX-FileCopyrightText: 2021 Michail Vourlakos <mvourlakos@gmail.com>
    SPDX-License-Identifier: GPL-2.0-or-later
*/

#ifndef CONTEXTMENUDATA_H
#define CONTEXTMENUDATA_H

// Qt
#include <QStringList>

namespace Latte {
namespace Data {
namespace ContextMenu {

static const char ADDVIEWACTION[]= "_add_view";
static const char ADDWIDGETSACTION[] = "_add_latte_widgets";
static const char DUPLICATEVIEWACTION[] = "_duplicate_view"; /*used inside add view submenu*/
static const char EDITVIEWACTION[] = "_edit_view";
static const char EXPORTVIEWTEMPLATEACTION[] = "_export_view";
static const char LAYOUTSACTION[] = "_layouts";
static const char MOVEVIEWACTION[] = "_move_view";
static const char PRINTACTION[] = "_print";
static const char PREFERENCESACTION[] = "_preferences";
static const char REMOVEVIEWACTION[] = "_remove_view";
static const char QUITLATTEACTION[] = "_quit_latte";
static const char SECTIONACTION[]= "_latte_section";
static const char SEPARATOR1ACTION[] = "_separator1";

static QStringList ACTIONSEDITORDER = {QString::fromLatin1(LAYOUTSACTION),
                                       QString::fromLatin1(PREFERENCESACTION),
                                       QString::fromLatin1(QUITLATTEACTION),
                                       QString::fromLatin1(SEPARATOR1ACTION),
                                       QString::fromLatin1(ADDWIDGETSACTION),
                                       QString::fromLatin1(ADDVIEWACTION),
                                       QString::fromLatin1(MOVEVIEWACTION),
                                       QString::fromLatin1(EXPORTVIEWTEMPLATEACTION),
                                       QString::fromLatin1(REMOVEVIEWACTION)};

static QStringList ACTIONSALWAYSVISIBLE = {QString::fromLatin1(LAYOUTSACTION),
                                           QString::fromLatin1(PREFERENCESACTION),
                                           QString::fromLatin1(QUITLATTEACTION),
                                           QString::fromLatin1(SEPARATOR1ACTION),
                                           QString::fromLatin1(ADDWIDGETSACTION),
                                           QString::fromLatin1(ADDVIEWACTION)};

static QStringList ACTIONSALWAYSHIDDEN = {QString::fromLatin1(PRINTACTION)};

static QStringList ACTIONSVISIBLEONLYINEDIT = {QString::fromLatin1(MOVEVIEWACTION),
                                               QString::fromLatin1(EXPORTVIEWTEMPLATEACTION),
                                               QString::fromLatin1(REMOVEVIEWACTION)};

static QStringList ACTIONSSPECIAL = {QString::fromLatin1(SECTIONACTION),
                                     QString::fromLatin1(EDITVIEWACTION)};

}
}
}

#endif
