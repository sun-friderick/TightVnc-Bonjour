// Copyright (C) 2012 GlavSoft LLC.
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

#ifndef __WINDXCRITICALEXCEPTION_H__
#define __WINDXCRITICALEXCEPTION_H__

#include "WinDxException.h"

class WinDxCriticalException : public WinDxException
{
public:
  WinDxCriticalException(const TCHAR *message, HRESULT errCode);
  virtual ~WinDxCriticalException();
};

#endif // __WINDXCRITICALEXCEPTION_H__
