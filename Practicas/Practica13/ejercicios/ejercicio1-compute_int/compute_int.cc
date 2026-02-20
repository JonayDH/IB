/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file compute_int.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 5 2025
  * @brief Código de las funciones necesarias
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p13-oop-JonayDH/blob/main/README.md
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
#include "compute_int.h"

/// @brief Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para hacer operaciones variadas con un número" << std::endl;
}

/// @brief Función que suma los digitos de un número

int SumaDigitos (int numero) {

  int suma{};

  while (numero > 0) {

    suma += (numero % 10);
    numero /= 10;
  }

  return suma;
}

/// @brief Constructor de la clase ComputeInt

ComputeInt::ComputeInt(int numero) : numero_(numero) {};

/// @brief Obtiene el atributo numero_

int ComputeInt::GetNumero() {

  return numero_;
}

/// @brief Establece el atributo numero_

void ComputeInt::SetNumero(int numero) {

  numero_ = numero;
}

/// @brief Calcula el factorial

int ComputeInt::Factorial() {

  int factorial{1};

  if (numero_ == 0) {

    return numero_ + 1;
  }

  for (int i{1}; i <= numero_; i++) {

    factorial *= i;
  }

  return factorial;
}

/// @brief Calcula la suma en serie (1+2+3+4+...+n)

int ComputeInt::SumSerie() {

  int suma{};

  for (int i{}; i <= numero_; i++) {

    suma += i;
  }

  return suma;
}

/// @brief Calcula si es primo o no

bool ComputeInt::IsPrime() {


  if (numero_ <= 1) { 
    
    return false;
  }

  if (numero_ == 2) { 
    
    return true;
  }

  if (numero_ % 2 == 0) { 
    return false;
  }

  int limite = std::sqrt(numero_);

  for (int i = 3; i <= limite; i += 2) { 

    if (numero_ % i == 0) {

      return false;
    }
  }

  return true;
}

/// @brief Calcula si es primo perfecto o no

bool ComputeInt::IsPerfectPrime() {

  int siguiente_numero{numero_};

  if (!ComputeInt::IsPrime()) {

    return false;
  }

  while (siguiente_numero >= 10) {

    ComputeInt::SetNumero(siguiente_numero);

    if (!ComputeInt::IsPrime()) {

      return false;
    }

    siguiente_numero = SumaDigitos(siguiente_numero);
  }

  if (ComputeInt::IsPrime()) {

    return true;
  }

  return false;
}

/// @brief calcula si son primos relativos

bool ComputeInt::AreRelativePrimes(int numero2) {

  ComputeInt segundo{numero2};

  if ((segundo.IsPrime() && IsPrime()) && (numero2 != numero_)) {

    return true;
  }

  if ((!segundo.IsPrime()) || !IsPrime()) {

    return false;
  }

  if ((numero2 > numero_) && ((numero2 % numero_) != 0)) {

    return true;
  }

  if ((numero_ > numero2) && ((numero_ % numero2) != 0)) {

    return true;
  }

  return false;
}


