/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file scalar_product.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 9 2025
  * @brief Este programa calcula el producto escalar de dos vectores
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p09-functions-JonayDH/blob/main/functions.md
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
#include <vector>
#include <string>

/** 
  * Main function
  *
  * @param argc Numero de parámetros de la linea de comandos
  * @param argv Vector que contiene (char*) los parámetros
  */

int main(int argc, char* argv[]) {

  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {

    return 1;
  }

  std::string cadena_vector1{argv[1]};
  std::string cadena_vector2{argv[2]};

  std::vector<double> vector1{TextoAVector(cadena_vector1)};
  std::vector<double> vector2{TextoAVector(cadena_vector2)};
  
  std::cout << ScalarProduct(vector1, vector2) << std::endl;

  return 0;
}

