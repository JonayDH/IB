/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file jubilacion.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief The program asks for your age and then shows you a message with the number of years you have 
  *        left until retirement (assuming the retirement age is 65 years).
  * @bug There are no known bugs
  * @see https://www.minidosis.org/#/actividades/Cpp.PrimerosProgramas.Jubilacion.prob
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
using namespace std;

int main() {

  int edad;

  cout << "Introduce tu edad: ";
  cin >> edad;

  cout << "Te quedan " << 65 - edad << " años para jubilarte." << endl;
}
