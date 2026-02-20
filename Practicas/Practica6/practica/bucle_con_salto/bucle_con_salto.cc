/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file bucle_con_salto.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 24 2025
  * @brief Un programa en C++ que solicite al usuario dos valores enteros positivos, limite y salto. 
  *        El programa deberá mostrar por pantalla los valores desde 0 hasta limite, a intervalos de longitud salto.
  * @bug There are no known bugs
  * @see https://campusvirtual.ull.es/2526/ingenieriaytecnologia/mod/page/view.php?id=22031
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
  
  int limite{};
  int salto{};

  std::cout << "Introduzca el límite: ";
  std::cin >> limite;

  std::cout << "Introduzca el salto: ";
  std::cin >> salto;

  if (salto > limite) {

    std::cout << "0" << std::endl;
  } else {

    for(int i{0}; i <= limite; i += salto) {
      std::cout << i << " ";
    }
    
    std::cout << std::endl;
  }

  return 0;
}
