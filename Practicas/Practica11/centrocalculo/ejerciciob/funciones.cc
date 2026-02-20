/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 28 2025
  * @brief Código de las funciones necesarias
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p11-files-JonayDH/blob/main/files.md
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
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

/// @brief Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa cuenta cuantas veces sale una palabra" << std::endl << std::endl;
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
    std::cout << "El programa debe de ser ejecutado de la siguiente forma: " << argv[0] << " param1 param2" << std::endl;
    std::cout << "param1: " << "nombre del fichero de entrada" << std::endl;
    std::cout << "param2: " << "palabra a buscar" << std::endl << std::endl;
    return false;
  }

  return true;
}

/**
  * @brief Esta funcion imprime por pantalla el número de veces que sale un palabra
  * 
  * @param fichero_entrada nombre del fichero a comprobar
  * @param fichero_salida nombre del fichero a crear
  * @param palabra_sustituir palabra a buscar
  */   
 
void ContarPalabra(const std::string& fichero_entrada, const std::string& palabra_buscar) {

  std::ifstream entrada{fichero_entrada};

  if (!entrada) {

    std::cerr << "No se ha podido leer el fichero, compruebe el nombre." << std::endl;
  } else {

    std::string linea_actual{};
    int numero_palabras{};

    while (std::getline(entrada, linea_actual)) {

      std::istringstream iss(linea_actual);
      std::string palabra_actual{};

      while (iss >> palabra_actual) {

        if (AnalizarPalabra(palabra_actual, palabra_buscar)) {

          numero_palabras++;
        };
      }
    }

    std::cout << numero_palabras << std::endl;
  }
}

/**
  * @brief Esta función analiza una palabra y comprueba si es igual a la palabra deseada
  * 
  * @param palabra palabra a verificar
  * 
  * @return true si la palabra concuerda con la objetivo false si no
  */

bool AnalizarPalabra(const std::string& palabra_actual, const std::string& palabra_buscar) {

  if (palabra_actual == palabra_buscar) {

    return true;
  }

  return false;

}
