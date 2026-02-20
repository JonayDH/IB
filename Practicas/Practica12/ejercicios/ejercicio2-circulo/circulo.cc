/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file circulo.cc
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
#include "circulo.h"

constexpr double kPi{3.14159265358979323846};

/**
  * @brief Constructor de la clase Circulo.
  *
  * @param centro Punto que representa el centro del círculo.
  * @param radio Radio del círculo.
  * @param color Color del círculo.
  */

Circulo::Circulo(const Point2D& centro, double radio, Color color) : centro_(centro), radio_(radio), color_(color) {}

/**
  * @brief Calcula el área del círculo
  * 
  * @return area 
  */

double Circulo::Area() const{

  return kPi * (radio_ * radio_);
}

/**
  * @brief Calcula el perimetro del círculo
  * 
  * @return perimetro
  */

double Circulo::Perimetro() const{

  return 2.0 * kPi * radio_;
}

/// @brief Imprime las características del círculo 

void Circulo::Print() const{

  std::cout << "Radio: " << radio_ << std::endl;
  std::cout << "Centro: ";
  centro_.Show();
  std::cout << "Color: " << color_ << std::endl;
}

/**
  * @brief Calcula si un punto está dentro de un círculo
  * 
  * @return true si está dentro, false si no 
  */

bool Circulo::EsInterior(double x_coord, double y_coord) const{

  Point2D punto(x_coord, y_coord);
  double distancia{centro_.Distance(punto)};

  return distancia <= radio_;
}

/**
  * @brief convierte una cadena de texto a un valor de color
  * 
  * @param color cadena a transformar
  * 
  * @return valor de color 
  */

Color StringToColor(const std::string& color) {
    if (color == "rojo") return Color::rojo;
    if (color == "verde") return Color::verde;
    if (color == "amarillo") return Color::amarillo;
    if (color == "azul") return Color::azul;
    if (color == "violeta") return Color::violeta;
    if (color == "rosa") return Color::rosa;
    if (color == "negro") return Color::negro;
    if (color == "blanco") return Color::blanco;
  
  return Color::desconocido;
}