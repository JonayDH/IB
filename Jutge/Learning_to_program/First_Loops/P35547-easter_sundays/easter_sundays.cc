/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file easter_sundays.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 25 2025
  * @brief programa que calcula el easter sunday de un año 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P35547_en
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

int ModPositive(int value, int mod) {
  int r = value % mod;
  if (r < 0) r += mod;
  return r;
}

int main() {
  int Y;
  while (std::cin >> Y) {
    int k = Y / 100;
    int x = Y % 19;
    int b = Y % 4;
    int c = Y % 7;
    int q = k / 4;
    int p = (13 + 8 * k) / 25;
    int y = ModPositive(15 - p + k - q, 30);
    int z = ModPositive(19 * x + y, 30);
    int n = ModPositive(4 + k - q, 7);
    int e = ModPositive(2 * b + 4 * c + 6 * z + n, 7);

    int D, M;
    if (z + e <= 9) {
      D = 22 + z + e;
      M = 3;
    } else if (z == 29 && e == 6) {
      D = 19;
      M = 4;
    } else if (z == 28 && e == 6 && x > 10) {
      D = 18;
      M = 4;
    } else {
      D = z + e - 9;
      M = 4;
    }

    std::cout << D << '/' << M << '\n';
  }
  return 0;
}
