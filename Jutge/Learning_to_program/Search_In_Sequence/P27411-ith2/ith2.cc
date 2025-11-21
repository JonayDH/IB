/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file ith2.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 21 2025
  * @brief a program that, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P27411_en
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
#include <vector>

int main() {

  std::vector <int> numeros{};
  int posicion_deseada{};
  int numero_actual{};

  std::cin >> posicion_deseada;

  while (std::cin >> numero_actual) {

    if (numero_actual == -1) {

      break;
    }

    numeros.push_back(numero_actual);
  }

  if (posicion_deseada > static_cast<int>(numeros.size()) || posicion_deseada <= 0) {

    std::cout << "Incorrect position." << std::endl;
  } else {

    std::cout << "At the position " << posicion_deseada << " there is a(n) " << numeros[posicion_deseada - 1] << "." << std::endl;
  }

  return 0;
}
