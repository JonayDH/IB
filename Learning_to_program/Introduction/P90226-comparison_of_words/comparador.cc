/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file comparador.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief A program that reads two words and tells their lexicographic order.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90226_en
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

  std::string a;
  std::string b;

  std::cin >> a;
  std::cin >> b;

  if (a < b) {

   std::cout << a << " < " << b << std::endl;
  }

  if (a > b) {

   std::cout << a << " > " << b << std::endl;
  }

  if (a == b) {

   std::cout << a << " = " << b << std::endl;
  }
}
