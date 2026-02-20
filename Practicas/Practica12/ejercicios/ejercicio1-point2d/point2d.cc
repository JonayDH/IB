/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file point2d.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 29 2025
  * @brief Este programa sirve hacer varias operaciones relacionadas con 2 puntos en un plano 
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

#include "funciones.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 5)) {
    
    return 1;
  }

  double x_coord_primero{std::stod(argv[1])};
  double y_coord_primero{std::stod(argv[2])};
  double x_coord_segundo{std::stod(argv[3])};
  double y_coord_segundo{std::stod(argv[4])};

  Point2D punto1(x_coord_primero, y_coord_primero);
  Point2D punto2(x_coord_segundo, y_coord_segundo);

  std::cout << "Puntos: " << std::endl << std::endl;
  punto1.Show();
  punto2.Show();
  std::cout << std::endl;

  double distancia{punto1.Distance(punto2)};
  std::cout << "Distancia: " << distancia << std::endl;

  Point2D punto_medio{punto1.Middle(punto2)};
  std::cout << "Punto medio: "; 
  punto_medio.Show();
  std::cout << std::endl;

  std::cout << "Punto 1 nuevo : ";
  punto1.Move(10.5, 3.9);
  punto1.Show();

  return 0;
}