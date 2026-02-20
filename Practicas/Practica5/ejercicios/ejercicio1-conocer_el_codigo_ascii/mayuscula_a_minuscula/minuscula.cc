/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file minuscula.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 12 2025
  * @brief The program reads an uppercase letter and displays its corresponding lowercase.
  * @bug There are no known bugs
  * @see https://elcodigoascii.com.ar/
  *      https://github.com/IB-2025-2026/P05-expressions/blob/main/expressions.md
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  *
  *
  */

#include <iostream>

int main() {
  char letra_mayus;

  std::cout << "Introduce una letra mayúscula: ";
  std::cin >> letra_mayus;

  int ascii_letra{static_cast<int>(letra_mayus)};
  char letra_minus{static_cast<char>(ascii_letra + 32)};

  std::cout << "La letra minúscula es: " << letra_minus << std::endl;

  return 0;
}
