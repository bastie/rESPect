/*
 * SPDX-FileCopyrightText: 2023 - Sebastian Ritter <bastie@users.noreply.github.com>
 * SPDX-License-Identifier: MIT
 */

/**
@example
*/
#include <rESPect32.h>

rESPect rInstance;

void setup() {
  // put your setup code here, to run once:
  printf("rESPect v%s\n", rInstance.rGet("rVERSION"));
}

void loop() {
  // put your main code here, to run repeatedly:
}
