/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file trigonometry.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 3 2025
  * @brief a program that reads a sequence of angles in degrees, and prints their sine and their cosine.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P37760_en
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
#include <iomanip>
#include <cmath>

int main() {

  double angulo{};
  constexpr double kPi{3.141592653589793};

  while (std::cin >> angulo) {

    std::cout << std::fixed << std::setprecision(6) << sin(angulo * (kPi / 180)) << " " << cos(angulo * (kPi / 180)) << std::endl;
  }

  return 0;
}
