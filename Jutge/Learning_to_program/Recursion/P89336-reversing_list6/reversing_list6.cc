/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file reversing_list6.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 24 2025
  * @brief a program that reads a sequence of words and prints it in reverse order.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89336_en
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

  std::string palabra{};
  std::vector<std::string> palabras{};
  std::vector<std::string> palabras_nuevas{};

  while (std::cin >> palabra) {

    palabras.push_back(palabra);
  }

  int numero_palabras{static_cast<int>(palabras.size())};
  int redondeo{(numero_palabras + 1) / 2};
  int inicio{numero_palabras - redondeo};

  for (int i{0}; i < inicio; i++) {

    palabras_nuevas.push_back(palabras[i]);
  }

  for (int i{static_cast<int>(palabras_nuevas.size()) - 1}; i >= 0; i--) {

    std::cout << palabras_nuevas[i] << std::endl;
  }

  return 0;
}
