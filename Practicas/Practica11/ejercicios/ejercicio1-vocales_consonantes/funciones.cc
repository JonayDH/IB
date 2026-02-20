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

  std::cout << "Este programa sirve para buscar la palabra" << std::endl;
  std::cout << "con más consonantes y la palabra con más vocales" << std::endl;
  std::cout << "dentro de un fichero de texto." << std::endl << std::endl;
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
    std::cout << "El programa debe de ser ejecutado de la siguiente forma: " << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << "nombre de un fichero (ejemplo.txt)" << std::endl << std::endl;
    return false;
  }

  return true;
}

/**
  * @brief Esta función calcula la palabra con más vocales y más consonantes de un fichero
  * 
  * @param nombre_fichero Nombre del fichero a analizar
  */   

void MaximoConsonantesVocales(const std::string& nombre_fichero) {

  std::ifstream archivo{nombre_fichero};
  
  if (!archivo) {

    std::cerr << "No se ha podido leer el fichero, compruebe el nombre." << std::endl;
  } else {

    std::string maximo_vocales{};
    std::string maximo_consonantes{};
  
    std::string linea_actual{};
    std::string palabra_actual{};
  
    bool primera_iteracion {true};

    while (std::getline(archivo, linea_actual)) {

      std::istringstream iss(linea_actual);
      std::string palabra_actual{};

      while (iss >> palabra_actual) {

        if (primera_iteracion) {

          maximo_consonantes = palabra_actual;
          maximo_vocales = palabra_actual;
        }

        if (NumeroConsonantes(palabra_actual) > NumeroConsonantes(maximo_consonantes)) {

          maximo_consonantes = palabra_actual;
        }
    
        if (NumeroVocales(palabra_actual) > NumeroVocales(maximo_vocales)) {

          maximo_vocales = palabra_actual;
        }

        primera_iteracion = false;
        palabra_actual.clear();
      }
    }
    
    std::cout << "La palabra que más consonantes tiene en el fichero " << nombre_fichero << " es: " << maximo_consonantes << std::endl;
    std::cout << "La palabra que más vocales tiene en el fichero " << nombre_fichero << " es: " << maximo_vocales << std::endl;
  }
}

/**
  * @brief Función que calcula el número de consonantes de una palabra
  * 
  * @param palabra Palabra a calcular su número de consonantes
  * 
  * @return número de consonantes de la palabra
  */

int NumeroConsonantes(const std::string& palabra) {

  int numero_consonantes{};

  for (char caracter: palabra) {

    if (caracter != 'a' && caracter != 'e' && caracter != 'i' && caracter != 'o' && caracter != 'u' && caracter != 'A' && caracter != 'E' && caracter != 'I' && caracter != 'O' && caracter != 'U') {
      
      numero_consonantes ++;
    }
  }

  return numero_consonantes;
}

/**
  * @brief Función que calcula el número de vocales de una palabra
  * 
  * @param palabra Palabra a calcular su número de vocales
  * 
  * @return número de vocales de la palabra
  */

int NumeroVocales(const std::string& palabra) {

  int numero_vocales{};

  for (char caracter: palabra) {

    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' || caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
      
      numero_vocales ++;
    }
  }

  return numero_vocales;
}