/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file time_decomposition2.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 5 2025
  * @brief A program that, given a number of seconds n, prints the number of hours, minutes and seconds represented by n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P22654_en
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

void decompose(int n, int& h, int& m, int& s) {

  h = n / 3600;
  n %= 3600;
  m = n / 60;
  s = n % 60;
}

int main() {

  int n{};
  int h{};
  int m{};
  int s{};

  while (std::cin >> n) {
    
    decompose(n, h, m, s);

    std::cout << h << " " << m << " " << s << std::endl;
  }

  return 0;
}
