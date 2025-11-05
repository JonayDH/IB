/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file sort_three.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 5 2025
  * @brief un programa que ordena tres números de menor a mayor.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P32954_en
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

void sort3(int& a, int& b, int& c) {

  int max{};
  int mid{};
  int min{};

  if (a >= b && a >= c) {

    max = a;

    if (b >= c) {

      mid = b;
      min = c;
    } else {

      mid = c;
      min = b;
    }
  } else if (b >= a && b >= c) {

    max = b;
    
    if (a >= c) {

      mid = a;
      min = c;
    } else {
  
      mid = c;
      min = a;
    }
  } else {

    max = c;

    if (a >= b) {

      mid = a;
      min = b;
    } else {

      mid = b; 
      min = a;
    }
  }

  a = min;
  b = mid;
  c = max;
}

int main() {

  int a{};
  int b{};
  int c{};

  while (std::cin >> a >> b >> c) {

    sort3(a, b, c);

    std::cout << a << " " << b << " " << c << std::endl;
  }

  return 0;
}
