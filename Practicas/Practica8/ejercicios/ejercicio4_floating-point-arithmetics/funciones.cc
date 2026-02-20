/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 1 2025
  * @brief Código de las funciones necesarias
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
#include <cmath>

/// Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para comprobar si dos números son iguales o no" << std::endl;
}

/** 
  * Muestra el modo de uso correcto del programa
  * En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
  * la ejecución del programa.
  *
  * @param[in] argc Numero de parámetros de la linea de comandos
  * @param[in] argv Vector que contiene (char*) los parámetros
  * @param[in] kCorrectNumber Número esperado de parámetros.
  * @return true si argc es igual a kCorrectNumber, false en caso contrario.
  */

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {

  if (argc != kCorrectNumber) {

    std::cout << "El número de parámetros introducido es incorrecto:" << std::endl << std::endl;
    std::cout << "El programa debe de ser ejecutado de la siguiente forma: " << argv[0] << " param1 param2" << std::endl;
    std::cout << "param1: " << "número real." << std::endl;
    std::cout << "param2: " << "número real." << std::endl;
    return false;
  }

  return true;
}

/**
  * Muestra si dos números son iguales o no
  * usando epsilon como comparador
  *
  * @param[in] number1 número real
  * @param[in] number2 número real
  * @param[in] epsilon comparador
  * @return true si number1 y number2 son aproximadamente iguales según epsilon, false en caso contrario.
  */

bool AreEqual(double number1, double number2, const double epsilon) {

  if(std::fabs(number1 - number2) < epsilon) {
    
    return true;
  } else {

    return false;
  }
}  
