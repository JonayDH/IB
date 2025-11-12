/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file i_th4.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 12 2025
  * @brief a program that, given several test cases, each one composed by an integer number i 
  *        and a sequence of natural numbers x1, x2, …, xn, prints each xi.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P74859_en
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
#include <vector>

int main() {

  int posicion{};
  int numero{};
  bool primer_numero{true};
  std::vector<int> vector{};
  
  while (std::cin >> numero) {

    if (primer_numero) {

      posicion = numero;
      primer_numero = false;
    }

    while (numero != -1) {

      std::cin >> numero;

      vector.push_back(numero);
    }
    
    if (static_cast<int>(vector.size()) < posicion) {

      std::cout << "Incorrect position." << std::endl;
    } else if (posicion == 0 || posicion < 0) {

        std::cout << "Incorrect position." << std::endl;
    } else if (vector[posicion - 1] == -1) {

        std::cout << "Incorrect position." << std::endl;
    } else {

      std::cout << "At the position " << posicion << " there is a(n) " << vector[posicion - 1] << "." << std::endl;
    }

    primer_numero = true;
    posicion = 0;
    vector.clear();
  }

  return 0;
}
