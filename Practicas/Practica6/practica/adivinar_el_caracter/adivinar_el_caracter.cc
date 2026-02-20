/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file adivinar_el_caracter.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 24 2025
  * @brief Descripción de lo que hace el programa
  * @bug Un programa que pide caracteres hasta que coincide con el de la variable kCaracterSolucion
  * @see https://campusvirtual.ull.es/2526/ingenieriaytecnologia/mod/page/view.php?id=22032
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

  constexpr char kCaracterSolucion{'x'};
  char caracter_introducido{};

  std::cout << "Introduzca un carácter: ";
  std::cin >> caracter_introducido;

  while(kCaracterSolucion != caracter_introducido) {
   
    std::cout << "Introduzca un carácter: ";
    std::cin >> caracter_introducido;
  }
  
  std::cout << "Correcto." << std::endl;

  return 0;
} 
