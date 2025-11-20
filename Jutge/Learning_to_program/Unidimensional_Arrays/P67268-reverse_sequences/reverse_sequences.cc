/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file reverse_sequences.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 20 2025
  * @brief program that reads sequences of integer numbers, and prints each one reversing the order of its elements.  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P67268_en
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

/**
  * @brief Función que desordena un vector
  *
  * @param vector vector a desordenar
  */

void DesordenarVector (std::vector<int>& vector) {

  int tamano_vector{static_cast<int>(vector.size())};

  for (int i{tamano_vector - 1}; i >= 0; i--) {

    std::cout << vector[i];

    if (i > 0) {

      std::cout << " ";
    }
  }

  std::cout << std::endl;
}

/// @brief Main function

int main() {

  int numero_iteraciones{};
  int numero_actual{};
  std::vector<int> vector_numeros{};

  while (std::cin >> numero_iteraciones) {

    if (numero_iteraciones == 0) {

      std::cout << std::endl;

    } else {
      
      vector_numeros.clear();

      for (int i{}; i < numero_iteraciones; i++) {

        std::cin >> numero_actual;
        vector_numeros.push_back(numero_actual);
      }

      DesordenarVector(vector_numeros);
    }
  }
   
  return 0;
} 
