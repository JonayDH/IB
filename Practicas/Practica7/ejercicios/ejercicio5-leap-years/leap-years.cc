/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file leap-years.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 26 2025
  * @brief Comprueba si un año en bisiesto o no
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p07-iterations-JonayDH/tree/main
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
#include "funciones.h"

int main(int argc, char* argv[]) {

  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {

    return 1;
  }

  int year{std::stoi(argv[1])};
  if (IsLeap(year)) {
    
    std::cout << "YES" << std::endl;
  } else {

    std::cout << "NO" << std::endl;
  }

  return 0;
}
