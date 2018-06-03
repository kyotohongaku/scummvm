/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef PINK_DETECTION_TABLES_H
#define PINK_DETECTION_TABLES_H

#include "gui/EventRecorder.h"

namespace Pink {

static const ADGameDescription gameDescriptions[] = {
		{
			"peril",
			0,
			{
				{"PPTP.ORB", NULL, NULL, -1},
				{"PPTP.BRO", NULL, NULL, -1},
				{"PPTP.EXE", NULL, NULL, -1},
				AD_LISTEND
			},
			Common::EN_ANY,
			Common::kPlatformWindows,
			ADGF_UNSTABLE | ADGF_DROPPLATFORM,
			GUIO1(GUIO_NONE)
		},
		{
			"pokus",
			0,
			{
				{"HPP.orb", NULL, NULL, -1},
				{"hpp.exe", NULL, NULL, -1},
				AD_LISTEND
			},
			Common::EN_ANY,
			Common::kPlatformWindows,
			ADGF_UNSTABLE | ADGF_DROPPLATFORM,
			GUIO1(GUIO_NONE)
		},
		AD_TABLE_END_MARKER
};

} // End of namespace Pink

#endif