/*  =========================================================================
    fty_metric_tpower_classes - private header file

    Copyright (C) 2014 - 2018 Eaton

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef FTY_METRIC_TPOWER_CLASSES_H_INCLUDED
#define FTY_METRIC_TPOWER_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/fty_metric_tpower.h"

//  Extra headers

//  Opaque class structures to allow forward references
#ifndef METRICINFO_T_DEFINED
typedef struct _metricinfo_t metricinfo_t;
#define METRICINFO_T_DEFINED
#endif
#ifndef CALC_POWER_T_DEFINED
typedef struct _calc_power_t calc_power_t;
#define CALC_POWER_T_DEFINED
#endif
#ifndef TPOWERCONFIGURATION_T_DEFINED
typedef struct _tpowerconfiguration_t tpowerconfiguration_t;
#define TPOWERCONFIGURATION_T_DEFINED
#endif
#ifndef METRICLIST_T_DEFINED
typedef struct _metriclist_t metriclist_t;
#define METRICLIST_T_DEFINED
#endif
#ifndef TP_UNIT_T_DEFINED
typedef struct _tp_unit_t tp_unit_t;
#define TP_UNIT_T_DEFINED
#endif
#ifndef PROTO_METRIC_UNAVAILABLE_T_DEFINED
typedef struct _proto_metric_unavailable_t proto_metric_unavailable_t;
#define PROTO_METRIC_UNAVAILABLE_T_DEFINED
#endif

//  Internal API

#include "metricinfo.h"
#include "calc_power.h"
#include "tpowerconfiguration.h"
#include "metriclist.h"
#include "tp_unit.h"
#include "proto_metric_unavailable.h"

//  *** To avoid double-definitions, only define if building without draft ***
#ifndef FTY_METRIC_TPOWER_BUILD_DRAFT_API

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_TPOWER_PRIVATE void
    metricinfo_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_TPOWER_PRIVATE void
    calc_power_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_TPOWER_PRIVATE void
    tpowerconfiguration_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_TPOWER_PRIVATE void
    metriclist_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_TPOWER_PRIVATE void
    tp_unit_test (bool verbose);

//  *** Draft method, defined for internal use only ***
//  Self test of this class.
FTY_METRIC_TPOWER_PRIVATE void
    proto_metric_unavailable_test (bool verbose);

//  Self test for private classes
FTY_METRIC_TPOWER_PRIVATE void
    fty_metric_tpower_private_selftest (bool verbose, const char *subtest);

#endif // FTY_METRIC_TPOWER_BUILD_DRAFT_API

#endif
