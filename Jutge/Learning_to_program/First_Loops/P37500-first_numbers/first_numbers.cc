/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file first_numbers.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 27 2025
  * @brief A program that reads a number n, and prints all numbers between 0 and n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37500_en
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

  int numero{};
  std::cin >> numero;

  for (int i{0}; i <= numero; i++) {

    std::cout << i << std::endl;
  }

  return 0;
}

