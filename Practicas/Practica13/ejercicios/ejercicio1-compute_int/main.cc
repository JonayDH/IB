/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file nombre.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 5 2025
  * @brief Este programa hace operaciones con un número 
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p13-oop-JonayDH/blob/main/README.md
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
#include "compute_int.h"

int main() {

  PrintProgramPurpose();

  ComputeInt compute_integer{10}; 
  std::cout << "Factorial: " << std::boolalpha << compute_integer.Factorial() << std::endl; 
  std::cout << "Suma en serie: " << std::boolalpha << compute_integer.SumSerie() << std::endl; 
  std::cout << "Es primo: " << std::boolalpha << compute_integer.IsPrime() << std::endl;
  std::cout << "Es primo perfecto: " << std::boolalpha << compute_integer.IsPerfectPrime() << std::endl;  
  std::cout << "Primos relativos: " << std::boolalpha << compute_integer.AreRelativePrimes(7) << std::endl; 

  return 0;
}

