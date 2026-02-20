/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file P34279-add_one_second.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 18 2025
  * @brief A program that adds one second to a clock time, given its hours,
  * minutes and seconds.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279_en
  *
  * This program is free software: you can redistribute it and/or modify it under
  * the terms of the GNU General Public License as published by the Free Software
  * Foundation, either version 3 of the License, or (at your option) any later
  * version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT
  * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
  * details.
  *
  * You should have received a copy of the GNU General Public License along with
  * this program. If not, see <https://www.gnu.org/licenses/>.
  */

#include <iostream>

int main() {
  int seconds;
  int minutes;
  int hours;

  std::cin >> hours;
  std::cin >> minutes;
  std::cin >> seconds;

  seconds = seconds + 1;

  if (seconds == 60) {
    seconds = 0;
    minutes = minutes + 1;
  }

  if (minutes == 60) {
    minutes = 0;
    hours = hours + 1;
  }

  if (hours == 24) {
    hours = 0;
  }

  if (hours < 10) {
    std::cout << "0";
  }

  std::cout << hours << ":";

  if (minutes < 10) {
    std::cout << "0";
  }

  std::cout << minutes << ":";

  if (seconds < 10) {
    std::cout << "0";
  }

  std::cout << seconds << std::endl;

  return 0;
}
