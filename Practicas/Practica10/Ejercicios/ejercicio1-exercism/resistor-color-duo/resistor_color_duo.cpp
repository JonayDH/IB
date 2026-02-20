/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file resistor_color_duo.cpp
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 21 2025
  * @brief Programa que calcula el valor de una resistencia de 2 colores 
  * @bug There are no known bugs
  * @see https://exercism.org/tracks/cpp/exercises/resistor-color-duo
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  */

#include "resistor_color_duo.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

namespace resistor_color_duo {

  int ValorColor(const std::string& color) {
    if (color == "black")
      return 0;
    if (color == "brown")
      return 1;
    if (color == "red")
      return 2;
    if (color == "orange")
      return 3;
    if (color == "yellow")
      return 4;
    if (color == "green")
      return 5;
    if (color == "blue")
      return 6;
    if (color == "violet")
      return 7;
    if (color == "grey")
      return 8;
    if (color == "white")
      return 9;

    return 0;
  }

  int value(const std::vector<std::string>& colors) {
    if (static_cast<int>(colors.size()) < 2) return 0;

    int valor1{ValorColor(colors[0])};
    int valor2{ValorColor(colors[1])};

    return valor1 * 10 + valor2;
  }

  int main() {

    std::string line;
    std::string color1;
    std::string color2;
    int resultado{};

    while (std::getline(std::cin, line)) {
      std::stringstream ss(line);
      ss >> color1 >> color2;

    std::vector<std::string> colors{color1, color2};
    resultado = value(colors);

    std::cout << "Valor: " << resultado << std::endl;
  }

  return 0;
  }

}  // namespace resistor_color_duo
