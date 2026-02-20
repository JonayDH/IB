/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file rhombus.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 31 2025
  * @brief a program such that, given a number n, prints a “rhombus of size n”.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P72484_en
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

void ParteArribaRombo(int lineas) {

  int espacios{lineas - 1}; 
  lineas = lineas - 1;
  int asteriscos{1};

  for (int ilineas{}; ilineas < lineas; ilineas++) {

    for (int iespacios{}; iespacios < espacios; iespacios++) {

      std::cout << " ";
    }   

    espacios--;

    for (int iasteriscos{}; iasteriscos < asteriscos; iasteriscos++) {

      std::cout << "*";
    }   

    asteriscos += 2;

    std::cout << std::endl;
  }
}

void ParteMedioRombo(int lineas) {

  int asteriscos{lineas * 2 - 1}; 

  for (int iasteriscos{}; iasteriscos < asteriscos; iasteriscos++) {

    std::cout << "*";
  }

  std::cout << std::endl;
}

void ParteAbajoRombo(int lineas) {

  int asteriscos{lineas * 2 - 3}; 
  lineas -= 1;
  int espacios{1};

  for (int ilineas{}; ilineas < lineas; ilineas++) {

    for (int iespacios{}; iespacios < espacios; iespacios++) {

      std::cout << " ";
    }

    espacios += 1;

    for (int iasteriscos{}; iasteriscos < asteriscos; iasteriscos++) {

      std::cout << "*";
    }

    asteriscos -= 2;

    std::cout << std::endl;
  }
}

int main() {

  int lineas{};
  std::cin >> lineas;

  ParteArribaRombo(lineas);
  ParteMedioRombo(lineas);
  ParteAbajoRombo(lineas);

  return 0;
}
