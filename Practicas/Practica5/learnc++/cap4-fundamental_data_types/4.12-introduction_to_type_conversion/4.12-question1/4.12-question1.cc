/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file 4.12-question1.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 12 2025
 * @brief A program where the user is asked to enter a single character.
 *        Print the value of the character and its ASCII code, using static_cast.
 * @bug There are no known bugs
 * @see
 * https://www.learncpp.com/cpp-tutorial/introduction-to-type-conversion-and-static_cast/
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <https://www.gnu.org/licenses/>.
 *
 *
 */

#include <iostream>

int main() {
  char caracter{};

  std::cout << "Introduce un caracter para ver su código ASCII: ";
  std::cin >> caracter;

  std::cout << "El código ASCII es: " << static_cast<int>(caracter)
            << std::endl;

  return 0;
}
