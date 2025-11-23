/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file primalty.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 21 2025
  * @brief Programa que comprueba si un número es primo o no 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48713_en/statement
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
#include <cmath>

/**
  * @brief Esta función comprueba si un número es primo o no
  *
  * @param numero numero a comprobar
  *
  * @return true si es primo, false si no
  */

bool EsPrimo(int numero) {

  if (numero <= 1) {       // 0, 1 y negativos no son primos
    return false;
  }

  if (numero == 2) {       // 2 es el único primo par
    return true;
  }

  if (numero % 2 == 0) {   // todos los pares > 2 no son primos
    return false;
  }

  int limite = std::sqrt(numero);
  for (int i = 3; i <= limite; i += 2) {   // revisar solo impares
    if (numero % i == 0) {
      return false;
    }
  }

  return true;
}

/// @brief Main function

int main() {

  int numero_numeros{};
  int numero_actual{};

  std::cin >> numero_numeros;

  for (int i = 0; i < numero_numeros; ++i) {
    std::cin >> numero_actual;

    if (EsPrimo(numero_actual)) {
      std::cout << numero_actual << " is prime" << std::endl;
    } else {
      std::cout << numero_actual << " is not prime" << std::endl;
    }
  }

  return 0;
}