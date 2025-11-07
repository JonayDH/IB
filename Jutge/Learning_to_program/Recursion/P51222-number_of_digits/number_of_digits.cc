/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file number_of_digits.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 7 2025
  * @brief A program that gives the number of digits of n  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P51222_en
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

int number_of_digits(int n) {

  int digitos{};

  if (n < 10) {

    return 1;
  }

  digitos++;
  n /= 10;

  return digitos + number_of_digits(n);
}

int main() {

  int n{};

  while (std::cin >> n) {

    std::cout << number_of_digits(n) << std::endl;
  }

  return 0;
}
