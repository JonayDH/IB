/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file reversing_words2.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 20 2025
  * @brief a program that reads words, and prints them in reverse order, reversing also the order of the characters of each word.  
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P99133_en
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

/**
  * @brief función que le da la vuelta a una palabra
  *
  * @param palabra palabra a dar la vuelta
  */
  
void DesordenarPalabra(std::string& palabra) {

  int largo{static_cast<int>(palabra.size())};

  for (int i{largo - 1}; i >= 0; i--) {

    std::cout << palabra[i];
  }
}

/**
  * @brief Función que le da la vuelta a un vector
  *
  * @param vector vector a dar la vuelta
  */

void DesordenarVector(std::vector<std::string>& vector) {

  int tamano_vector{static_cast<int>(vector.size())};
  std::string palabra_actual{};

  for (int i{tamano_vector - 1}; i >= 0; i--) {

    palabra_actual = vector[i];

    DesordenarPalabra(palabra_actual);

    std::cout << std::endl;
  }
}

/// @brief Main function

int main() {

  std::string palabra_actual{};
  std::vector<std::string> vector_palabras{};
  int numero_palabras{};

  std::cin >> numero_palabras;
  
  while (std::cin >> palabra_actual) {

    vector_palabras.push_back(palabra_actual);
  }

  DesordenarVector(vector_palabras);

  return 0;
}

    
