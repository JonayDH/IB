/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file 1.5-introduction-to-iostream.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 12 2025
 * @brief This program asks the user to enter three values and then prints them.
 * @bug There are no known bugs
 * @see
 * https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/
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
 *
 *
 */

#include <iostream>

int main() {
  int num1{};
  int num2{};
  int num3{};

  std::cout << "Enter three numbers: ";
  std::cin >> num1 >> num2 >> num3;
  std::cout << "You entered " << num1 << ", " << num2 << ", and " << num3 << "."
            << std::endl;

  return 0;
}
