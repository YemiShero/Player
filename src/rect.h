/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG Player.
// 
// EasyRPG Player is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// EasyRPG Player is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

#ifndef _RECT_H_
#define _RECT_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "SDL.h"

////////////////////////////////////////////////////////////
/// Rect class
////////////////////////////////////////////////////////////
class Rect {
public:
	Rect();
	Rect(int ix, int iy, int iwidth, int iheight);
	~Rect();
	
	bool operator!=(const Rect& other) const;

	void Set(int nx, int ny, int nwidth, int nheight);

	SDL_Rect Get() const;
	void Adjust(int awidth, int aheight);
	bool IsOutOfBounds(int awidth, int aheight) const;

	int x;
	int y;
	int width;
	int height;
};

#endif