/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file minimun_maximun.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 5 2025
  * @brief Un programa que busca el maximo y el minimo entre 2 números
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P98458_en
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

void min_max(int a, int b, int& mn, int &mx) {

  if (a > b) {

    mx = a;
    mn = b;
  } else {

    mx = b;
    mn = a;
  }
}

int main() {

  int a{};
  int b{};
  int mn{};
  int mx{};

  while (std::cin >> a >> b) {

    min_max(a, b, mn, mx);

    std::cout << mn << " " << mx << std::endl;
  }

  return 0;
}
