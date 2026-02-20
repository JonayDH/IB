/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file fecha.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 29 2025
  * @brief Este programa sirve para leer fechas de un fichero y devolver las válidas en otro distinto
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p12-intro-oop-JonayDH/blob/main/intro-oop.md
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  */

#include "funciones.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    
    return 1;
  }

  std::string archivo_entrada{argv[1]};
  std::string archivo_salida{argv[2]};

  LeerFechas(archivo_entrada, archivo_salida);

  return 0;
}