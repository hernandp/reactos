/*
 * Fast486 386/486 CPU Emulation Library
 * extraops.h
 *
 * Copyright (C) 2013 Aleksandar Andrejevic <theflash AT sdf DOT lonestar DOT org>
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
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _EXTRAOPS_H_
#define _EXTRAOPS_H_

/* DEFINES ********************************************************************/
FAST486_OPCODE_HANDLER(Fast486ExtOpcodeConditionalJmp);
FAST486_OPCODE_HANDLER(Fast486ExtOpcodeConditionalSet);
FAST486_OPCODE_HANDLER(Fast486OpcodeExtended);

#endif // _EXTRAOPS_H_

/* EOF */

