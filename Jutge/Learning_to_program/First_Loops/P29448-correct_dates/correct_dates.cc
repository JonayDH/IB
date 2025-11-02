/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file correct_dates.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 2 2025
  * @brief A program that reads several dates, and for each one tells if it is correct or not according to the Gregorian calendar.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P29448_en
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

bool IsBisiesto(int year) {

  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool FechaCorrecta(int dia, int mes, int year) {

  if (mes < 1 || mes > 12) {

    return false;
  }

  if (dia < 1) return false;

  int dias_max = 31;
  switch (mes) {

    case 4: 
      dias_max = 30;
      break;

    case 6: 
      dias_max = 30;
      break;

    case 9: 
      dias_max = 30;
      break;

    case 11: 
      dias_max = 30; 
      break;

    case 2:  
      if (IsBisiesto(year)) {

        dias_max = 29;
      } else{

        dias_max = 28;
      } 

      break;        

    default:
      dias_max = 31;
      break;
  }

  return (dia <= dias_max);
}

int main() {
  int dia{}, mes{}, year{};

  while (std::cin >> dia >> mes >> year) {

    if (FechaCorrecta(dia, mes, year)) {

      std::cout << "Correct Date" << std::endl;
    } else {

      std::cout << "Incorrect Date" << std::endl;
    }
  }

  return 0;
}

