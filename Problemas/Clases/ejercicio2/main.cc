/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file main.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 31 2025
  * @brief Descripción de lo que hace el programa  
  * @bug There are no known bugs
  * @see link
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  */

#include "funciones.h"
#include <iostream>

int main() {

  Complejo complejo1{10,5};
  Complejo complejo2{4,8};

  std::cout << "Complejos: " << complejo1 << complejo2 << std::endl;
  std::cout << "Suma: " << complejo1 + complejo2 << std::endl;
  std::cout << "Resta: " << complejo1 - complejo2 << std::endl;
  std::cout << "Multi: " << complejo1 * complejo2 << std::endl;
  std::cout << "Divi: " << complejo1 / complejo2 << std::endl;
}