/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file leapyears.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 5 2025
  * @brief A program that tells if a year is or is not a leap year.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P61634_en
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

int main() {

  int year{0};
  std::cin >> year;

  if ((year % 4) == 0) {

    if ((year % 100) == 0) {
    
      if ((year % 400) == 0) {
      
        std::cout << "YES" << std::endl;
      } else {
          
          std::cout << "NO" << std::endl;
        }
    } else {

        std::cout << "YES" << std::endl;
      }
  } else {

    std::cout << "NO" << std::endl;
    }
}
