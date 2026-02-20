/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file numero_perfect.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 14 2025
  * @brief a function that tells if a natural @n@ is perfect.
  * @bug There are no known bugs
  * @see https://drive.google.com/file/d/131pWyjI-egUNvu_IXz_3PmX_dT2PI9Oc/view?pli=1
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
  * @brief Una función que comprueba si un número es perfecto
  *
  * @param n número que queremos ver si es perfecto o no
  * @return true si es perfecto, false si no
  */

bool is_perfect(int n) {

  if (n <= 1) {

    return false;
  }

  int suma{1};

  for (int i{2}; i * i <= n; ++i) {

    if (n % i == 0) {

      int j{n / i}; 

      suma += i;
      if (j != i) { 

        suma += j;
      }   

      if (suma > n) { 
  
        return false;
      }   
    }   
  }

  return suma == n;
}

/// @brief Función principal

int main() {

  int n{};

  while (std::cin >> n) {

    if (is_perfect(n)) {

      std::cout << "true" << std::endl;
    } else {

      std::cout << "false" << std::endl;
    }
  }

  return 0;
}

