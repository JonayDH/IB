/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 1 2025
  * @brief Código de las funciones necesarias
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p08-functions-JonayDH/blob/main/functions.md
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
#include <cmath>
#include "funciones.h"

/// Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para calcular el área de un triángulo" << std::endl;
}

/** 
  * Muestra el modo de uso correcto del programa
  * En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
  * la ejecución del programa.
  *
  * @param[in] argc Numero de parámetros de la linea de comandos
  * @param[in] argv Vector que contiene (char*) los parámetros
  * @param[in] kCorrectNumber Número esperado de parámetros.
  * @return true si argc es igual a kCorrectNumber, false en caso contrario.
  */

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {

  if (argc != kCorrectNumber) {

    std::cout << "El número de parámetros introducido es incorrecto:" << std::endl << std::endl;
    std::cout << "El programa debe de ser ejecutado de la siguiente forma: " << argv[0] << " param1 param2 param3" << std::endl;
    std::cout << "param1: " << "número real." << std::endl;
    std::cout << "param2: " << "número real." << std::endl;
    std::cout << "param3: " << "número real." << std::endl;
    return false;
  }

  return true;
}

/**
  * Calcula el área de un triángulo
  *
  * @param[in] numero1 Número real
  * @param[in] numero2 Número real
  * @param[in] numero3 Número real
  */

void Area(double numero1, double numero2, double numero3) {

  double area{};
  double area_sin_raiz{};
  double semiperimetro{};

  semiperimetro =  (0.5) * (numero1 + numero2 + numero3);
  area_sin_raiz = (semiperimetro * (semiperimetro - numero1) * (semiperimetro - numero2) * (semiperimetro - numero3));
  area = sqrt(area_sin_raiz);
  
  std::cout << area << std::endl;
}

/**
  * Verifica si el triangulo es válido y en caso de que lo sea llama a la función area
  *
  * @param[in] numero1 Número real
  * @param[in] numero2 Número real
  * @param[in] numero3 Número real
  */

bool IsAValidTriangle(double numero1, double numero2, double numero3) {

  double lado_grande{};

  if ((numero1 < 0) || (numero2 < 0) || (numero3 < 0)) {

    return false;
  }

  if (numero1 > numero2) {

    lado_grande = numero1;
    if (numero1 > numero3) {

      lado_grande = numero1;
    } else { 
    
      lado_grande = numero3;
    }
  } else {

    lado_grande = numero2;

    if (numero2 > numero3) {

      lado_grande = numero2;
    } else {

      lado_grande = numero3;
    }
  }

  if (lado_grande <= (numero1 + numero2 + numero3 - lado_grande)) {

    return true;
  } else {

    return false;
  }
}
