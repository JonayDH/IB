/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file doble-factorial.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 7 2025
  * @brief Un programa que calcula el doble factorial de un numero
  * @bug There are no known bugs
  * @see https://jutge.org/problems/X89112_es/pdf
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
  * @brief Esta función imprime el doble factorial de n
  *
  * @param n Número a calcular su doble factorial
  */

int doble_factorial(int n) {

  if (n == 1 || n == 0) {

    return 1;
  } else {

    return n * doble_factorial(n - 2); 
  }
}

/// Main function

int main() {

  int n{};

  while (std::cin >> n) {

    std::cout << doble_factorial(n) << std::endl;
  }

  return 0;
}

