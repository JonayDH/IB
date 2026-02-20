/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file complejo.h
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 29 2025
  * @brief Archivo de cabecera
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

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);

class Complejo {

  public:

    Complejo(double real, double imaginario);
    double ParteReal() const;
    double ParteImaginaria() const;

  private:

    double real_{};
    double imaginario_{};

};

Complejo operator+(const Complejo& complejo1, const Complejo& complejo2);
Complejo operator-(const Complejo& complejo1, const Complejo& complejo2);
Complejo operator*(const Complejo& complejo1, const Complejo& complejo2);
Complejo operator/(const Complejo& complejo1, const Complejo& complejo2);
std::ostream& operator<<(std::ostream& os, const Complejo& complejo);
std::istream& operator>>(std::istream& is, Complejo& complejo);

#endif
