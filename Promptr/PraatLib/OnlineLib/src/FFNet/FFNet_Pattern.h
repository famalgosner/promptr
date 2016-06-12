#ifndef _FFNet_Pattern_h_
#define _FFNet_Pattern_h_
/* FFNet_Pattern.h
 *
 * Copyright (C) 1997-2002 David Weenink
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/*
 djmw 19950113
 djmw 20020712 GPL header
*/

#include "Pattern.h"
#include "FFNet.h"

void FFNet_Pattern_drawActivation( FFNet me, Pattern pattern, Graphics g, long ipattern );

#endif /* _FFNet_Pattern_h_ */
