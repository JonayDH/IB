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

  std::cout << "Este programa sirve para calcular una determinada operación matemática:" << std::endl;
  std::cout << "(raiz cuadrada de(2*numero3) - 4) / ((numero1*numero1) - (numero2*numero2))" << std::endl << std::endl;
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
    std::cout << "El programa debede ser ejecutado de la siguiente forma: " << argv[0] << " param1 param2 param3" << std::endl;
    std::cout << "param1: " << "número real." << std::endl;
    std::cout << "param2: " << "número real." << std::endl;
    std::cout << "param3: " << "número real." << std::endl;
    return false;
  }

  return true;
}

/** 
  * Muestra el resultado de una operacion matemática:
  * (raiz cuadrada de(2*numero3) - 4) / ((numero1*numero1) - (numero2*numero2))
  *
  * @param[in] numero1 Primer número introducido.
  * @param[in] numero2 Segundo número introducido.
  * @param[in] numero3 Tercer número introducido.
  */

void OperacionMatematica(double numero1, double numero2, double numero3) {

  double resultado{};
  double numerador{};
  double denominador{};

  numerador = sqrt((2 * numero3) - 4);
  denominador = ((numero1 * numero1) - (numero2 * numero2));
  resultado = numerador / denominador;

  std::cout << resultado << std::endl;
}
