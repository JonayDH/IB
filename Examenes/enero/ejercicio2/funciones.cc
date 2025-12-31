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
#include <fstream>
#include <iostream>

void Binomial(std::string& fichero, int valor1, int valor2) {

  int binomial{};

  std::ofstream archivo{fichero};

  if (!archivo) {

    std::cerr << "No se ha podido leer el fichero" << std::endl;
  } else {

    if (valor1 < valor2) {

      archivo << 0;
      return;
    } 

    if (valor2 <= 0) {

      archivo << 1;
      return;
    }

    binomial = (Factorial(valor1) / (Factorial(valor2) * Factorial(valor1 - valor2)));
  }

  archivo << binomial;
  return;
}

int Factorial(int numero) {

  int factorial{1};

  if (numero == 0) {

    return 1;
  }

  for (int i {1}; i <= numero; i++) {

    factorial *= i;
  }

  return factorial;
}