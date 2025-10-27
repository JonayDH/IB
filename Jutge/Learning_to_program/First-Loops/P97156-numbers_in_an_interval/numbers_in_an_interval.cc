/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file numbers_in_an_interval.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 27 2025
  * @brief A program that reads two numbers a and b, and prints all numbers between a and b
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P97156_en
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
  int a{};
  int b{};

  std::cin >> a;
  std::cin >> b;

  if (a < b) {

    for (int i{a}; i < b; i++) {
      std::cout << i << ",";
    }

    std::cout << b << std::endl;
  } else if (a > b) {
    std::cout << std::endl;
  }

  if (a == b) {
    std::cout << a << std::endl;
  }

  return 0;
}
