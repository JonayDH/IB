/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file parentheses.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 3 2025
  * @brief A program that given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close correctly.
  * @bug There are no know bugs
  * @see https://jutge.org/problems/P31111_en/statement
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

bool ParentesisCerrados(std::string& input) {

    int balance{};

  for (char x: input) {

    if (x == '(') {
      
      balance++;
    } else if (x == ')') {

      balance--;

      if (balance < 0) {

        return false;
      }
    }
  }

  if (balance == 0) {

    return true;
  } else {

    return false;
  }
}

int main() {

  std::string input{};

  std::cin >> input;

  if (ParentesisCerrados(input) == true) {

    std::cout << "yes" << std::endl;
  } else {

    std::cout << "no" << std::endl;
  }

  return 0;
}
