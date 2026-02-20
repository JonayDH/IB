/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file funciones.h
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Nov 28 2025
  * @brief Archivo de cabecera
  * @bug There are no known bugs
  * @see https://github.com/IB-2025-2026/p11-files-JonayDH/blob/main/files.md
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
#include <vector>

void PrintProgramPurpose();
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber);
bool AnalizarPalabra(const std::string& palabra_actual);
std::string RecorrerVector(std::vector<std::string>& vector);
void Indice(const std::string& fichero_entrada, const std::string& fichero_salida);

#endif