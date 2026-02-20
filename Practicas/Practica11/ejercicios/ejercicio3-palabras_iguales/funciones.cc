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

  std::cout << "Este programa crea un fichero con todas las palabras que empiezen por una letra designada por el usuario" << std::endl << std::endl;
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
    std::cout << "param2: " << "letra de referencia para verificar las palabras ('a','b'...)" << std::endl << std::endl;
    return false;
  }

  return true;
}

/**
  * @brief Esta función comprueba que palabras de un fichero empiezan por x letra, ya sea en mayúscula o en minúscula y lo escribe en otro fichero
  * 
  * @param fichero_entrada nombre del fichero a comprobar
  * @param letra letra a comparar
  */   
 
void PalabrasIguales(const std::string& fichero_entrada, const char letra) {

  std::string letra_texto{letra};
  std::string nombre_fichero_salida{letra_texto + ".txt"};

  std::ofstream salida{nombre_fichero_salida};
  std::ifstream entrada{fichero_entrada};

  if (!entrada || !salida) {

    std::cerr << "No se ha podido leer alguno de los ficheros, compruebe el nombre." << std::endl;
  } else {

    std::string linea_actual{};

    while (std::getline(entrada, linea_actual)) {

      std::istringstream iss(linea_actual);
      std::string palabra_actual{};

      while (iss >> palabra_actual) {

        if (CoincideConChar(palabra_actual, letra)) {
          salida << palabra_actual << std::endl;
        }
      }
    }

    std::cout << "Documento creado correctamente" << std::endl;
  }
}

/**
  * @brief Función que transforma cualquier letra en mayúscula
  * 
  * @param letra letra a transformar
  * 
  * @return letra en mayúscula
  */

char Mayuscula(const char letra) {

  int codigo_ascii{static_cast<int>(letra)};

  if (codigo_ascii < 97) {

    return letra;
  } else {

    return static_cast<char>(codigo_ascii - 32);
  }
}

/**
  * @brief Función que transforma cualquier letra en minúscula
  * 
  * @param letra letra a transformar
  * 
  * @return letra en minúscula 
  */

char Minuscula(const char letra) {

  int codigo_ascii{static_cast<int>(letra)};

  if (codigo_ascii >= 97) {

    return letra;
  } else {

    return static_cast<char>(codigo_ascii + 32);
  }
}

/**
  * @brief Función que comprueba si la primera letra de una palabra concuerda con el caracter, ya sea en minúscula o en mayúscula
  * 
  * @param palabra palabra a extraer la primera letra
  * @param letra letra a comparar con la palabra
  * 
  * @return true si coincide, false si no
  */

bool CoincideConChar(const std::string& palabra, const char letra) {

  bool primera_iteracion(true);

  for (char caracter: palabra) {

    if (primera_iteracion) {

      if (Mayuscula(caracter) == letra || Minuscula(caracter) == letra) {

        return true;
      }
    }

    return false;
  }

  return false;
}