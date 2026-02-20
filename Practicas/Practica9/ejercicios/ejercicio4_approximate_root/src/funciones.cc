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
#include "funciones.h"

/// Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para calcular la raiz de un número" << std::endl;
  std::cout << "con una precisión de 1e-4" << std::endl;
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
    std::cout << "param1: " << "numero mayor que 0" << std::endl;
    return false;
  }

  return true;
}

/**
  * Esta función calcula si dos números tienen el mismo signo
  *
  * @param numero1 Número real
  * @param numero2 Número real
  *
  * @return true si numero1 y numero2 tienen el mismo signo, false si no
  */

bool IgualSigno(double numero1, double numero2) {

  if (numero1 == 0 && numero2 == 0) {

    return true;
  }

  if (numero1 < 0 && numero2 < 0) {
  
    return true;
  } else if (numero1 > 0 && numero2 > 0) {
  
    return true;
  } else {
    
    return false;
  }
}

/**
  * Esta función calcula el valor absoluto de un numero
  * multiplicando por -1 en caso de que el número sea negativo
  *
  * @param numero Número a calcular el valor absoluto
  *
  * @return numero si numero es mayor que 0 o numero * -1 si numero es menor que 0
  */

double ValorAbsoluto(double numero) {

  if (numero < 0) {

    return (numero * (-1.0));
  } else {

    return numero;
  }
}
 
/**
  * Esta función aproxima la raiz de un número con un error de 1e-4 
  * 
  * @param numero Número al que calcular su raiz
  * @param kErrorMaximo Error de referencia para calcular la raiz
  *
  * @return resultado_raiz Que es la raiz de numero con un error de kErrorMaximo
  */

double ApproximateRoot(double numero, const double kErrorMaximo) {

  double incremento{1.0};
  double resultado_raiz{1.0};

  while (ValorAbsoluto((resultado_raiz * resultado_raiz) - numero) > kErrorMaximo) {

    while (IgualSigno(incremento, ((resultado_raiz * resultado_raiz) - numero))) {

      resultado_raiz += incremento;
    }

    incremento *= -0.5;
  }

  return ValorAbsoluto(resultado_raiz);
}  
