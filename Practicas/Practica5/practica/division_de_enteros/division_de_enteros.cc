/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2025-2026
 *
 * @file division_de_enteros.cc
 * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
 * @date Oct 17 2025
 * @brief Un programa que solicite al usuario dos números enteros
 *        y muestre por pantalla su división entera, el resto de su división
 *        entera y su división real
 * @bug There are no known bugs
 * @see https://campusvirtual.ull.es/2526/ingenieriaytecnologia/mod/page/view.php?id=21869
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
  int numero1{};
  int numero2{};
  double division_real{};

  std::cout << "Introduzca un valor: ";
  std::cin >> numero1;

  std::cout << "Introduzca otro valor: ";
  std::cin >> numero2;

  std::cout << "División entera: " << numero1 / numero2 << std::endl;
  std::cout << "Resto: " << numero1 % numero2 << std::endl;

  division_real = static_cast<double>(numero1) / static_cast<double>(numero2);

  std::cout << "División real: " << division_real << std::endl;

  return 0;
}
