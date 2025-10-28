/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file uppercase_and_lowercase.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief A program that reads a letter and prints it in lowercase if it was uppercase, or prints it in uppercase if it was lowercase.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P98960_en
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

  char letra{};
  char letra_nueva{};

  std::cin >> letra;

  if (letra < 91) {

    letra_nueva = letra + 32;
    std::cout << letra_nueva << std::endl;
  }

  if (letra > 91) {

    letra_nueva = letra - 32;
    std::cout << letra_nueva << std::endl;
  }

  return 0;
}
