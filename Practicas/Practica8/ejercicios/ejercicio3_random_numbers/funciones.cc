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

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "funciones.h"

/// Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para dar un número dentro de un intervalo" << std::endl;
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
    std::cout << "param2: " << "número real más grande." << std::endl;
    return false;
  }

  return true;
}

/**
  * Comprueba si el intervalo es correcto o no
  *
  * @param[in] numero1 número real
  * @param[in] numero2 número real
  * @return true si es correcto false si no
  */

bool IntervalIsCorrect(double numero1, double numero2) {

  if (numero1 > numero2) {

    return false;
  } else {

    return true;
  }
}

/**
  * Le da la vuelta al intervalo para que sea correcto
  *
  * @param[in] numero1 número real
  * @param[in] numero2 número real
  */

void CorregirIntervalo(double numero1, double numero2) {

  double aux{numero1};

  numero1 = numero2;
  numero2 = aux;

  RandomNumber(numero1, numero2);
}

/**
  * Escoge un número aleatorio entre numero1 y numero2
  *
  * @param[in] numero1 número real
  * @param[in] numero2 número real
  */

void RandomNumber(double numero1, double numero2) {

  std::srand(std::time({}));

  double numero_aleatorio{};
  double aleatorio{static_cast<double>(std::rand()) / RAND_MAX};

  numero_aleatorio = numero1 + aleatorio * (numero2 - numero1);  
  std::cout << numero_aleatorio << std::endl;
}
