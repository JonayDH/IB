/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file frequences.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 22 2025
  * @brief a program that reads a sequence of natural numbers and that prints, for each one, how many times it appears. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P63414_en
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
  * @brief Función que determina si un número ya aparece en un vector y si no lo añade
  * 
  * @param numero Número a comprobar
  * @param numeros Vector de números que ya han salido
  * @param frequencias Número de veces que ha salido cada número
  */

void YaAparece (int numero, std::vector<long long>& numeros, std::vector<int>& frequencias) {

  bool aparece{false};

  if (static_cast<int>(frequencias.size()) == 1) {

    if (numero == numeros[0]) {

      frequencias[0]++;
    } else {

      numeros.push_back(numero);
      frequencias.push_back(1);
    }
  } else {

    for (int i{}; i <= static_cast<int>(frequencias.size() - 1); i++) {

      if (numero == numeros[i]) {

        frequencias[i]++;
        aparece = true;
      } 
    }

    if (aparece) {

    } else {

      numeros.push_back(numero);
      frequencias.push_back(1);
    }
  }
}

/**
  * @brief Función que sirve para ordenar el vector de menor a mayor
  * 
  * @param numeros Vector a ordenar
  * @param frequencias vector directamente ligado al primer vector que también hay que ordenar 
  */

void OrdenarVector(std::vector<long long>& numeros, std::vector<int>& frequencias) {

  int tamano{static_cast<int>(numeros.size())};

  for (int i = 0; i < tamano - 1; ++i) {
    for (int j = 0; j < tamano - 1 - i; ++j) {

      if (numeros[j] > numeros[j + 1]) {

        long long temp_num = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = temp_num;

        int temp_freq = frequencias[j];
        frequencias[j] = frequencias[j + 1];
        frequencias[j + 1] = temp_freq;
      }
    }
  }
}

/**
  * @brief Esta función imprime los resultados del problema
  * 
  * @param numeros Vector de números que han salido
  * @param frequencias Vector con la frequencia que han salido esos números
  */

void ImprimirResultados(std::vector<long long>& numeros, std::vector<int>& frequencias) {

  int tamano_vectores{static_cast<int>(frequencias.size())};

  for (int i{}; i < tamano_vectores; i++) {

    std::cout << numeros[i] << " : " << frequencias[i] << std::endl;
  }
}
  
/// @brief Main function

int main() {

  int numero_numeros{};
  long long numero_actual{};
  std::vector<long long> numeros{};
  std::vector<int> frequencias{};

  std::cin >> numero_numeros;
  std::cin >> numero_actual;

  numeros.push_back(numero_actual);
  frequencias.push_back(1);

  for (int i{}; i < numero_numeros - 1; i++) {

    std::cin >> numero_actual;

    YaAparece(numero_actual, numeros, frequencias);
  }

  OrdenarVector(numeros, frequencias);
  ImprimirResultados(numeros, frequencias);

  return 0;
}