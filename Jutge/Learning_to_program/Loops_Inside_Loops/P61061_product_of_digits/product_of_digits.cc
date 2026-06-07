/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file product_of_digits.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Jun 7 2026
  * @brief Un programa que lea varios números y, para cada uno de ellos, 
  *        imprima el producto de sus dígitos, luego el producto de los dígitos del último producto obtenido, 
  *        y así sucesivamente, hasta que el producto resultante tenga un solo dígito.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P61061_en
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

/// @brief Programa principal 
int main() {

  int numero{};
  int resultado{1};
  int aux{};

  while (std::cin >> numero) {
    
    resultado = 1;
    aux = numero;

    if (numero < 10) {

      std::cout << "The product of the digits of " << aux << " is " << numero << "." << std::endl;
    }

    while (numero >= 10) {

      resultado = 1;

      while (numero != 0) {

        resultado *= numero % 10;
        numero /= 10;
      }

      numero = resultado;
      std::cout << "The product of the digits of " << aux << " is " << resultado << "." << std::endl;
      aux = numero;
    }

    std::cout << "----------" << std::endl;
  }

  return 0;
}