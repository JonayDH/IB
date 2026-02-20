/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 22 2025
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

  std::cout << "Este programa sirve para generar un fichero nuevo a partir de otro con las vocales rotadas" << std::endl << std::endl;
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
    std::cout << "param1: " << "nombre del fichero a rotar (fichero1.txt)" << std::endl;
    std::cout << "param2: " << "nombre del fichero a guardar los cambios (fichero2.txt)" << std::endl << std::endl;
    return false;
  }

  return true;
}

/**
  * @brief Esta función rota las vocales del fichero de entrada y coloca las palabras rotadas en el fichero de salida
  * 
  * @param fichero_entrada nombre del fichero a rotar
  * @param fichero_salida nombre del fichero a guardas las rotaciones
  */   
 
void RotarFichero(const std::string& fichero_entrada, const std::string& fichero_salida) {

  std::ifstream entrada{fichero_entrada};
  std::ofstream salida{fichero_salida};

  if (!entrada || !salida) {

    std::cerr << "No se ha podido leer alguno de los ficheros, compruebe el nombre." << std::endl;
  } else {

    std::string linea_actual{};

    while (std::getline(entrada, linea_actual)) {

      salida << RotarLinea(linea_actual);
      salida << std::endl;
    }

    std::cout << "Rotación realizada con éxito." << std::endl;
  }
}

/**
  * @brief Función que rota las vocales de una palabra
  * 
  * @param linea línea a rotar
  * 
  * @return línea rotada
  */

std::string RotarLinea(const std::string& linea) {

  std::string linea_rotada{};

  for (char caracter: linea) {

    if (caracter == 'a') {
      linea_rotada.push_back('e');
    } else if (caracter == 'e') {

      linea_rotada.push_back('i');
    } else if (caracter == 'i') {

      linea_rotada.push_back('o');
    } else if (caracter == 'o') {

      linea_rotada.push_back('u');
    } else if (caracter == 'u') {

      linea_rotada.push_back('a');
    } else {

      linea_rotada.push_back(caracter);
    }
  
  }

  return linea_rotada;
}