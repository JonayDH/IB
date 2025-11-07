/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file increasing_numbers.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 7 2025
  * @brief a program that tells if a natural number @n@ is increasing or not.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P35537_en
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

bool is_increasing(int n) {

  int numero_actual{n % 10};
  int numero_entre_10{n / 10};
  int numero_comparador{numero_entre_10 % 10};

  if (n < 10) {

    return true;
  }

  if (numero_actual >= numero_comparador) {

    return is_increasing(n / 10);
  } else {

    return false;
  }
}

int main() {

  int n{};

  while (std::cin >> n) {

    if (is_increasing(n)) {

      std::cout << "true" << std::endl;
    } else {

      std::cout << "false" << std::endl;
    }
  }

  return 0;
}
