/***************************************************************************
 *   Copyright (C) 2006 by Andrey Afletdinov                               *
 *   afletdinov@mail.dc.baikal.ru                                          *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef H2SURFACE_H
#define H2SURFACE_H

#include "gamedefs.h"
#include "basesurface.h"

class Surface : public BaseSurface
{
public:
    Surface() : BaseSurface(){};
    Surface(u16 sw, u16 sh, bool alpha = false) : BaseSurface(sw, sh, alpha){};
    Surface(u16 sw, u16 sh, u8 depth, u32 fl) : BaseSurface(sw, sh, depth, fl){};
    Surface(const Surface & sf) : BaseSurface(sf){};

    ~Surface(){ FreeSurface(); };
};

#endif
