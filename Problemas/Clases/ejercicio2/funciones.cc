/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 31 2025
  * @brief Código de las funciones necesarias
  * @bug There are no known bugs
  * @see link
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  */

#include "funciones.h"
#include <iostream>

Complejo::Complejo(double real, double imaginario) : real_{real}, imaginario_{imaginario} {}

double Complejo::GetImaginario() const{

  return imaginario_;
}

double Complejo::GetReal() const{

  return real_;
}

Complejo operator+(const Complejo& complejo1, const Complejo& complejo2) {

  double real_nuevo{complejo1.GetReal() + complejo2.GetReal()};
  double imaginario_nuevo{complejo1.GetImaginario() + complejo2.GetReal()};

  Complejo complejo3{real_nuevo,imaginario_nuevo};

  return complejo3;
}

Complejo operator-(const Complejo& complejo1, const Complejo& complejo2) {

  double real_nuevo{complejo1.GetReal() - complejo2.GetReal()};
  double imaginario_nuevo{complejo1.GetImaginario() - complejo2.GetImaginario()};

  Complejo complejo3{real_nuevo,imaginario_nuevo};

  return complejo3;
}

Complejo operator*(const Complejo& complejo1, const Complejo& complejo2) {

  Complejo complejo{0,0};

  return complejo;
}

Complejo operator/(const Complejo& complejo1, const Complejo& complejo2) {

  Complejo complejo{0,0};

  return complejo;
}

std::ostream& operator<<(std::ostream& os, const Complejo& complejo) {

  os << "(" << complejo.real_ << ", " << complejo.imaginario_ << ")";
  return os;
}