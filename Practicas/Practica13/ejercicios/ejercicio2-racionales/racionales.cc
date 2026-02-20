/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file racionales.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 6 2025
  * @brief Este programa hace operaciones con racionales 
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p13-oop-JonayDH/blob/main/README.md
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
#include "racional.h"

/** 
  * @brief Main function
  *
  * @param argc Numero de parámetros de la linea de comandos
  * @param argv Vector que contiene (char*) los parámetros
  */

int main(int argc, char* argv[]) {

  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {

    std::string aux{};

    if (argc > 1) {

      aux = argv[1];
    }

    if ((aux == "--help") && (argc == 2)) {

      PrintAyuda();
    }

    return 1;
  }

  std::string archivo_entrada{argv[1]};
  std::string archivo_salida{argv[2]};

  LeerRacionales(archivo_entrada, archivo_salida);

  return 0;
}

