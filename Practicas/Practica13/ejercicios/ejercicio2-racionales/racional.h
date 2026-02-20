/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file racional.h
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 6 2025
  * @brief Archivo de cabecera
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

#ifndef RACIONAL_H
#define RACIONAL_H

#include <string>

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);
void PrintAyuda();
void LeerRacionales(const std::string& fichero_entrada, const std::string& fichero_salida);

class Racionales {

  public:

    Racionales();
    Racionales(int numerador, int denominador);
    int GetNumerador() const;
    int GetDenominador() const;
    bool EsValido() const;

  private:

    int numerador_;
    int denominador_;
};

Racionales operator+(const Racionales& racional1, const Racionales& racional2);
Racionales operator-(const Racionales& racional1, const Racionales& racional2);
Racionales operator*(const Racionales& racional1, const Racionales& racional2);
Racionales operator/(const Racionales& racional1, const Racionales& racional2);
bool operator==(const Racionales& racional1, const Racionales& racional2);
std::istream& operator>>(std::istream& is, Racionales& racional);
std::ostream& operator<<(std::ostream& os, const Racionales& racional);

#endif
