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

  std::cout << "Este programa cuenta en que línea aparece una palabra y cuantas veces sale" << std::endl << std::endl;
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
    std::cout << "param1: " << "nombre del fichero de entrada" << std::endl;
    std::cout << "param2: " << "nombre del fichero de salida" << std::endl;
    std::cout << "param3: " << "palabra a buscar" << std::endl;
    return false;
  }

  return true;
}

/**
  * @brief Esta función cambia las palabras de un documento a otra palabra
  * 
  * @param fichero_entrada nombre del fichero a comprobar
  * @param fichero_salida nombre del fichero a crear
  * @param palabra_sustituir palabra a cambiar
  * @param palabra_reemplazadora palabra con la que sustituir la otra palabra
  */   
 
void ContarLineaPalabra(const std::string& fichero_entrada, const std::string& fichero_salida, const std::string& palabra_sustituir) {

  std::ofstream salida{fichero_salida};
  std::ifstream entrada{fichero_entrada};

  if (!entrada || !salida) {

    std::cerr << "No se ha podido leer alguno de los ficheros, compruebe el nombre." << std::endl;
  } else {

    std::string linea_actual{};
    int numero_linea{1};

    while (std::getline(entrada, linea_actual)) {

      std::istringstream iss(linea_actual);
      std::string palabra_actual{};
      bool sale_palabra{false};
      int numero_palabras{};

      while (iss >> palabra_actual) {

        if (AnalizarPalabra(palabra_actual, palabra_sustituir)) {

          numero_palabras++;
          sale_palabra = true;
        };
      }

      if (sale_palabra) {

        salida << numero_linea << ", " << numero_palabras << std::endl;
      }
      
      numero_linea++;
      numero_palabras = 0;
    }

    std::cout << "Documento creado correctamente" << std::endl;
  }
}

/**
  * @brief Esta función analiza una palabra y comprueba si es igual a la palabra deseada
  * 
  * @param palabra palabra a verificar
  * 
  * @return true si la palabra concuerda con la objetivo false si no
  */

bool AnalizarPalabra(const std::string& palabra_actual, const std::string& palabra_sustituir) {

  if (palabra_actual == palabra_sustituir) {

    return true;
  }

  return false;
}