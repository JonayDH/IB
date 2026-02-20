/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file complejos.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 29 2025
  * @brief Este programa hace operaciones con complejos
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p12-intro-oop-JonayDH/blob/main/intro-oop.md
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  */

#include "complejo.h"
#include <iostream>

int main() {

  PrintProgramPurpose();

  Complejo complejo1{0, 0}, complejo2{0, 0};

  std::cout << "Introduzca el primer número complejo (real imaginario): ";
  std::cin >> complejo1;

  std::cout << "Introduzca el segundo número complejo (real imaginario): ";
  std::cin >> complejo2;

  std::cout << "Primer complejo: " << complejo1 << std::endl;
  std::cout << "Segundo complejo: " << complejo2 << std::endl << std::endl;

  std::cout << "Operaciones:" << std::endl << std::endl;

  std::cout << "Suma: " << (complejo1 + complejo2) << std::endl;
  std::cout << "Resta: " << (complejo1 - complejo2) << std::endl;
  std::cout << "Multiplicación: " << (complejo1 * complejo2) << std::endl;
  std::cout << "División: " << (complejo1 / complejo2) << std::endl;

  return 0;
}