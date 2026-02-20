/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file ciruclo_y_circunferencia.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 17 2025
 * @brief Un programa que solicita al usuario el radio de un círculo como
 *        un valor real y muestre por pantalla su área y su circunferencia.
 * @bug There are no known bugs
 * @see https://campusvirtual.ull.es/2526/ingenieriaytecnologia/mod/page/view.php?id=21868
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

int main() {
  int radio{};
  double circunferencia{};
  double area{};
  constexpr double kPi{3.1416};

  std::cout << "Introduzca el valor del radio en metros: ";
  std::cin >> radio;

  circunferencia = 2 * kPi * radio;
  area = kPi * (radio * radio);

  std::cout << "La circunferencia es de: " << circunferencia << " metros" << std::endl;
  std::cout << "El área es de: " << area << " metros" << std::endl;

  return 0;
}
