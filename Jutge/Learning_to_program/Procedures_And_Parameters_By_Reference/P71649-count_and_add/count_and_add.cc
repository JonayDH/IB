/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file count_and_add.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 7 2025
  * @brief a program that read a sequence of integer numbers until its end, 
  *        and store in num how many numbers it has, and store in sum the sum of those numbers.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P71649_en
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

void count_and_add(int& num, int& sum) {

  num = 0;
  sum = 0;
  int aux{};

  while (std::cin >> aux) {

    sum += aux;
    num++;
  }
}

int main() {

  int num{}, sum{};

  count_and_add(num, sum);

  return 0;
}
