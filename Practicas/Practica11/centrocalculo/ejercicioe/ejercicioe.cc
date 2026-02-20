/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file ejercicioe.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 28 2025
  * @brief Este programa cuenta en que línea aparece una palabra y cuantas veces sale
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p11-files-JonayDH/blob/main/files.md
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

  std::string fichero_entrada{argv[1]};
  std::string fichero_salida{argv[2]};
  std::string palabra_sustituir{argv[3]};

  ContarLineaPalabra(fichero_entrada, fichero_salida, palabra_sustituir);

  return 0;
}