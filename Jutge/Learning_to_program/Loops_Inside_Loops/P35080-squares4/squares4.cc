/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file squares4.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 20 2025
  * @brief un programa que imprima cuadrados de n × n n veces. Para llenar todos los cuadrados,
  *        comienza con 0, 1, ..., 9, 0, etc.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P35080_en
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

/**
  * @brief Función que imprime cuadrados n * n
  *
  * @param numero numero de filas y columnas
  * @param inicial numero inicial para empezar a contar en el cuadrado
  */

void Cuadrado(int numero, int inicial) {

  int numero_filas{numero};
  int numero_columnas{numero};
  int numero_cuadrados{numero};
  bool primera_iteracion{true};

  for (int i{}; i < numero_cuadrados; i++) {

    if (!primera_iteracion) {
    
      std::cout << std::endl;
    }   

    inicial = 0;

    for (int i{}; i < numero_columnas; i++) {

      for (int i{}; i < numero_filas; i++) {

        std::cout << inicial;

        inicial++;

        if (inicial > 9) {

          inicial = 0;
        }
      }

      std::cout << std::endl;
    }

    primera_iteracion = false;
  }
}

/// @brief Función principal

int main() {

  int numero{};
  int inicial{};

  while (std::cin >> numero) {

    Cuadrado(numero, inicial);
    
  }

  return 0;
}  
