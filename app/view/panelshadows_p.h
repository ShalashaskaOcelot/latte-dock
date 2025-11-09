/*
    SPDX-FileCopyrightText: 2011 Aaron Seigo <aseigo@kde.org>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#pragma once

#include <QSet>

#include <Plasma5Support/FrameSvg>
#include <Plasma5Support/Svg>

class PanelShadows : public Plasma5Support::Svg
{
    Q_OBJECT

public:
    explicit PanelShadows(QObject *parent = nullptr, const QString &prefix = QStringLiteral("widgets/panel-background"));
    ~PanelShadows() override;

    static PanelShadows *self();

    void addWindow(QWindow *window, Plasma5Support::FrameSvg::EnabledBorders enabledBorders = Plasma5Support::FrameSvg::AllBorders);
    void removeWindow(QWindow *window);

    void setEnabledBorders(QWindow *window, Plasma5Support::FrameSvg::EnabledBorders enabledBorders = Plasma5Support::FrameSvg::AllBorders);

private:
    class Private;
    Private *const d;
};
