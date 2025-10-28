/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file harmonic_numbers_1.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 27 2025
  * @brief A program that reads a number n and prints the n-th harmonic number
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59539_en
  *
  * This program is free software: you can redistribute it and/or modify it under
  * the terms of the GNU General Public License as published by the Free Software
  * Foundation, either version 3 of the License, or (at your option) any later
  * version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT
  * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
  * details.
  *
  * You should have received a copy of the GNU General Public License along with
  * this program. If not, see <https://www.gnu.org/licenses/>.
  */

#include <iomanip>
#include <iostream>

int main() {
  int number{};
  double harmonic{0.0};

  std::cin >> number;

  if (number == 0) {
    std::cout << "0.0000" << std::endl;
  } else {
    for (int i{1}; i <= number; i++) {
      harmonic += (1.0 / i);
    }

    std::cout << std::fixed << std::setprecision(4);
    std::cout << harmonic << std::endl;
  }

  return 0;
}
