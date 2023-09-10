/*
 * SPDX-FileCopyrightText: 2022-2023 - Sebastian Ritter <bastie@users.noreply.github.com>
 * SPDX-License-Identifier: MIT
 */

#include "rESPect32.h"
#include <string.h>


/*!
 @brief rESPect Fassade für integrierte APIs.
 
 rESPect ist eine Fassade, welche unterliegende APIs kapselt.
 
 @author Sebastian Ritter
 @version 0.0.1 2023-09-10

 */
public class rESPect {
  
  /**
   @brief set a property for rESPect facade. This is useful.
   
   @param name the name of property
   @param value the value of property
   
   @return zero if set was succesful, otherwise none zero value
   
   @code
   int rRc = rSet ("Erni", "Bert");
   @endcode
   */
  int rSet (const char* name, const char* value) {
    
    return 1;
  }
  
  const char* rGet (const char* name) {
    
    if (strcmp(name, "rVERSION")) {
      return RESPECT_VERSION;
    }
  }
}
