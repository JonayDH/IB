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
#include <vector>
#include <string>
#include <sstream>
#include "funciones.h"

/// Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para calcular el producto escalar de dos vectores " << std::endl;
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
    std::cout << "El programa debe de ser ejecutado de la siguiente forma: " << argv[0] << " param1 param2" << std::endl;
    std::cout << "param1: " << "vector de numeros" << std::endl;
    std::cout << "param2: " << "vector de numeros" << std::endl;
    return false;
  }

  return true;
}

/**
  * Esta función convierte una cadena de caracteres de números separados por comas
  * (1,2,3,4,5...) en un vector de números reales
  *
  * @param cadena Cadena a convertir
  *
  * @return vector Vector de números reales extraídos de la cadena
  */

std::vector<double> TextoAVector(std::string& cadena) {
    
  std::vector<double> vector;
  std::stringstream ss(cadena);
  std::string numero_texto;

  while (std::getline(ss, numero_texto, ',')) {

      vector.push_back(std::stod(numero_texto));
    }

    return vector;
}

/**
  * Esta función calcula el producto escalar de dos vectores
  *
  * @param vector1 Vector de números reales
  * @param vector2 Vector de número reales
  *
  * @return Devuelve el producto escalar de los dos vectores y si los vectores no tienen el mismo tamaño da un error y devuelve 0
  */

double ScalarProduct(std::vector<double>& vector1, std::vector<double>& vector2) {

  double producto_escalar{};

  if (static_cast<int>(vector1.size()) != static_cast<int>(vector2.size())) {

    std::cout << "Los vectores no tienen el mismo tamaño" << std::endl;
    return 0;
  }

  for (int i{}; i < static_cast<int>(vector1.size()); i++) {

    producto_escalar += vector1[i] * vector2[i];
  }

  return producto_escalar;
}
