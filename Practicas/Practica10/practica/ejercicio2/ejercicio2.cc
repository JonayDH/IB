/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file ejercicio2.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 21 2025
  * @brief Comprueba si un vector se puede permutar o no 
  * @bug There are no known bugs
  * @see link
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
#include <string>

/**
  * @brief Función que devuelve si un vector es dominó o no
  *
  * @param vector vector a comprobar
  *
  * @return true si es dominó, false si no
  */

bool EsDomino(std::vector<std::string>& vector) {

  int tamano_vector{static_cast<int>(vector.size())};

  for (int i{}; i < tamano_vector - 1; i++) {

    std::string palabra1{vector[i]};
    std::string palabra2{vector[i + 1]};
    
    if (palabra1.back() != palabra2[0]) {

      return false;
    }
  }

  return true;
}

/// @brief Main function    

int main() {

  int numero_palabras{};
  std::string palabra_actual{};
  std::vector<std::string> palabras{};

  while (std::cin >> numero_palabras) {

    for (int i{}; i < numero_palabras; i++) {

      std::cin >> palabra_actual;
      palabras.push_back(palabra_actual);
    }

    if (EsDomino(palabras)) {

      std::cout << "yes" << std::endl;
    } else {

      std::cout << "no" << std::endl;
    }

    palabras.clear();
  }

  return 0;
}  
