/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file max_of_four.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 4 2025
  * @brief a function that returns the maximum of four given integer numbers @a@, @b@, @c@ and @d@.  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P73231_en
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

int max4(int a, int b, int c, int d) {

  int max1{};
  int max2{};

  max1 = std::fmax(a, b);
  max2 = std::fmax(c, d);

  return std::fmax(max1, max2);
}
 
int main() {

  int a;
  int b;
  int c;
  int d;

  while (std::cin >> a >> b >> c >> d) {

    std::cout << max4(a, b, c, d) << std::endl;
  }

  return 0;
}
