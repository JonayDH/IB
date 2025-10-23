/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file integer.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief A program that reads an integer number a and a natural number b, with b > 0, and prints
  *        the integer division d and the remainder r of a divided by b.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P92351_en
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

  int a;
  int b;
  int resultado;
  int resto;

  std::cin >> a;
  std::cin >> b;

  if (b > 0) {
    
    resultado = a / b;
    resto = a % b;

    if (resto < 0) {
      
      resto = resto + b;
      resultado = resultado - 1;
    }

    std::cout << resultado << " " << resto << std::endl;
  }
}
