/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file 4.x-question2.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 12 2025
 * @brief The user is asked to enter 2 floating point numbers.
 *        The user is then asked to enter one of the following mathematical
 *        symbols: +, -, *, or /. The program computes the answer on the two numbers
 *        the user entered and prints the results. If the user enters an invalid
 *        symbol, the program should print nothing.
 * @bug There are no known bugs
 * @see https://www.learncpp.com/cpp-tutorial/chapter-4-summary-and-quiz/
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

void calcula(int num1, int num2, char symbol) {
  if (symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/') {
    std::cout << " " << std::endl;
  } else if (symbol == '+') {
    std::cout << num1 << " " << symbol << " " << num2 << " is " << num1 + num2
              << std::endl;

  } else if (symbol == '-') {
    std::cout << num1 << " " << symbol << " " << num2 << " is " << num1 - num2
              << std::endl;

  } else if (symbol == '*') {
    std::cout << num1 << " " << symbol << " " << num2 << " is " << num1 * num2
              << std::endl;

  } else if (symbol == '/') {
    std::cout << num1 << " " << symbol << " " << num2 << " is " << num1 / num2
              << std::endl;
  }
}

int main() {
  double num1{}, num2{};
  char symbol{};

  std::cout << "Enter a double value: ";
  std::cin >> num1;
  std::cout << "Enter a double vale: ";
  std::cin >> num2;

  std::cout << "Enter +, -, * or /: ";
  std::cin >> symbol;

  calcula(num1, num2, symbol);

  return 0;
}
