/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file double_factorial.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 4 2025
  * @brief an iterative function that returns the double factorial @n@!! for a natural n.  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P17913_en
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

int double_factorial(int x) {

  int double_factorial{1};

  if (x == 0) {

    return x + 1;
  }

  for (int i{x}; i > 0; i -= 2) {

    double_factorial *= i;
  }

  return double_factorial;
}

int main() {

  int x{};

  while (std::cin >> x) {

    std::cout << double_factorial(x) << std::endl;
  }

  return 0;
}
