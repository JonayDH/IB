/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file main.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 31 2025
  * @brief Descripción de lo que hace el programa  
  * @bug There are no known bugs
  * @see link
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

  std::string fichero{argv[1]};
  int valor1{std::stoi(argv[2])};
  int valor2{std::stoi(argv[3])};

  Binomial(fichero, valor1, valor2);

  std::cout << "Se ha agregado correctamente" << std::endl;
}