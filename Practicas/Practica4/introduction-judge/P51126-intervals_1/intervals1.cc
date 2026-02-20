/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file intervals1.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 5 2025
  * @brief A program that, given two intervals, computes the interval corresponding to their intersection, or tells that it is empty.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P51126_en
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
#include <cmath>

int main() {

  int x1{0}, y1{0}, x2{0}, y2{0}, min{0}, max{0};
  std::cin >> x1 >> y1 >> x2 >> y2;

  min = std::fmax(x1, x2);
  max = std::fmin(y1, y2);

  if (min <= max) {

    std::cout << "[" << min << "," << max << "]" << std::endl;
  } else {

      std::cout << "[]" << std::endl;
    }
}
