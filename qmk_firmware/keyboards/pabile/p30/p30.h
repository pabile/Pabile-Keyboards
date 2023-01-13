/*
Copyright 2022 Pabile

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define LAYOUT( \
      k000, k001, k002, k003, k004, k005, k006, k400, k401, k402, \
      k100, k101, k102, k103, k104, k105, k106, k403, k404, k405, \
      k200, k201, k202, k203, k204, k205, k206, k406, k500, k501 \
) \
{ \
      {k000, k001, k002, k003, k004, k005, k006}, \
      {k100, k101, k102, k103, k104, k105, k106}, \
      {k200, k201, k202, k203, k204, k205, k206}, \
      {k400, k401, k402, k403, k404, k405, k406}, \
      {k500} \
}
