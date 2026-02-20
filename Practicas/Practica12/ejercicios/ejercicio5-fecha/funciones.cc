/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 29 2025
  * @brief Código de las funciones necesarias
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p12-intro-oop-JonayDH/blob/main/intro-oop.md
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
#include <fstream>
#include <sstream>
#include <string>
#include "funciones.h"

/// @brief Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para leer fechas de un fichero y devolver las válidas en otro distinto" << std::endl << std::endl;
}

/** 
  * @brief Muestra el modo de uso correcto del programa
  *        En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
  *        la ejecución del programa.
  *
  * @param argc Numero de parámetros de la linea de comandos
  * @param argv Vector que contiene (char*) los parámetros
  * @param kCorrectNumber Número esperado de parámetros.
  * @return true si argc es igual a kCorrectNumber, false en caso contrario.
  */

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {

  if (argc != kCorrectNumber) {

    std::cout << "El número de parámetros introducido es incorrecto:" << std::endl << std::endl;
    std::cout << "El programa debe de ser ejecutado de la siguiente forma: " << argv[0] << " param1 param2" << std::endl;
    std::cout << "param1: " << "Nombre del archivo a leer las fechas" << std::endl;
    std::cout << "param2: Nombre del fichero de salida" << std::endl;
    return false;
  }

  return true;
}

/**
  * @brief Lee fechas desde un fichero, valida cada una y escribe las válidas en otro fichero.
  *        El formato esperado en el fichero de entrada es: "día mes año".
  *        Cada línea puede contener varias fechas seguidas.  
  *        Solo se escribirán en el fichero de salida aquellas fechas que sean válidas.
  *
  * @param fichero_entrada Nombre del fichero desde el que se leen las fechas.
  * @param fichero_salida Nombre del fichero donde se escribirán las fechas válidas.
  */

void LeerFechas(const std::string& fichero_entrada, const std::string& fichero_salida) {

  std::ifstream entrada{fichero_entrada};
  std::ofstream salida{fichero_salida};

  if (!entrada || !salida) {

    std::cerr << "No se han podido leer los ficheros, compruebe el nombre." << std::endl;
  } else {

    std::string linea_actual{};

    while (std::getline(entrada, linea_actual)) {

      std::istringstream iss(linea_actual);
      std::string palabra_actual{};

      int year{};
      int month{};
      int day{};

      while (iss >> day >> month >> year) {

        Fecha fecha_nueva(day, month, year);

        if (fecha_nueva.IsValidDate(day, month, year)) {

          salida << fecha_nueva.Print() << std::endl;
        }
      }
    }

    std::cout << "Documento creado correctamente" << std::endl;
  }  
}

/**
  * @brief Constructor de la clase Fecha.
  *        Inicializa un objeto Fecha con día, mes y año.
  *
  * @param day Día del mes.
  * @param month Mes del año.
  * @param year Año.
  */

Fecha::Fecha(int day, int month, int year) : day_{day}, month_{month}, year_{year} {}

bool Fecha::IsValidDate(int day, int month, int year) {

  if (month < 1 || month > 12) {

    return false;
  }

  if (day < 1) return false;

  int dias_max = 31;
  switch (month) {

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
      if (EsBisiesto(year)) {

        dias_max = 29;
      } else{

        dias_max = 28;
      } 

      break;        

    default:
      dias_max = 31;
      break;
  }

  return (day <= dias_max);
}

/**
  * @brief Comprueba si un año es bisiesto o no
  * 
  * @param year Año.
  * 
  * @return true si es bisiesto, false si no
  */

bool Fecha::EsBisiesto(int year) {

  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

/**
  * @brief Devuelve la fecha en una cadena de texto
  *
  * @return fecha como una cadena de texto única.
  */

std::string Fecha::Print() const {

  std::string fecha{std::to_string(day_) + "/" + std::to_string(month_) + "/" + std::to_string(year_)};

  return fecha;
}
