/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file print_a_cross.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 7 2025
  * @brief a program that prints an n × n cross with the character c.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P24381_en
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

void cross(int n, char c) {

  for (int i{}; i < (n / 2); i++) {

    for (int i{}; i < (n /2); i++) {

      std::cout << " ";
    }

    std::cout << c << std::endl;
  }

  for (int i{}; i < n; i++) {

    std::cout << c;
  }

  std::cout << std::endl;

  for (int i{}; i < (n / 2); i++) {

    for (int i{}; i < (n /2); i++) {

      std::cout << " ";
    }

    std::cout << c << std::endl;
  }
}

int main() {

  int n{};
  char c{};

  while (std::cin >> n >> c) {

    cross(n, c);
  }

  return 0;
}

