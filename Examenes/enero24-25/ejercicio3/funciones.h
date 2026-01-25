/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.h
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 31 2025
  * @brief Archivo de cabecera
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

#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <string>

class Rey {

  public:

    Rey(const std::string& nombre, int year_start, int year_end);
    int GetYearStart() const;
    int GetYearEnd() const;
    std::string GetName() const;
    void SetYearStart(int year);
    void SetYearEnd(int year);
    void SetName(std::string& name);
    int YearsGobernando() const;
    friend std::ostream& operator<<(std::ostream& os, const Rey& rey); 

  private:

    std::string nombre_;
    int year_start_;
    int year_end_;

};

std::istream& operator>>(std::istream& entrada, Rey& rey);

#endif