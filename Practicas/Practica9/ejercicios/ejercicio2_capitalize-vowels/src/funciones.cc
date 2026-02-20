/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 9 2025
  * @brief Código de las funciones necesarias
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p09-functions-JonayDH/blob/main/functions.md
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
#include <string>
#include "funciones.h"

/// Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para transformar una cadena de caracteres." << std::endl;
  std::cout << "De forma que las vocales sean mayúsculas y las consonantes minúsculas." << std::endl;
}

/** 
  * Muestra el modo de uso correcto del programa
  * En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
  * la ejecución del programa.
  *
  * @param argc Numero de parámetros de la linea de comandos
  * @param argv Vector que contiene (char*) los parámetros
  * @param kCorrectNumber Número esperado de parámetros.
  * @return true si argc es igual a kCorrectNumber, false en caso contrario.
  */

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {

  if (argc != kCorrectNumber) {

    std::cout << "El número de parámetros introducido es incorrecto:" << std::endl << std::endl;
    std::cout << "El programa debe de ser ejecutado de la siguiente forma: " << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << "cadena de caracteres" << std::endl;
    return false;
  }

  return true;
}

/**
  * Esta función cambia las vocales a mayúsculas y las consonantes a minúscula
  *
  * @param cadena_caracteres Cadena de caracteres a transformar
  */

void CapitalizeVowels(std::string& cadena_caracteres) {

  for (char letra: cadena_caracteres) {

    int letra_ascii{static_cast<int>(letra)};

    if (letra_ascii == 97 || letra_ascii == 101 || letra_ascii == 105 || letra_ascii == 111 || letra_ascii == 117) {

      letra_ascii -= 32;
      letra = static_cast<char>(letra_ascii);

      std::cout << letra;
    } else if (letra_ascii == 65 || letra_ascii == 69 || letra_ascii == 73 || letra_ascii == 79 || letra_ascii == 85) {

      std::cout << letra;
    } else if (letra_ascii > 65 && letra_ascii < 91) {

      letra_ascii += 32;
      letra = static_cast<char>(letra_ascii);

      std::cout << letra;
    } else {

      std::cout << letra;
    }
  }

  std::cout << std::endl;
}
