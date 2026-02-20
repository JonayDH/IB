/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file 7.3-local_variables.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 18 2025
  * @brief A program that asks the user to enter two integers, one named smaller, the other named larger. 
  *        If the user enters a smaller value for the second integer, swap the smaller and larger values. 
  *        Then print the values of the smaller and larger variables.
  * @bug There are no known bugs
  * @see https://www.learncpp.com/cpp-tutorial/local-variables/
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

int main() {
  int smaller{}; //Se crea smaller
  int larger{}; //Se crea larger

  std::cout << "Introduce un entero: ";
  std::cin >> smaller;

  std::cout << "Introduce un entero más grande: ";
  std::cin >> larger;
  std::cout << " " << std::endl;

  if (smaller > larger) {
    int auxiliar{}; // Se crea auxiliar
    
    std::cout << "Cambiando valores:" << std::endl;
    std::cout << " " << std::endl;  

    auxiliar = smaller;
    smaller = larger;
    larger = auxiliar;
  } // Muere auxiliar

  std::cout << "El valor más pequeño es: " << smaller << std::endl;
  std::cout << "El valor más grande es: " << larger << std::endl;

  return 0;
} // Muere smaller y larger
