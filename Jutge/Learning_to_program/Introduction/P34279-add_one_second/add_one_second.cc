/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file add_one_second.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief A program that adds one second to a clock time, given its hours, minutes and seconds.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279_en
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

int main() {

  int segundos{};
  int minutos{};
  int horas{};

  std::cin >> horas;
  std::cin >> minutos;
  std::cin >> segundos;

  segundos++;

  if (segundos == 60) {

    segundos = 0;
    minutos++;
  }

  if (minutos == 60) {

    minutos = 0;
    horas++;
  }

  if (horas == 24) {

    horas = 0;
  }

  if (horas < 10) {

    std::cout << "0";
  }

  std::cout << horas << ":"; 
 
  if (minutos < 10) {

    std::cout << "0";
  }

  std::cout << minutos << ":"; 

  if (segundos < 10) {

    std::cout << "0";
  }

  std::cout << segundos << std::endl; 

  return 0;
}
