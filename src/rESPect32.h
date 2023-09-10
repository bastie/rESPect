/*
 * SPDX-FileCopyrightText: 2022-2023 - Sebastian Ritter <bastie@users.noreply.github.com>
 * SPDX-License-Identifier: MIT
 */

#ifndef _rESPect32_H_
#define _rESPect32_H_

#define RESPECT_VERSION "0.0.1" ///< The version of rESPect API
#include <string.h>


class rESPect
{
public:
  const char* rGet(const char* str2);
};

#endif // _rESPect32_H_
