/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file max_of_two.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 4 2025
  * @brief a function that returns the maximum of two given integer numbers @a@ and @b@.  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P57846_en
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
#include <cmath>

int max2(int a, int b) {

  return std::fmax(a, b);
}

int main() {

  int a{};
  int b{};

  while (std::cin >> a >> b) {

    std::cout << max2(a, b) << std::endl;
  }

  return 0;
}
