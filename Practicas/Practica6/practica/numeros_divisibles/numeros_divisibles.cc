/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file numeros_divisibles.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 24 2025
  * @brief Un programa en C++ que solicite al usuario dos números enteros positivos y muestre si uno de ellos es divisible entre el otro
  * @bug There are no known bugs
  * @see https://campusvirtual.ull.es/2526/ingenieriaytecnologia/mod/page/view.php?id=22036
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

int main(){
  
  int valor1{};
  int valor2{};

  std::cout << "Introduce 2 valores: ";
  std::cin >> valor1 >> valor2;

  if (valor2 > valor1) {
    int aux{};
    
    aux = valor2;
    valor2 = valor1;
    valor1 = aux;
  }

  if ((valor1 % valor2) == 0) {

    std::cout << valor1 << " es divisible entre " << valor2 << "." << std::endl;
  } else {

    std::cout << valor1 << " y " << valor2 << " no son divisibles." << std::endl;
  }

  return 0;
}
