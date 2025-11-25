/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file palindrome.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 25 2025
  * @brief Función que comprueba si un número es palíndromo o no
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50497_en
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
#include <string>
#include <vector>

bool is_palindrome(const std::string& s) {

  int i{};
  int j{s.size() - 1};

  while (i < j) {
    if (s[i] != s[j]) {

      return false;
    }

    i++;
    j--;
  }
  
  return true;
}