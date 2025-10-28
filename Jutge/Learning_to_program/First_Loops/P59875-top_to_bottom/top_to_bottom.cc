/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file top_to_bottom.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 27 2025
  * @brief A program that reads two numbers x and y, and prints all numbers between x and y (or between y and x), in decreasing order.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59875_en
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
  int aux{};

  std::cin >> numero1;
  std::cin >> numero2;

  if (numero2 > numero1) {

    aux = numero1;
    numero1 = numero2;
    numero2 = aux;
   }

  for (int i{numero1}; i >= numero2; i--) {

    std::cout << i << std::endl;
  }

  return 0;
}
