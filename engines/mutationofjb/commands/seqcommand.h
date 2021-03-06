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

#ifndef MUTATIONOFJB_SEQCOMMAND_H
#define MUTATIONOFJB_SEQCOMMAND_H

#include "mutationofjb/commands/command.h"
#include "common/scummsys.h"

namespace MutationOfJB {

class SeqCommandParser : public CommandParser {
public:
	virtual void transition(ScriptParseContext &parseCtx, Command *oldCommand, Command *newCommand, CommandParser *newCommandParser) override;
};

/**
 * Base class for sequential commands.
 */
class SeqCommand : public Command {
public:
	SeqCommand() : _nextCommand(nullptr) {}
	void setNextCommand(Command *nextCommand);
	virtual Command *next() const override;

private:
	Command *_nextCommand;
};

}

#endif
