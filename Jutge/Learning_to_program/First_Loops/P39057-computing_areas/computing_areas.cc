/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file computing_areas.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 29 2025
  * @brief a program that reads several descriptions of rectangles and circles, and for each one prints its corresponding area.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39057_en
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
#include <iomanip>

void AreaCirculo(double radio) {

  constexpr double kPi{3.14159265358979323846};

  std::cout << std::fixed << std::setprecision(6) << kPi * (radio * radio) << std::endl;
}

void AreaRectangulo(double largo, double ancho) {

  std::cout << std::fixed << std::setprecision(6) << largo * ancho << std::endl;
}

int main() {

  int numero_descripciones{};

  std::cin >> numero_descripciones;

  for (int i{}; i < numero_descripciones; i++) {

    std::string figura{};
    std::cin >> figura;

    if (figura == "rectangle") {

      double largo{}, ancho{};

      std::cin >> largo;
      std::cin >> ancho;
      
      AreaRectangulo(largo, ancho);
    }

    if (figura == "circle") {

      double radio{};

      std::cin >> radio;

      AreaCirculo(radio);
    }
  }

  return 0;
}
