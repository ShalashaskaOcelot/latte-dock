/*
    SPDX-FileCopyrightText: 2020 Michail Vourlakos <mvourlakos@gmail.com>
    SPDX-License-Identifier: GPL-2.0-or-later

*/

#ifndef ACTIVITYDATA_H
#define ACTIVITYDATA_H

//! local
#include "genericdata.h"
#include "generictable.h"

//! Qt
#include <QMetaType>
#include <QIcon>
#include <QString>

//! KActivities
#include <PlasmaActivities/Info>

namespace Latte {
namespace Data {

// Activity states - KActivities::Info::State was removed in Plasma 6
enum class ActivityState {
    Invalid = 0,
    Running = 2,
    Starting = 3,
    Stopped = 4,
    Stopping = 5
};

class Activity : public Generic
{
public:
    Activity();
    Activity(Activity &&o);
    Activity(const Activity &o);

    //! Layout data
    bool isCurrent{false};
    QString icon;
    ActivityState state{ActivityState::Invalid};

    bool isValid() const;
    bool isRunning() const;

    //! Operators
    Activity &operator=(const Activity &rhs);
    Activity &operator=(Activity &&rhs);
};

//! This is an Activities map in the following structure:
//! #activityId -> activite_information
typedef GenericTable<Data::Activity> ActivitiesTable;

}
}

Q_DECLARE_METATYPE(Latte::Data::Activity)
Q_DECLARE_METATYPE(Latte::Data::ActivitiesTable)

#endif
