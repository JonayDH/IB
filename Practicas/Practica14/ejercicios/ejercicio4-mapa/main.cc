/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file nombre.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 8 2025
  * @brief Este programa hace personas e imprime sus datos
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

#include <iostream>
#include <map>
#include "mapa.h"

int main() {

  PrintProgramPurpose();

  Persona persona1("Julían Alberto", 46985081);
  Persona persona2("María López", 12345678);
  Persona persona3("Carlos Pérez", 91234567);

  std::map<int, Persona> personas;
  
  personas.insert({persona1.GetDni().GetNumero(), persona1});
  personas.insert({persona2.GetDni().GetNumero(), persona2});
  personas.insert({persona3.GetDni().GetNumero(), persona3});

  int dni_introducido;

  std::cout << "Introduce un DNI sin letra:" << std::endl;

  while (std::cin >> dni_introducido) {

    if (personas.count(dni_introducido) == 1) {

      std::cout << "Bienvenido: " << personas.at(dni_introducido).GetNombre() << std::endl;

    } else {

      std::cout << "La persona con ese DNI no esta registrada." << std::endl;
    }
  }


  
  return 0;
}

