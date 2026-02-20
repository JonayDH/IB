/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file boolean_operators.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 12 2025
 * @brief A program that displays the truth table of the C++ logical operators (and, or, not) on the screen.
 * @bug There are no known bugs
 * @see https://github.com/IB-2025-2026/P05-expressions/blob/main/expressions.md
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
  bool a{true};
  bool b{true};

  std::cout << std::boolalpha;
  std::cout << "  A   " << "  B   " << "A and B   " << "A or B   " << "not A  "
            << "not B " << std::endl;
  std::cout << "true  " << "true   " << (a && b) << "      " << (a || b)
            << "    " << !a << "  " << !b << std::endl;
  std::cout << "true  " << "false  " << (a && !b) << "     " << (a || !b)
            << "    " << !a << "  " << !(!b) << std::endl;
  std::cout << "false " << "true   " << (!a && b) << "     " << (!a || b)
            << "    " << !(!a) << "   " << !b << std::endl;
  std::cout << "false " << "false  " << (!a && !b) << "     " << (!a || !b)
            << "   " << !(!a) << "   " << !(!b) << std::endl;

  return 0;
}
