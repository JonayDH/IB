/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file expresiones-booleanas_cuadrado.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 14 2025
 * @brief A program that reads 2 real numbers (the x and y coordinates on the 2D
 *        plane). The program prints "inside" or "outside" depending on whether the
 *        point is inside or outside the square that goes from (0,0) to (1,1).
 * @bug There are no known bugs
 * @see
 * https://www.minidosis.org/#/actividades/Cpp.ExpresionesBooleanas.Cuadrado.prob
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
  double x_coord{};
  double y_coord{};

  std::cout << "Introduce la coordenada x: ";
  std::cin >> x_coord;
  std::cout << "Introduce la coordenada y: ";
  std::cin >> y_coord;

  // Límites superiores de x e y dentro del cuadrado
  constexpr double kXPositiveLimit{1.0};
  constexpr double kYPositiveLimit{1.0};

  // Límites inferiores de x e y dentro del cuadrado
  constexpr double kXNegativeLimit{0.0};
  constexpr double kYNegativeLimit{0.0};

  if (x_coord <= kXPositiveLimit && x_coord >= kXNegativeLimit &&
      y_coord <= kYPositiveLimit && y_coord >= kYNegativeLimit) {
    std::cout << "dentro" << std::endl;
  } else {
    std::cout << "fuera" << std::endl;
  }

  return 0;
}
