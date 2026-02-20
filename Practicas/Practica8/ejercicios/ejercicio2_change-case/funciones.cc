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

/// Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para transformar mayúsculas en minúsculas y viceversa" << std::endl;
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
    std::cout << "El programa debede ser ejecutado de la siguiente forma: " << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << "cadena de caracteres sin espacios." << std::endl;
    return false;
  }

  return true;
}

/**
  * Si el carácter es una letra mayúscula, la convierte a minúscula; si es
  * una minúscula, la convierte a mayúscula. Si no es una letra, lo imprime
  * sin cambios.
  *
  * @param[in] caracter Carácter a transformar.
  */

void IntercambioCaracteres(char caracter) {

  int caracter_ascii{};
  char caracter_nuevo{};  

  caracter_ascii = static_cast<int>(caracter);

  if (caracter_ascii >= 65 && caracter_ascii <= 90) {

    caracter_ascii += 32;
    caracter_nuevo = static_cast<char>(caracter_ascii);

    std::cout << caracter_nuevo;
  } else if (caracter_ascii >= 97 && caracter_ascii <= 122) {

    caracter_ascii -= 32;
    caracter_nuevo = static_cast<char>(caracter_ascii);

    std::cout << caracter_nuevo;
  } else {

    std::cout << caracter;
  }
}  

/**
  * Procesa la cadena carácter a carácter llamando a IntercambioCaracteres.
  *
  * @param[in] cadena_caracteres Cadena de caracteres.
  */

void SeparadorCaracteres(std::string& cadena_caracteres) {

  for(char caracter: cadena_caracteres) {

    IntercambioCaracteres(caracter);
  }

  std::cout << std::endl;
}
