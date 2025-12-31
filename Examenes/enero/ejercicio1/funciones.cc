/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 31 2025
  * @brief Código de las funciones necesarias
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

int Coincide(std::string& palabra1, std::string& palabra2) {

  int numero_letras{};

  if (palabra1.size() > palabra2.size()) {

    for (int i{}; i < static_cast<int>(palabra2.size()); i++) {

      if (palabra1[i] == palabra2[i]) {

        numero_letras++;
      }
    }
  }
  
  else {

    for (int i{}; i < static_cast<int>(palabra1.size()); i++) {

      if (palabra1[i] == palabra2[i]) {

        numero_letras++;
      }
    }
  }

  return numero_letras;
}