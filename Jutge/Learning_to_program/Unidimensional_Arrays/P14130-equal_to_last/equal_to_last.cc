/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file equal_to_last.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 6 2025
  * @brief a program that reads a non-empty sequence of integer numbers, and tells how many of them are equal to the last one.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P14130_en
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

  std::vector<int> numeros{};
  int tamano_vector{};
  int numero{};
  int contador_iguales{};

  std::cin >> tamano_vector;

  while (std::cin >> numero) {

    numeros.push_back(numero);
  }

  for (int i{}; i < tamano_vector - 1; i++) {

    if (numeros[i] == numeros[tamano_vector - 1]) {

      contador_iguales++;
    }
  }

  std::cout << contador_iguales << std::endl;

  return 0;
}
  

