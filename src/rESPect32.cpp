/*
 * SPDX-FileCopyrightText: 2023 - Sebastian Ritter <bastie@users.noreply.github.com>
 * SPDX-License-Identifier: MIT
 */

#include "rESPect32.h"
#include <string.h>


int rESPect::rSet (const char* name, const char* value) {
  
  return 0;
}

const char* rESPect::rGet (const char* name) {
  
  if (strcmp("rVERSION", name) == 0) {
    return RESPECT_VERSION;
  }
  
  return "\0";
}

// EOF
