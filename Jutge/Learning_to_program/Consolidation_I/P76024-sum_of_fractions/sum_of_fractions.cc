/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file sum_of_fractions.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 12 2025
  * @brief a program that reads triples of natural numbers a, b and k,
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P76024_en
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
#include <iomanip>

int main() {

  int numero1{}, numero2{}, numero3{};
  double suma{};

  while (std::cin >> numero1 >> numero2 >> numero3) {

    for (int i{}; (numero1 + i * numero3) <= numero2; i++) {

      suma += (1.0 / (numero1 + i * numero3));
    }

    std::cout << std::fixed << std::setprecision(4) << suma << std::endl;

    suma = 0;
  }

  return 0;
}

    
