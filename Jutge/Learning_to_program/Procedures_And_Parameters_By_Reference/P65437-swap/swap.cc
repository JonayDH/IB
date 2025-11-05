/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file swap.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 5 2025
  * @brief swaps the value of its parameters.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P65437_en
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

void swap2(int& a, int& b) {

  int aux{a};

  a = b;
  b = aux;
}

int main() {

  int a{};
  int b{};

  while (std::cin >> a >> b) {

    swap2(a, b);

    std::cout << a << " " << b << std::endl;
  }

  return 0;
}
