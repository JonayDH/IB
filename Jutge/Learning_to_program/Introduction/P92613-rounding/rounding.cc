/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file rounding.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief A program that reads a real number x≥0 and prints ⌊ x ⌋ (the floor of x), ⌈ x ⌉ (the ceiling of x), and the rounding of x.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P92613_en
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
#include <iomanip>

int main() {

  long double x;

  std::cin >> x;

  std::cout << std::fixed << std::setprecision(0) << std::floor(x) << " " << std::ceil(x) << " " << std::round(x) << std::endl;
}
