/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file complejo.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 29 2025
  * @brief Código de las funciones necesarias
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p12-intro-oop-JonayDH/blob/main/intro-oop.md
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
#include "complejo.h"

/// @brief Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa hace operaciones con complejos" << std::endl << std::endl;
}

/**
  * @brief Constructor de la clase Complejo.
  *
  * @param real Parte real del número complejo.
  * @param imaginario Parte imaginaria del número complejo.
  */

Complejo::Complejo(double real, double imaginario) : real_(real), imaginario_(imaginario) {}

/**
  * @brief Función que duelve la parte real de un complejo
  * 
  * @return parte real 
  */
 
double Complejo::ParteReal() const{

  return real_;
}

/**
  * @brief Función que duelve la parte imaginaria de un complejo
  * 
  * @return parte imaginaria
  */

double Complejo::ParteImaginaria() const{

  return imaginario_;
}

/**
  * @brief Sobrecarga del operador + para sumar numeros complejos
  *  
  * @return numero complejo sumado
  */

Complejo operator+(const Complejo& complejo1, const Complejo& complejo2) {

  double real_nuevo{complejo1.ParteReal() + complejo2.ParteReal()};
  double imaginario_nuevo{complejo1.ParteImaginaria() + complejo2.ParteImaginaria()};
  Complejo complejo_nuevo(real_nuevo, imaginario_nuevo);

  return complejo_nuevo;
}

/**
  * @brief Sobrecarga del operador - para restar numeros complejos
  *  
  * @return numero complejo restado
  */

Complejo operator-(const Complejo& complejo1, const Complejo& complejo2) {

  double real_nuevo{complejo1.ParteReal() - complejo2.ParteReal()};
  double imaginario_nuevo{complejo1.ParteImaginaria() - complejo2.ParteImaginaria()};
  Complejo complejo_nuevo(real_nuevo, imaginario_nuevo);

  return complejo_nuevo;
}

/**
  * @brief Sobrecarga del operador * para multiplicar numeros complejos
  *  
  * @return numero complejo multiplicado
  */ 

Complejo operator*(const Complejo& complejo1, const Complejo& complejo2) {

  double real_nuevo{complejo1.ParteReal() * complejo2.ParteReal() - complejo1.ParteImaginaria() * complejo2.ParteImaginaria()};
  double imaginario_nuevo{complejo1.ParteReal() * complejo2.ParteImaginaria() + complejo1.ParteImaginaria() * complejo2.ParteReal()};
  Complejo complejo_nuevo(real_nuevo, imaginario_nuevo);

  return complejo_nuevo;
}

/**
  * @brief Sobrecarga del operador / para dividir numeros complejos
  *  
  * @return numero complejo dividido
  */

Complejo operator/(const Complejo& complejo1, const Complejo& complejo2) {

  double denominador{complejo2.ParteReal() * complejo2.ParteReal() + complejo2.ParteImaginaria() * complejo2.ParteImaginaria()};
  double real_nuevo{(complejo1.ParteReal() * complejo2.ParteReal() + complejo1.ParteImaginaria() * complejo2.ParteImaginaria()) / denominador};
  double imaginario_nuevo{(complejo1.ParteImaginaria() * complejo2.ParteReal() - complejo1.ParteReal() * complejo2.ParteImaginaria()) / denominador};
  Complejo complejo_nuevo(real_nuevo, imaginario_nuevo);

  return complejo_nuevo;
}

/**
  * @brief Sobrecarga del operador << para imprimir números complejos
  *
  * @param os Flujo de salida
  * @param complejo Número complejo a imprimir
  * @return Flujo de salida
  */

std::ostream& operator<<(std::ostream& os, const Complejo& complejo) {

  os << complejo.ParteReal();

  if (complejo.ParteImaginaria() >= 0) {

    os << " + " << complejo.ParteImaginaria() << "i";
  } else {

    os << " - " << -complejo.ParteImaginaria() << "i";
  }

  return os;
}

/**
  * @brief Sobrecarga del operador >> para leer un número complejo
  *
  * @param is Flujo de entrada
  * @param complejo Número complejo
  * @return Flujo de entrada
  */

std::istream& operator>>(std::istream& is, Complejo& complejo) {

  double real{}, imaginario{};

  if (is >> real >> imaginario) {
    complejo = Complejo(real, imaginario);
  }

  return is;
}
