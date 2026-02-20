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

  std::cout << "Este programa sirve para cifrar un fichero con un cierto indice." << std::endl;
  std::cout << "Para descifrar un archivo se debe poner el número con el signo contrario al que se introdujo al cifrarlo." << std::endl << std::endl;
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
    std::cout << "param1: " << "nombre del fichero a cifrar (fichero1.txt)" << std::endl;
    std::cout << "param2: " << "nombre del fichero cifrado (fichero2.txt)" << std::endl;
    std::cout << "param3: " << "indice de cifrado (numero entero)" << std::endl;
    return false;
  }

  return true;
}

/**
  * @brief Esta función crea un fichero cifrado a partir de otro usando un indice de cifrado dado por el usuario
  * 
  * @param fichero_entrada nombre del fichero a cifrar
  * @param fichero_salida nombre del fichero cifrado
  * @param indice_cifrado índice de cifrado
  */   
 
void CifrarFichero(const std::string& fichero_entrada, const std::string& fichero_salida, const int indice_cifrado) {

  std::ifstream entrada{fichero_entrada};
  std::ofstream salida{fichero_salida};

  if (!entrada || !salida) {

    std::cerr << "No se ha podido leer alguno de los ficheros, compruebe el nombre." << std::endl;
  } else {

    std::string linea_actual{};

    while (std::getline(entrada, linea_actual)) {

      salida << CifrarLinea(linea_actual, indice_cifrado);
      salida << std::endl;
    }

    std::cout << "Cifrado realizado con éxito." << std::endl;
    std::cout << "Recuerde que para quitarle el cifrado tiene que introducir el número" << std::endl;
    std::cout << "con el signo contrario al que lo introdujo ahora." << std::endl;
  }
}

/**
  * @brief Función que cifra una linea con un indice de cifrado determinado
  * 
  * @param linea Línea a cifrar
  * @param indice_cifrado Indice de cifrado
  * 
  * @return Línea cifrada
  */

std::string CifrarLinea(const std::string& linea, const int indice_cifrado) {

  std::string linea_cifrada{};

  for (char caracter: linea) {

    int ascii_caracter{static_cast<int>(caracter)};
    int ascii_cifrado{ascii_caracter + indice_cifrado};
    char caracter_cifrado{static_cast<char>(ascii_cifrado)};

    linea_cifrada.push_back(caracter_cifrado);
  
  }

  return linea_cifrada;
}