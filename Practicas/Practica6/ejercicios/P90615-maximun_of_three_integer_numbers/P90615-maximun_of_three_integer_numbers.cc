/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file P90615-maximun_of_three_integer_numbers.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief A program that reads three numbers and prints their maximum.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90615_en
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

#include <iostream>

int main() {
  int number1{};
  int number2{};
  int number3{};
  int maximo{};

  std::cin >> number1;
  std::cin >> number2;
  std::cin >> number3;

  if (number1 >= number2) {
    maximo = number1;
    if (maximo <= number3) {
      maximo = number3;
    }
  } else if (number1 <= number2) {
    maximo = number2;
    if (maximo <= number3) {
      maximo = number3;
    }
  }

  std::cout << maximo << std::endl;

  return 0;
}
