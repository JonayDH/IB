/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file main.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 29 2025
  * @brief Este programa sirve para hacer varias operaciones con un circulo
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
#include "circulo.h"
#include "point2d.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {

  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 7)) {
    
    return 1;
  }

  double x_coord_centro{std::stod(argv[1])};
  double y_coord_centro{std::stod(argv[2])};
  double radio{std::stod(argv[3])};
  std::string color{argv[4]};
  double x_coord_punto{std::stod(argv[5])};
  double y_coord_punto{std::stod(argv[6])};

  Point2D centro(x_coord_centro, y_coord_centro);
  Circulo circulo(centro, radio, StringToColor(color));

  circulo.Print();
  std::cout << "Area: " << circulo.Area() << std::endl;
  std::cout << "Perimetro: " << circulo.Perimetro() << std::endl << std::endl;

  Point2D punto(x_coord_punto, y_coord_punto);

  std::cout << "Punto: ";
  punto.Show();

  if (circulo.EsInterior(x_coord_punto, y_coord_punto)) {

    std::cout << "El punto está dentro del círculo." << std::endl;
  } else {

    std::cout << "El punto está fuera del círculo." << std::endl;
  }

  return 0;
}