/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file intervals3.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 5 2025
 * @brief A program that, given two intervals, tells if one is inside the other, and computes the interval corresponding to their intersection,
 *        or tells that it is empty.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P89265_en
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
#include <cmath>

int main() {

  int x1, y1, x2, y2;
  std::cin >> x1 >> y1 >> x2 >> y2;

  if ((x1 == x2) and (y1 == y2)) {

    std::cout << "= , [" << x1 << "," << y1 << "]" << std::endl;
  } else if ((x1 >= x2) and (y1 <= y2)) {
   
      std::cout << "1 , [" << x1 << "," << y1 << "]" << std::endl;
    } else if ((x1 <= x2) and (y1 >= y2)) {
   
        std::cout << "2 , [" << x2 << "," << y2 << "]" << std::endl;
      } else {

          if ((y1 < x2) or (y2 < x1)) {

            std::cout << "? , []" << std::endl;
          } else {

              std::cout << "? , [" << std::fmax(x1, x2) << "," << std::fmin(y1, y2) << "]" << std::endl;

            } 
        
        }
  return 0;
}
