/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file print-a-line.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 7 2025
  * @brief a program that print a line with s spaces followed by n characters c  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P99541_en/pdf
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

/**
  * @brief Esta función imprime un cantidad s de espacios y después imprime un caracter c n veces
  *
  * @param s Cantidad de espacios
  * @param c Caracter a imprimir
  * @param n Cantidad de veces a imprimir el caracter
  */

void print(int s, char c, int n) {

  for (int i{}; i < s; i++) {

    std::cout << " ";
  }

  for (int i{}; i < n; i++) {

    std::cout << c;
  }

  std::cout << std::endl;
}

/// Main function

int main() {

  int s{}, n{};
  char c{};

  while (std::cin >> s >> c >> n) {

    print(s, c, n); 
  }

  return 0;
}
