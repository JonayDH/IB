/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file search_in_an_array.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 12 2025
  * @brief a function that tells if the integer number @x@ is present in the vector of integer numbers @v@. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11725_en
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
#include <vector>

using namespace std;

bool exists(int x, const vector<int>& v) {

  for (int n: v) {

    if (n == x) {

      return true;
    }
  }

  return false;
}
