/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file integer_division.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief A program that reads two natural numbers a and b, with b > 0, and prints the integer division d and the remainder r of a divided by b.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107_en
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

  int numero1{};
  int numero2{};

  std::cin >> numero1;
  std::cin >> numero2;

  if (numero2 > 0) {

    std::cout << numero1 / numero2 << " " << numero1 % numero2 << std::endl;
  }

  return 0;
}
