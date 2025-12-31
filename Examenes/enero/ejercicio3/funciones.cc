/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 31 2025
  * @brief Código de las funciones necesarias
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

#include "funciones.h"
#include <iostream>

Rey::Rey(const std::string& nombre, int year_start, int year_end) : nombre_{nombre}, year_start_{year_start}, year_end_{year_end} {}

std::string Rey::GetName() const {

  return nombre_;
}

int Rey::GetYearStart() const {

  return year_start_;
}

int Rey::GetYearEnd() const {

  return year_end_;
}

void Rey::SetName(std::string& name) {

  nombre_ = name;
}

void Rey::SetYearStart(int year) {

  year_start_ = year;
}

void Rey::SetYearEnd(int year) {

  year_end_ = year;
}

int Rey::YearsGobernando() const {

  return year_end_ - year_start_;
}

std::ostream& operator<<(std::ostream& os, const Rey& rey) {

  os << rey.GetName() << " " << rey.GetYearStart() << " " << rey.GetYearEnd();
  return os;
}

std::istream& operator>>(std::istream& entrada, Rey& rey) {

  std::string nombre{""};
  int year_inicio{}, year_final{};

  entrada >> nombre >> year_inicio >> year_final;

  rey.SetName(nombre);
  rey.SetYearStart(year_inicio);
  rey.SetYearEnd(year_final);

  return entrada;
}