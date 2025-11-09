/*
    SPDX-FileCopyrightText: 2021 Michail Vourlakos <mvourlakos@gmail.com>
    SPDX-License-Identifier: GPL-2.0-or-later
*/

#ifndef CONTEXTMENUDATA_H
#define CONTEXTMENUDATA_H

// Qt
#include <QStringList>
#include <QLatin1String>

namespace Latte {
namespace Data {
namespace ContextMenu {

static const QLatin1String ADDVIEWACTION("_add_view");
static const QLatin1String ADDWIDGETSACTION("_add_latte_widgets");
static const QLatin1String DUPLICATEVIEWACTION("_duplicate_view"); /*used inside add view submenu*/
static const QLatin1String EDITVIEWACTION("_edit_view");
static const QLatin1String EXPORTVIEWTEMPLATEACTION("_export_view");
static const QLatin1String LAYOUTSACTION("_layouts");
static const QLatin1String MOVEVIEWACTION("_move_view");
static const QLatin1String PRINTACTION("_print");
static const QLatin1String PREFERENCESACTION("_preferences");
static const QLatin1String REMOVEVIEWACTION("_remove_view");
static const QLatin1String QUITLATTEACTION("_quit_latte");
static const QLatin1String SECTIONACTION("_latte_section");
static const QLatin1String SEPARATOR1ACTION("_separator1");

static QStringList ACTIONSEDITORDER = {LAYOUTSACTION,
                                       PREFERENCESACTION,
                                       QUITLATTEACTION,
                                       SEPARATOR1ACTION,
                                       ADDWIDGETSACTION,
                                       ADDVIEWACTION,
                                       MOVEVIEWACTION,
                                       EXPORTVIEWTEMPLATEACTION,
                                       REMOVEVIEWACTION};

static QStringList ACTIONSALWAYSVISIBLE = {LAYOUTSACTION,
                                           PREFERENCESACTION,
                                           QUITLATTEACTION,
                                           SEPARATOR1ACTION,
                                           ADDWIDGETSACTION,
                                           ADDVIEWACTION};

static QStringList ACTIONSALWAYSHIDDEN = {PRINTACTION};

static QStringList ACTIONSVISIBLEONLYINEDIT = {MOVEVIEWACTION,
                                               EXPORTVIEWTEMPLATEACTION,
                                               REMOVEVIEWACTION};

static QStringList ACTIONSSPECIAL = {SECTIONACTION,
                                     EDITVIEWACTION};

}
}
}

#endif
