/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file expresiones-horas.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 13 2025
 * @brief A program that reads a number of seconds and says how many whole hours it contains.
 * @bug There are no known bugs
 * @see https://www.minidosis.org/#/actividades/Cpp.Expresiones.Horas.prob
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
  int seconds{};

  std::cout << "Seconds: ";
  std::cin >> seconds;

  std::cout << "Hours: " << seconds / 3600 << std::endl;

  return 0;
}
