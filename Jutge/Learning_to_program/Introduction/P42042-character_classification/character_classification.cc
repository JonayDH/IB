/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file character_classification.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief A program that reads a letter, and that tells if it is an uppercase letter or a lowercase letter, 
  *        and that also tells if it is a vowel or a consonant.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P42042_en
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

  char caracter{};

  std::cin >> caracter;

  if (caracter > 'Z') {

    std::cout << "lowercase" << std::endl;

    if (caracter == 'a' ||  caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {

      std::cout << "vowel" << std::endl;
    
    } else {
        
      std::cout << "consonant" << std::endl;
    }
  }
 
  if (caracter <= 'Z') {

    std::cout << "uppercase" << std::endl;

    if (caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {

      std::cout << "vowel" << std::endl;
    
    } else {
        
      std::cout << "consonant" << std::endl;
    }
  }
  
  return 0;
} 
