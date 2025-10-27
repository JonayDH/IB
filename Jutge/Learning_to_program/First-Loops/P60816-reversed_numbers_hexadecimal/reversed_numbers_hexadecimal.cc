/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file reversed_numbers_hexadecimal.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 27 2025
  * @brief a program that reads a number and prints its hexadecimal representation reversed. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P60816_en
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
  int residuo{};

  std::cin >> numero;

  if (numero == 0) {

    std::cout << numero;
  }

  while (numero > 0) {

    residuo = numero % 16;

    if (residuo > 9) {

      switch(residuo) {
        case 10:
          std::cout << "A";
          break;
        case 11:
          std::cout << "B";
          break;
        case 12:
          std::cout << "C";
          break;
        case 13:
          std::cout << "D";
          break;
        case 14:
          std::cout << "E";
          break;
        case 15:
          std::cout << "F";
          break;
      }
    } else {

      std::cout << residuo;
    }
    numero /= 16;
  }

  std::cout << std::endl;

  return 0;
}
