/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file sum_of_divisors.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 4 2025
  * @brief a function that returns the sum of the divisors of a number @n@.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P95972_en
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

int sum_divisors(int x) {

  int suma{};

  for (int i{1}; i * i <= x; i++) {

    if (x % i == 0) {

      suma += i;
      if (i != x / i) {

        suma += x / i;
      }
    }
  }

  return suma;
}

int main() {

  int x{};

  while (std::cin >> x) {

    std::cout << sum_divisors(x) << std::endl;
  }

  return 0;
}
