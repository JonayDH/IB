/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file leap_years.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 4 2025
  * @brief a function that tells if the given year is a leap year or not.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P95401_en
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  */

#include <iostream>

bool is_leap_year(int year) {

  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {

  int year{};

  while (std::cin >> year) {

    if (is_leap_year(year)) {

      std::cout << "true" << std::endl;
    } else {

      std::cout << "false" << std::endl;
    }
  }

  return 0;
}
