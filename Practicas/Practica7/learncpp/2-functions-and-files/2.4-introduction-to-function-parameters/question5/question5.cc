/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file question5.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 26 2025
  * @brief Un programa que devuelve el doble de un número.
  * @bug There are no known bugs
  * @see https://www.learncpp.com/cpp-tutorial/introduction-to-function-parameters-and-arguments/
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

int doubleNumber(int numero) {
  
  return numero * 2;
}

int main() {

  int numero{};

  std::cout << "Introduce un número: ";
  std::cin >> numero;

  std::cout << "El doble de " << numero << " es " << doubleNumber(numero) << std::endl;

  return 0;
}
