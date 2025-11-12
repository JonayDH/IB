/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file scalar_product.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 12 2025
  * @brief Una funcion que hace el producto escalar de dos vectores
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P71310_en
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

double scalar_product(const vector<double>& u, const vector<double>& v) {

  double scalar_product{0.0};

  for (int i{0}; i < static_cast<int>(u.size()); i++) {

    scalar_product += u[i] * v[i];
  }

  return scalar_product;
}

int main() {

  vector<double> u = {1.5, 2.0, 3.0};
  vector<double> v = {3.0, 2.0, 1.0};

  std::cout << scalar_product(u, v) << std::endl;
}

