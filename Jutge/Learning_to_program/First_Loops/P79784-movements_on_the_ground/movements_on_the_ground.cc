/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file movements_on_the_ground.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 28 2025
  * @brief Un programa que lee una serie de combinaciones de letras y suma o resta dependiendo de la letra.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P79784_en
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

  int x_coord{};
  int y_coord{};
  char caracter_actual{};

  while (std::cin >> caracter_actual) {

    if (caracter_actual == 'e') {

      x_coord++;
    } else if (caracter_actual == 'w') {

      x_coord--;
    } else if (caracter_actual == 's') {

      y_coord++;
    } else if (caracter_actual == 'n') {

      y_coord--;
    }
  }

  std::cout << "(" << x_coord << ", " << y_coord << ")" << std::endl;

  return 0;
}
