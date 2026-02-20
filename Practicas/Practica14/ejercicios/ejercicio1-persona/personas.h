/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file personas.h
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 8 2025
  * @brief Archivo de cabecera
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p14-oop2-JonayDH/blob/main/README.md
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  */

#ifndef PERSONAS_H
#define PERSONAS_H

#include <string>

void PrintProgramPurpose();

class DNI {

  public:

    DNI(int numero);
    int GetNumero() const;
    char GetLetra() const;

  private: 

    int numero_;
};

class Persona{

  public:

    Persona(std::string nombre, DNI dni);
    friend std::ostream& operator<<(std::ostream& os, const Persona& persona);

  private:

    std::string nombre_;
    DNI dni_;

};

#endif
