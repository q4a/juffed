/*
JuffEd - An advanced text editor
Copyright 2007-2010 Mikhail Murzin

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License 
version 2 as published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef __JUFF_FILE_TYPE_SETTINGS_H__
#define __JUFF_FILE_TYPE_SETTINGS_H__

#include "Settings.h"

class FileTypeSettings : public Settings {
public:
	static QStringList getTypeList();
	static QStringList getFileNamePatterns(const QString&);
	static QStringList getFirstLinePatterns(const QString&);

	static void setTypeList(const QStringList&);
	static void setFileNamePatterns(const QString&, const QStringList&);
	static void setFirstLinePatterns(const QString&, const QStringList&);
};

#endif // __JUFF_FILE_TYPE_SETTINGS_H__
