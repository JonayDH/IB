/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 26 2025
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

/// @brief Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa crea un fichero con los números pares y otro con los impares" << std::endl << std::endl;
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
    std::cout << "param1: " << "nombre del fichero a leer (fichero1.txt)" << std::endl;
    std::cout << "param2: " << "nombre fichero a guardar los pares" << std::endl; 
    std::cout << "param3: " << "nombre fichero a guardar los impares" << std::endl << std::endl;
    return false;
  }

  return true;
}

/**
  * @brief Esta función comprueba un fichero con números y escribe en ficheros separados los números pares y los impares
  * 
  * @param fichero_entrada nombre del fichero a comprobar
  * @param fichero_pares nombre del fichero que contendra los pares
  * @param fichero_impares nombre del fichero que contendra los impares
  */   
 
void ParesImpares(const std::string& fichero_entrada, const std::string& fichero_pares, const std::string& fichero_impares) {

  std::ofstream salida_pares(fichero_pares);
  std::ofstream salida_impares(fichero_impares);
  std::ifstream entrada{fichero_entrada};

  if (!entrada || !salida_pares || !salida_impares) {

    std::cerr << "No se ha podido leer alguno de los ficheros, compruebe el nombre." << std::endl;
  } else {

    std::string linea_actual{};

    while (std::getline(entrada, linea_actual)) {

      std::istringstream iss(linea_actual);
      std::string palabra_actual{};

      while (iss >> palabra_actual) {

        if (EsPar(palabra_actual)) {
          salida_pares << palabra_actual << std::endl;
        }

        if (EsImpar(palabra_actual)) {
          salida_impares << palabra_actual << std::endl;
        }
      }
    }

    std::cout << "Documento creado correctamente" << std::endl;
  }
}

/**
  * @brief Función que comprueba si un número es par
  * 
  * @param palabra palabra a transformar a número y comprobar
  * 
  * @return true si es par, false si no
  */

bool EsPar(const std::string& palabra) {

  int numero_palabra{std::stoi(palabra)};

  if ((numero_palabra % 2) == 0) {

    return true;
  }

  return false;
}

/**
  * @brief Función que comprueba si un número es impar
  * 
  * @param palabra palabra a transformar a número y comprobar
  * 
  * @return true si es impar, false si no
  */

bool EsImpar(const std::string& palabra) {

  int numero_palabra{std::stoi(palabra)};

  if ((numero_palabra % 2) != 0) {

    return true;
  }

  return false;
}