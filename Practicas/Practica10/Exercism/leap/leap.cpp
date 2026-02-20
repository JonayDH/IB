/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file leap.cpp
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 15 2025
  * @brief A program that tells if a year is or is not a leap year.
  * @bug There are no known bugs
  * @see https://exercism.org/tracks/cpp/exercises/leap
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>.
  */

#include "leap.h"
#include <iostream>

namespace leap {

/**
  * @brief Función que dice si un año es bisiesto o no
  *
  * @param year año a revisar
  *
  * @return true si es bisiesto, false si no
  */
  
bool is_leap_year(const int year) {

  if ((year % 4) == 0) {

    if ((year % 100) == 0) {
    
      if ((year % 400) == 0) {
            
        return true;
      } else {
              
          return false;
        }   
    } else {

        return true;
      }   
  } else {

    return false;
    }   
}

/// @brief Función principal

int main() {

  int year{};
  std::cin >> year;

  is_leap_year(year);

  return 0;
}
}  // namespace leap
