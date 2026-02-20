/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file 4.10-introduction_to_if_statements.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 12 2025
 * @brief A program that asks the user to enter a number 0 through 9 (inclusive). 
 *        If the user enters a number within this range that is prime (2, 3, 5, or 7), print “The digit is prime”. 
 *        Otherwise, print “The digit is not prime”.
 * @bug There are no known bugs
 * @see https://www.learncpp.com/cpp-tutorial/introduction-to-if-statements/
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

bool isPrime(int num) {
  if (num != 2 && num != 3 && num != 5 && num != 7) {
    return false;
  } else {
    return true;
  }
}

int main() {
  int num{};

  std::cout << "Introduce un número del 0 al 9: ";
  std::cin >> num;

  if (isPrime(num) == true) {
    std::cout << "The digit is prime" << std::endl;
  }

  if (isPrime(num) == false) {
    std::cout << "The digit is not prime" << std::endl;
  }

  return 0;
}
