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

  std::cout << "Este programa sirve para evaluar un polinomio en un determinado número." << std::endl;
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
    std::cout << "param2: " << "número" << std::endl;
    return false;
  }

  return true;
}

/**
  * Esta función transforma una cadena de texto que contiene
  * número y comas (1,2,3,4,5...) y lo transforma en un vector
  *
  * @param cadena Cadena de texto a transformar a un vector
  *
  * @return vector Vector de número que contenía la cadena
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
  * Esta función evalua un polinomio dado por un vector en un valor llamado value
  *
  * @param vector_coefficients Vector que contiene los coeficientes del polinomio
  * @param value Valor en donde evaluar el polinomio
  *
  * @return resultado_evaluacion Resultado de la evaluación (número real)
  */

double EvaluarPolinomio(std::vector<double>& vector_coefficients, double value) {

  double resultado_evaluacion{vector_coefficients[0]};

  for (int i {1}; i < static_cast<int>(vector_coefficients.size()); i++) {

    resultado_evaluacion = resultado_evaluacion * value + vector_coefficients[i];
  }

  return resultado_evaluacion;
}
