/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file point2d.cc
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
#include <cmath>
#include "point2d.h"

/**
  * @brief Constructor de la clase Point2D.
  *
  * @param xCoord Coordenada X del punto.
  * @param yCoord Coordenada Y del punto.
  */

Point2D::Point2D(double xCoord, double yCoord) : xCoord_(xCoord), yCoord_(yCoord) {}

/// @brief Imprime las coordenadas de un punto

void Point2D::Show() const {

  std::cout << xCoord_ << " " << yCoord_ << std::endl;
}

/**
  * @brief Calcula la distancia entre dos puntos.
  *
  * @param other Otro punto.
  * 
  * @return Distancia entre ambos puntos.
  */

double Point2D::Distance(const Point2D& other) const {

  double coordenada_x{xCoord_ - other.xCoord_};
  double coordenada_y{yCoord_ - other.yCoord_};
  double distancia_sin_raiz{coordenada_x * coordenada_x + coordenada_y * coordenada_y};
  double distancia{std::sqrt(distancia_sin_raiz)};

  return distancia;
}

/**
  * @brief Mueve el punto a unas nuevas coordenadas.
  *
  * @param xNew Nueva coordenada X.
  * @param yNew Nueva coordenada Y.
  */

void Point2D::Move(double xNew, double yNew) {

  xCoord_ = xNew;
  yCoord_ = yNew;
}

/**
  * @brief Calcula el punto medio entre dos puntos.
  *
  * @param other Otro punto.
  * @return punto medio.
  */

Point2D Point2D::Middle(const Point2D& other) const {

  double coordenada_x{(xCoord_ + other.xCoord_) / 2.0};
  double coordenada_y{(yCoord_ + other.yCoord_) / 2.0};

  return Point2D(coordenada_x, coordenada_y);
}
