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

#ifndef __JUFFED_PLUGIN_MANAGER_H__
#define __JUFFED_PLUGIN_MANAGER_H__

class JuffAPI;
class JuffPlugin;
class SettingsDlg;

namespace Juff {
	class DocHandlerInt;
	class PluginNotifier;
};

#include "Enums.h"
#include "Types.h"

class PluginManager {
public:
	PluginManager(Juff::DocHandlerInt*, Juff::PluginNotifier*);
	virtual ~PluginManager();

	void loadPlugins(SettingsDlg*);

	Juff::MenuList menus() const;
	Juff::ActionList actions(Juff::MenuID) const;
	Juff::ToolBarList toolbars() const;
	QWidgetList docks(QList<Qt::DockWidgetArea>&, QList<bool>&) const;
	void applySettings();

private:
	void loadPlugin(const QString&, SettingsDlg*);

	QList<JuffPlugin*> plugins_;
	JuffAPI* api_;
};

#endif // __JUFFED_PLUGIN_MANAGER_H__
