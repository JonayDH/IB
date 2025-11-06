/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file ith1.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 6 2025
  * @brief a program that, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39225_en
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

  int posicion_deseada{};
  int posicion_actual{};
  int numero_deseado{};
  int numero_actual{};

  std::cin >> posicion_deseada;

  while (std::cin >> numero_actual) {

    posicion_actual++;

    if (posicion_actual == posicion_deseada) {

      numero_deseado = numero_actual;
      break;
    }
  }

  std::cout << "At the position " << posicion_deseada << " there is a(n) " << numero_deseado << "." << std::endl;

  return 0;
}
