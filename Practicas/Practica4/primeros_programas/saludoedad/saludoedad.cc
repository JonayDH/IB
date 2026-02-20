/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file saludoedad.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief The program takes two strings ("nombre" and "edad") and then prints on the screen: "Hola, eres "nombre" y tienes "edad" años."
  * @bug There are no known bugs
  * @see https://www.minidosis.org/#/actividades/Cpp.PrimerosProgramas.SaludoConEdad.prob
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

  string nombre;
  int edad;

  cout << "Nombre : ";
  cin >> nombre;

  cout << "Edad : ";
  cin >> edad;

  cout << "Hola, eres " << nombre << " y tienes " << edad << " años." << endl;
}
