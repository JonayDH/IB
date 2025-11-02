/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file greates_common_divisor.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 2 2025
  * @brief a program that computes the greatest common divisor of two numbers.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P67723_en
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

int MaximoComunDivisor(int numero1, int numero2) {

  if (numero1 == 0) {

    return numero1;
  }

  if (numero2 == 0) {

    return numero2;
  }

  while (numero2 != 0) {

    int resto = numero1 % numero2;
    numero1 = numero2;
    numero2 = resto;
    
    }

  return numero1;
}

int main() {

  int numero1{};
  int numero2{};

  std::cin >> numero1;
  std::cin >> numero2;

  std::cout << "The gcd of " << numero1 << " and " << numero2 << " is " << MaximoComunDivisor(numero1, numero2) << "." << std::endl;

  return 0;
}
