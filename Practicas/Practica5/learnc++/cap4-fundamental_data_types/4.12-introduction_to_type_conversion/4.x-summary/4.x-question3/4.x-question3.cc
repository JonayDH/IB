/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file 4.x-question3.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 12 2025
 * @brief A program to simulate a ball being dropped off of a tower.
 * @bug There are no known bugs
 * @see https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
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

void caida(double altura) {
  const double gravedad{9.8};
  double caida{};
  double altura_nueva{};

  for (int i = 0; i < 6; i++) {
    caida = gravedad * (i * i) / 2;
    altura_nueva = altura - caida;

    if (altura_nueva <= 0) {
      std::cout << "At " << i << " seconds, the ball is on the ground."
                << std::endl;
    } else {
      std::cout << "At " << i
                << " seconds, the ball is at height: " << altura_nueva
                << " meters" << std::endl;
    }
  }
}

int main() {
  double altura{};

  std::cout << "Enter the height of the tower in meters: ";
  std::cin >> altura;

  caida(altura);

  return 0;
}
