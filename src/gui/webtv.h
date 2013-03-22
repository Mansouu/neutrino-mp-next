/*
	WebTV menue

	Copyright (C) 2012 martii

	License: GPL

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef __webtv_setup_h__
#define __webtv_setup_h__

#include <sys/types.h>
#include <string.h>
#include <vector>
#include <xmltree/xmlinterface.h>

class CWebTV : public CMenuTarget
{
	private:
		int width;
		int selected;
		xmlDocPtr parser;
		bool readXml();
		std::vector<std::pair<std::string, char*> > channels;
	public:
		CWebTV();
		~CWebTV();
		int exec(CMenuTarget* parent, const std::string & actionKey);
		void Show();
};
#endif
