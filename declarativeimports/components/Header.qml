/*
    SPDX-FileCopyrightText: 2019 Michail Vourlakos <mvourlakos@gmail.com>
    SPDX-License-Identifier: GPL-2.0-or-later
*/

import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

import org.kde.plasma.plasmoid 2.0

Label {
    Layout.alignment: Qt.AlignLeft
    Layout.topMargin: units.smallSpacing
    Layout.bottomMargin: units.smallSpacing
    color: theme.textColor
    font.weight: Font.DemiBold
    font.letterSpacing: 1.05
    font.pixelSize: 1.2 * theme.mSize(theme.defaultFont).height
}
