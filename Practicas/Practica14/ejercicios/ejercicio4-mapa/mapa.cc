/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file personas.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 8 2025
  * @brief Código de las funciones necesarias
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p14-oop2-JonayDH/blob/main/README.md
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
#include "mapa.h"

/// @brief Muestra el propósito del programa por pantalla

void PrintProgramPurpose() {

  std::cout << "Este programa sirve para hacer personas e imprime sus datos" << std::endl;
}

/// @brief Constructor de la clase DNI

DNI::DNI(int numero) : numero_(numero) {};

/// @brief Función que sirve para obtener el número del dni

int DNI::GetNumero() const{

  return numero_;
}

/// @brief Función que sirve para obtener la letra del dni

char DNI::GetLetra() const{

  const std::string kLetras = "TRWAGMYFPDXBNJZSQVHLCKE";

  int resto = numero_ % 23;
  char letra = kLetras[resto];

  return letra;
}

/// @brief Constructor de la clase persona

Persona::Persona(std::string nombre, DNI dni) : nombre_(nombre), dni_(dni) {};

/// @brief Sobrecarga del operador << para imprimir los datos de una persona

std::ostream& operator<<(std::ostream& os, const Persona& persona) {

  os << persona.nombre_ << " " << persona.dni_.GetNumero() << persona.dni_.GetLetra();

  return os;
}

/// @brief Función que devuelve el nombre de una persona

std::string Persona::GetNombre() const{

  return nombre_;
}

/// @brief Función que devuelve el dni de una persona

const DNI& Persona::GetDni() const {

  return dni_;
}

