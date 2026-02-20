/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file nombre.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 8 2025
  * @brief Este programa permite hacer equipos y cambiar su capitán
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
#include "equipo.h"

int main() {

  PrintProgramPurpose();

  Persona persona1("Julían Alberto", DNI(46985081));
  Persona persona2("María López", DNI(78673224));
  Persona persona3("Carlos Pérez", DNI(79197037));
  Persona persona4("Ana Gómez", DNI(12345678));

  std::vector<Persona> jugadores{};
  jugadores.push_back(persona1);
  jugadores.push_back(persona2);
  jugadores.push_back(persona3);

  Equipo equipo1("Pistachos", jugadores);

  std::cout << "Capitan inicial:" << std::endl;
  std::cout << equipo1.GetCapitan() << std::endl << std::endl;

  std::cout << "Cambio de capitán" << std::endl;
  equipo1.HacerCapitan(persona2);

  std::cout << "Nuevo capitan:" << std::endl;
  std::cout << equipo1.GetCapitan() << std::endl << std::endl;

  std::cout << "Cambio de capitán" << std::endl;
  equipo1.HacerCapitan(persona4);

  return 0;
}

