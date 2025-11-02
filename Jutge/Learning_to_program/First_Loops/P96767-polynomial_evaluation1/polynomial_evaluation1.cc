/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file polynomial_evaluation1.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 2 2025
  * @brief Un programa que lee un numero y hace una ecuacion
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P96767_en
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
#include <cmath>

int main() {

  double numero{};
  double x{};
  int exponente{1};
  double suma{};

  std::cin >> x;
  std::cin >> numero;

  suma = numero;

  while (std::cin >> numero) {

    suma = suma + (numero * (std::pow(x, exponente)));

    exponente++;
  }

  std::cout << std::fixed << std::setprecision(4) << suma << std::endl;

  return 0;
}
