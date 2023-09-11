/*
 * SPDX-FileCopyrightText: 2023 - Sebastian Ritter <bastie@users.noreply.github.com>
 * SPDX-License-Identifier: MIT
 */

#ifndef rESPect32_H
#define rESPect32_H

#define RESPECT_VERSION "0.0.1" ///< The version of rESPect API
#include <string.h>


/*!
 @brief rESPect Fassade für integrierte APIs.
 
 rESPect ist eine Fassade, welche unterliegende APIs kapselt.
 
 @author Sebastian Ritter
 @version 0.0.1 2023-09-10
 
 */
class rESPect {
private:
public:
  /**
   @brief Setzt eine Eigenschaft für die Fassade.
   
   Setzt den Wert einer Eigenschaft.
   Die Übergabe eines leeren Strings "\0" entspricht der Löschaufforderung für diese Eigenschaft.
   
   @param name Bezeichnung für die Eigenschaft (Substantiv empfohlen)
   @param value Wert der Eigenschaft
   
   @return ungleich 0 wenn erfolgreich, bei Fehlern 0
   
   <b>Beispiel</b>
   @code
   int rRc = rSet ("Erni", "Bert");
   @endcode
   */
  int rSet (const char* name, const char* value);
  /**
   @brief Liefert den gesetzten Wert für eine Eigenschaft der Fassade.
   
   @param name Bezeichnung für die Eigenschaft
   @param value Wert der Eigenschaft
   
   @return Wert der Eigenschaft oder einen leeren String
   
   <b> Beispiel </b>
   @code
   #include <rESPect32.h>
   
   printf("rESPect v%s\n", rInstance.rGet("rVERSION"));
   @endcode
   */
  const char* rGet(const char* str2);
};

#endif // rESPect32_H
