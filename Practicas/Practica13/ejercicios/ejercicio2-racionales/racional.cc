/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file racional.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 6 2025
  * @brief Código de las funciones necesarias
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p13-oop-JonayDH/blob/main/README.md
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
#include "racional.h"

/// @brief Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para hacer operaciones variadas con un racional" << std::endl;
}

/** 
  * @brief Muestra el modo de uso correcto del programa
  *        En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
  *        la ejecución del programa.
  *
  * @param argc Numero de parámetros de la linea de comandos
  * @param argv Vector que contiene (char*) los parámetros
  * @param kCorrectNumber Número esperado de parámetros.
  * 
  * @return true si argc es igual a kCorrectNumber, false en caso contrario.
  */

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {

  if (argc != kCorrectNumber) {

    std::cout << "El número de parámetros introducido es incorrecto:" << std::endl << std::endl;
    std::cout << "El programa debe de ser ejecutado de la siguiente forma: " << argv[0] << " param1 param2" << std::endl;
    std::cout << "Si necesita más información pruebe: ./racionales --help" << std::endl << std::endl;

    return false;
  }

  return true;
}

/// @brief Muestra por pantalla la información de ayuda del programa.

void PrintAyuda() {

  std::cout << "El programa debe de ser ejecutado de la siguiente forma: ./complejos param1 param2" << std::endl;
  std::cout << "param1: Fichero de texto conteniendo líneas con un par de números racionales: a/b c/d separados por un espacio" << std::endl;
  std::cout << "param2: Fichero de texto que contendrá líneas con las operaciones realizadas: a/b + c/d = n/m" << std::endl << std::endl;
}

/**
  * @brief Esta función lee números racionales de un fichero y devuelve operaciones en otro
  * 
  * @param fichero_entrada Fichero con los números racionales a leer
  * @param fichero_saldia Fichero en donde guardar las operaciones 
  */

void LeerRacionales(const std::string& fichero_entrada, const std::string& fichero_salida) {

  std::ifstream entrada{fichero_entrada};
  std::ofstream salida{fichero_salida};

  if (!entrada || !salida) {

    std::cerr << "No se han podido leer los ficheros, compruebe el nombre." << std::endl;
  } else {

    std::string linea_actual{};

    while (std::getline(entrada, linea_actual)) {

      std::istringstream iss(linea_actual);

      Racionales racional1, racional2;

      while (iss >> racional1 >> racional2) {

        if (racional1.EsValido() && racional2.EsValido()) {

          salida << racional1 << " + " << racional2 << " = " << (racional1 + racional2) << std::endl;
          salida << racional1 << " - " << racional2 << " = " << (racional1 - racional2) << std::endl;
          salida << racional1 << " * " << racional2 << " = " << (racional1 * racional2) << std::endl;
          salida << racional1 << " / " << racional2 << " = " << (racional1 / racional2) << std::endl;
          salida << racional1 << " = " << racional2 << ": " << std::boolalpha << (racional1 == racional2) << std::endl;
          salida << std::endl;
        }

      }
    }
  }
    std::cout << "Documento creado correctamente" << std::endl;
}

/// @brief Constructor de la clase Racionales

Racionales::Racionales() : numerador_(0), denominador_(1) {};

/// @brief Constructor de la clase Racionales

Racionales::Racionales(int numerador, int denominador) : numerador_(numerador), denominador_(denominador) {};

/**
  * @brief Función que devuelve el numerador de un racional
  * 
  * @return numerador 
  */

int Racionales::GetNumerador() const {

  return numerador_;
}

/**
  * @brief Función que devuelve el denominador de un racional
  * 
  * @return denominador
  */

int Racionales::GetDenominador() const {

  return denominador_;
}

/**
  * @brief Función que comprueba si un número racional es valido o no
  * 
  * @return false si es denominador no es 0, true si es 0
  */

bool Racionales::EsValido() const {

  return denominador_ != 0;
}

/**
  * @brief Sobrecarga del operador + para sumar racionales
  * 
  * @param racional1 Primer racional
  * @param racional2 Segundo racional
  *  
  * @return suma de los racionales
  */ 

Racionales operator+(const Racionales& racional1, const Racionales& racional2) {

  if (racional1.GetDenominador() == racional2.GetDenominador()) {

    int nuevo_numerador{racional1.GetNumerador() + racional2.GetNumerador()};
    int nuevo_denominador{racional1.GetDenominador()};

    Racionales racional_nuevo(nuevo_numerador, nuevo_denominador);

    return racional_nuevo;
  }

  int nuevo_denominador{racional1.GetDenominador() * racional2.GetDenominador()};
  int nuevo_numerador1{(nuevo_denominador / racional1.GetDenominador()) * racional1.GetNumerador()};
  int nuevo_numerador2{(nuevo_denominador / racional2.GetDenominador()) * racional2.GetNumerador()};
  int nuevo_numerador{nuevo_numerador1 + nuevo_numerador2};

  Racionales racional_nuevo(nuevo_numerador, nuevo_denominador);

  return racional_nuevo;
}

/**
  * @brief Sobrecarga del operador - para restar racionales
  * 
  * @param racional1 Primer racional
  * @param racional2 Segundo racional
  *  
  * @return resta de los racionales
  */ 

Racionales operator-(const Racionales& racional1, const Racionales& racional2) {

  if (racional1.GetDenominador() == racional2.GetDenominador()) {

    int nuevo_numerador{racional1.GetNumerador() - racional2.GetNumerador()};
    int nuevo_denominador{racional1.GetDenominador()};

    Racionales racional_nuevo(nuevo_numerador, nuevo_denominador);

    return racional_nuevo;
  }

  int nuevo_denominador{racional1.GetDenominador() * racional2.GetDenominador()};
  int nuevo_numerador1{(nuevo_denominador / racional1.GetDenominador()) * racional1.GetNumerador()};
  int nuevo_numerador2{(nuevo_denominador / racional2.GetDenominador()) * racional2.GetNumerador()};
  int nuevo_numerador{nuevo_numerador1 - nuevo_numerador2};

  Racionales racional_nuevo(nuevo_numerador, nuevo_denominador);

  return racional_nuevo;
}

/**
  * @brief Sobrecarga del operador * para multiplicar racionales
  * 
  * @param racional1 Primer racional
  * @param racional2 Segundo racional
  *  
  * @return multiplicación de los racionales
  */ 

Racionales operator*(const Racionales& racional1, const Racionales& racional2) {

  int nuevo_numerador{racional1.GetNumerador() * racional2.GetNumerador()};
  int nuevo_denominador{racional1.GetDenominador() * racional2.GetDenominador()};

  Racionales racional_nuevo(nuevo_numerador, nuevo_denominador);

  return racional_nuevo;
}

/**
  * @brief Sobrecarga del operador / para dividir racionales
  * 
  * @param racional1 Primer racional
  * @param racional2 Segundo racional
  *  
  * @return división de los racionales
  */ 

Racionales operator/(const Racionales& racional1, const Racionales& racional2) {

  int nuevo_numerador{racional1.GetNumerador() * racional2.GetDenominador()};
  int nuevo_denominador{racional1.GetDenominador() * racional2.GetNumerador()};

  Racionales racional_nuevo(nuevo_numerador, nuevo_denominador);

  return racional_nuevo;
}

/**
  * @brief Sobrecarga del operador == para comprobar que dos racionales son iguales
  * 
  * @param racional1 Primer racional
  * @param racional2 Segundo racional
  *  
  * @return true si son iguales
  */ 

bool operator==(const Racionales& racional1, const Racionales& racional2) {


  int numerador1{racional1.GetNumerador()};
  int denominador1{racional1.GetDenominador()};

  int numerador2{racional2.GetNumerador()};
  int denominador2{racional2.GetDenominador()};

  int aux{numerador1 * denominador2};
  int aux2{numerador2 * denominador1};

  if (aux == aux2) {

    return true;
  } else {

    return false;
  }
}


/**
  * @brief Sobrecarga del operador >> para leer un racional
  *
  * @param is Flujo de entrada
  * @param racional racional
  * @return Flujo de entrada
  */

std::istream& operator>>(std::istream& is, Racionales& racional) {

  int numerador{}, denominador{};
  char separador{};

  if (is >> numerador >> separador >> denominador) {

    if (separador == '/') {

      racional = Racionales(numerador, denominador);
      return is;
    }
  }

  return is;
}

/**
  * @brief Sobrecarga del operador >> para imprimir un racional
  *
  * @param os Flujo de salida
  * @param racional racional
  * @return Flujo de salida
  */

std::ostream& operator<<(std::ostream& os, const Racionales& racional) {

  os << racional.GetNumerador() << "/" << racional.GetDenominador();

  return os;
}
