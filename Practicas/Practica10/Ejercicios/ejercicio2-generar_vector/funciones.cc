/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 16 2025
  * @brief Código de las funciones necesarias
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
#include "funciones.h"
#include <vector>
#include <random>

/// @brief Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para generar vectores aleatorios" << std::endl;
}

/** 
  * @brief Muestra el modo de uso correcto del programa
  *        En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
  *        la ejecución del programa.
  *
  * @param argc Numero de parámetros de la linea de comandos
  * @param argv Vector que contiene (char*) los parámetros
  * @param kCorrectNumber Número esperado de parámetros.
  * @return true si argc es igual a kCorrectNumber, false en caso contrario.
  */

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {

  if (argc != kCorrectNumber) {

    std::cout << "El número de parámetros introducido es incorrecto:" << std::endl << std::endl;
    std::cout << "El programa debe de ser ejecutado de la siguiente forma: " << argv[0] << " param1 param2 param3" << std::endl;
    std::cout << "param1: " << "número de números a generar." << std::endl;
    std::cout << "param2: " << "número real." << std::endl;
    std::cout << "param3: " << "número real más grande." << std::endl;
    return false;
  }

  return true;
}

/**
  * @brief Esta función genera un vector con size números aleatorios desde lower hasta upper
  *
  * @param size Cantidad de números que se van a generar en el vector
  * @param lower Parte inferior del intervalo a generar
  * @param upper Parte superior del intervalo a generar
  *
  * @return un vector con los números generados aleatoriamente entre lower y upper
  */

std::vector<double> GenerateVector(int size, double lower, double upper) {

  std::vector<double> vector_generado{};

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<> dis(lower, upper);

  for (int n{}; n < size; ++n) {

    vector_generado.push_back(dis(gen));
  }

  return vector_generado;
}
