/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file nombre.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 6 2025
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

#include <iostream>

bool ThereIsAnA(std::string& palabra_actual) {

  for (char x: palabra_actual) {

    if (x == 'a') {

      return true;
    }
  }
  
  return false;
}

int main() {

  std::string palabra_actual{};
  bool tiene_a{false};
  
  while (std::cin >> palabra_actual) {

    if (ThereIsAnA(palabra_actual)) { 

      tiene_a = true;
    }
  }

  if (tiene_a) {

    std::cout << "yes" << std::endl;
  } else {

    std::cout << "no" << std::endl;
  }
    
  return 0;
}
