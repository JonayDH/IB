/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file valid_dates.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 2 2025
  * @brief A program that reads several dates, and for each one tells if it is correct or not according to the Gregorian calendar.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58459_en
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

bool is_valid_date(int d, int m, int y) {

  if (m < 1 || m > 12) {

    return false;
  }

  if (d < 1) return false;

  int dias_max = 31;
  switch (m) {

    case 4: 
      dias_max = 30;
      break;

    case 6: 
      dias_max = 30;
      break;

    case 9: 
      dias_max = 30;
      break;

    case 11: 
      dias_max = 30; 
      break;

    case 2:  
      if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {

        dias_max = 29;
      } else{

        dias_max = 28;
      } 

      break;        

    default:
      dias_max = 31;
      break;
  }

  return (d <= dias_max);
}

int main() {

  int d{}, m{}, y{};

  while (std::cin >> d >> m >> y) {

    if (is_valid_date(d, m, y)) {

      std::cout << "true" << std::endl;
    } else {

      std::cout << "false" << std::endl;
    }
  }

  return 0;
}
