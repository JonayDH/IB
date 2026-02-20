/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file sum-of-digits.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 31 2025
  * @brief A program that reads several numbers and prints the sum of the digits of each one.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P33839_en
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
  int suma{};
  int copia_numero{numero};
  
  while (std::cin >> numero) {

    copia_numero = numero;
    suma = 0;

    if (numero == 0) {

      std::cout << "The sum of the digits of 0 is 0." << std::endl;
    } else {

      while (numero > 0) {
  
        suma = suma + (numero % 10);
        numero = numero / 10;
      }

      std::cout << "The sum of the digits of " << copia_numero << " is " << suma << "." << std::endl; 
    }
  }

  return 0;
}
