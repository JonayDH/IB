/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file expresiones-inflado.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 13 2025
 * @brief A program that reads a lowercase letter and displays its corresponding
 *        uppercase letter on the screen.
 * @bug There are no known bugs
 * @see https://www.minidosis.org/#/actividades/Cpp.Expresiones.Inflado.prob
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
  char letra_minus{};
  char letra_mayus{};
  int ascii{};

  std::cout << "Introduce una letra minúscula: ";
  std::cin >> letra_minus;

  ascii = static_cast<int>(letra_minus) - 32;
  letra_mayus = static_cast<char>(ascii);

  std::cout << "Letra mayúscula: " << letra_mayus << std::endl;

  return 0;
}
