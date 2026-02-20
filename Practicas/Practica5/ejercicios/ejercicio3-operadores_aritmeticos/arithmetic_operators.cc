/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file arithmetic_operators.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 12 2025
  * @brief A program that declares and initializes variables of arithmetic types (integers and floating-point numbers) 
  *        and prints the result of operating on those variables with all the operators that can be used with them.
  * @bug There are no known bugs
  * @see https://campusvirtual.ull.es/2526/ingenieriaytecnologia/pluginfile.php/6503/mod_resource/content/5/ib03_Intro_Cpp.pdf
  *      https://github.com/IB-2025-2026/P05-expressions/blob/main/expressions.md
  *
  * This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License 
  * as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of 
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License along with this program. If not, see <https://www.gnu.org/licenses/>. 
  *
  *
  */

#include <iostream>

int main() {
  int entero1{5};
  int entero2{2};

  double decimal1{2.5};
  double decimal2{4.6};

  std::cout << "Operaciones con 2 enteros:" << std::endl;
  std::cout << " " << std::endl;
  
  std::cout << "+" << entero1 << " = " << +entero1 << std::endl;
  std::cout << "-" << entero1 << " = " << -entero1 << std::endl;
  std::cout << entero1 << " + " << entero2 << " = " << (entero1 + entero2) << std::endl;
  std::cout << entero1 << " - " << entero2 << " = " << (entero1 - entero2) << std::endl;
  std::cout << entero1 << " * " << entero2 << " = " << (entero1 * entero2) << std::endl;
  std::cout << entero1 << " / " << entero2 << " = " << (entero1 / entero2) << std::endl;
  std::cout << entero1 << " % " << entero2 << " = " << (entero1 % entero2) << std::endl;
  std::cout << " ~" <<entero1 << " = " << ~entero1 << std::endl;
  std::cout << entero1 << " & " << entero2 << " = " << (entero1 & entero2) << std::endl;
  std::cout << entero1 << " | " << entero2 << " = " << (entero1 | entero2) << std::endl;
  std::cout << entero1 << " ^ " << entero2 << " = " << (entero1 ^ entero2) << std::endl;
  std::cout << entero1 << " << " << entero2 << " = " << (entero1 << entero2) << std::endl;
  std::cout << entero1 << " >> " << entero2 << " = " << (entero1 >> entero2) << std::endl;
  std::cout << " " << std::endl;

  std::cout << "Operaciones con 2 decimales:" << std::endl;
  std::cout << " " << std::endl;

  std::cout << "+" << decimal1 << " = " << +decimal1 << std::endl;
  std::cout << "-" << decimal1 << " = " << -decimal1 << std::endl;
  std::cout << decimal1 << " + " << decimal2 << " = " << (decimal1 + decimal2) << std::endl;
  std::cout << decimal1 << " - " << decimal2 << " = " << (decimal1 - decimal2) << std::endl;
  std::cout << decimal1 << " * " << decimal2 << " = " << (decimal1 * decimal2) << std::endl;
  std::cout << decimal1 << " / " << decimal2 << " = " << (decimal1 / decimal2) << std::endl;

  return 0;
}
