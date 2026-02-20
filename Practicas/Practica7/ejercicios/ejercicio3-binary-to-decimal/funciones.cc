/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 30 2025
  * @brief Código de las funciones necesarias
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
#include <cmath>
#include "funciones.h"

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para transformar números binarios a decimal" << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {

  if (argc != kCorrectNumber) {

    std::cout << "El número de parámetros introducido es incorrecto:" << std::endl << std::endl;
    std::cout << "El programa debede ser ejecutado de la siguiente forma: " << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << "Número escrito en binario." << std::endl;
    return false;
  }

  return true;
}

void BinaryToDecimal(int binario) {

  int exponencial{};
  int decimal{};
  
  if ((binario < 10) && (binario != 0 && binario != 1)) {

    std::cout << "Wrong Input" << std::endl;
    return;
  }

  while (binario != 0) {

    if (((binario % 10) != 1) && ((binario % 10) != 0)) {
    
      std::cout << "Wrong Input" << std::endl;;
      return;
    }   

    decimal += ((binario % 10) * std::pow(2, exponencial));
    exponencial ++; 
    binario /= 10; 
  }
  
  std::cout << "El número binario en decimal es: " << decimal << std::endl;
}
