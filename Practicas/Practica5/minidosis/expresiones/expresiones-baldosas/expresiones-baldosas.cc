/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file expresiones-baldosas.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 13 2025
 * @brief A program that asks for the dimensions of a room in meters (width and
 *        length) and calculates how many tiles the room will have, assuming each tile
 *        is square and measures 0.6 meters on each side.
 * @bug There are no known bugs
 * @see https://www.minidosis.org/#/actividades/Cpp.Expresiones.Baldosas.prob
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
  double largo{};
  double ancho{};
  int baldosas{};

  std::cout << "Largo? ";
  std::cin >> largo;
  std::cout << "Ancho? ";
  std::cin >> ancho;

  baldosas = static_cast<int>(largo / 0.6) * static_cast<int>(ancho / 0.6);
  std::cout << "La habitación tendrá " << baldosas << " baldosas enteras."
            << std::endl;

  return 0;
}
