// Copyright (C) 2008,2009,2010,2011,2012 GlavSoft LLC.
// All rights reserved.
//
//-------------------------------------------------------------------------
// This file is part of the CisteraVNC software.  Please visit our Web site:
//
//                       http://www.cistera.com/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//-------------------------------------------------------------------------
//

#ifndef __TEXTBOX_H_
#define __TEXTBOX_H_

#include "Control.h"
#include "Tooltip.h"

class TextBox : public Control
{
public:
  ~TextBox();
public:

  //
  // Text limit
  //

  size_t getTextLengthLimit();
  void setTextLengthLimit(size_t limit);

  //
  // Methods for multiline textboxes
  //

  int getCurrentLineIndex();
  int getLineCount();

  //
  // Get / set caret position
  //

  int getCaretPos();
  void setCaretPos(int h, int v);

  //
  // Text selection
  //

  void selectText(size_t startPos, size_t endPos);

  //
  // Tooltip methods
  //

  void showBalloonTip(Tooltip *tip);
};

#endif
