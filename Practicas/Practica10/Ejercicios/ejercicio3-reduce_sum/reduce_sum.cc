/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file reduce_sum.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 16 2025
  * @brief Programa que imprime la suma de todos los elementos de un vector, para generar vectores aleatorios
  *        se usa un intervalo y la cantidad de número a generar.
  *        Dicho intervalo y la cantidad de números a generar es dado por el usuario. 
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p10-string-array-vector-JonayDH/blob/main/string-array-vector.md
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
#include <string>
#include "funciones.h"
#include <vector>

/** 
  * @brief Main function
  *
  * @param argc Numero de parámetros de la linea de comandos
  * @param argv Vector que contiene (char*) los parámetros
  */

int main(int argc, char* argv[]) {

  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 4)) {

    return 1;
  }

  int numero_a_generar{std::stoi(argv[1])};
  double parte_baja_intervalo{std::stod(argv[2])};
  double parte_alta_intervalo{std::stod(argv[3])};

  std::vector<double> vector_generado{GenerateVector(numero_a_generar, parte_baja_intervalo, parte_alta_intervalo)};

  ImprimirValoresVector(vector_generado);
  std::cout << "Suma de los valores del vector: " << SumaValoresVector(vector_generado) << std::endl;

  return 0;
}
