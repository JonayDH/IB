/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file triangle-area.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 1 2025
  * @brief Este programa calcula el área de un triángulo
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p08-functions-JonayDH/blob/main/functions.md
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

/** 
  * Main function
  *
  * @param[in] argc Numero de parámetros de la linea de comandos
  * @param[in] argv Vector que contiene (char*) los parámetros
  */

int main(int argc, char* argv[]) {

  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 4)) {

    return 1;
  }

  double numero1{std::stod(argv[1])};
  double numero2{std::stod(argv[2])};
  double numero3{std::stod(argv[3])};

  if (!IsAValidTriangle(numero1, numero2, numero3)) {

    std::cout << "Not a valid Triangle" << std::endl;
    return 2;
  }

  Area (numero1, numero2, numero3);

  return 0;
}
