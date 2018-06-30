/**
 * @file
 * Handling of personal config ('my' variables)
 *
 * @authors
 * @copyright
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 2 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MUTT_MYVAR_H
#define _MUTT_MYVAR_H

#include <stddef.h>

const char *myvar_get(const char *var);
int var_to_string2(const char *name, bool quote, struct Buffer *result, struct Buffer *err);
int mutt_option_index(const char *s);

#endif /* _MUTT_MYVAR_H */
