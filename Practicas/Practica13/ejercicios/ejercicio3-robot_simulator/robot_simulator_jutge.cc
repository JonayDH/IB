/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file robot_simulator_jutge.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Dic 8 2025
  * @brief Programa que simula las coordenadas de un robot después de una serie de movimientos
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
#include <string>
#include <utility>

enum class Bearing { 
  NORTH, 
  EAST,
  SOUTH, 
  WEST
};

class Robot {

  public:

    Robot() : position_{0, 0}, bearing_{Bearing::NORTH} {

      std::cout << "Ejecutado el Constructor sin parámetros" << std::endl;
    }

      Robot(std::pair<int, int> position, Bearing bearing) : position_{position}, bearing_{bearing}  {

      std::cout << "Ejecutado el Constructor con parámetros" << std::endl;
    }

    std::pair<int, int> get_position() const { return position_; }

    Bearing get_bearing() const { return bearing_; }

    Bearing turn_right() {

      switch (bearing_) {

        case Bearing::NORTH:

          bearing_ = Bearing::EAST;
          break;

        case Bearing::EAST:

          bearing_ = Bearing::SOUTH;
          break;

        case Bearing::SOUTH:

          bearing_ = Bearing::WEST;
          break;

        case Bearing::WEST:

          bearing_ = Bearing::NORTH;
          break;
      }

        return bearing_;
    }

    Bearing turn_left() {

      switch (bearing_) {

        case Bearing::NORTH:

          bearing_ = Bearing::WEST;
          break;

        case Bearing::EAST:

          bearing_ = Bearing::NORTH;
          break;

        case Bearing::SOUTH:

          bearing_ = Bearing::EAST;
          break;

        case Bearing::WEST:

          bearing_ = Bearing::SOUTH;
          break;
      }

      return bearing_;
    }

    std::pair<int, int> advance() {

      switch (bearing_) {

        case Bearing::NORTH:

          position_.second += 1;
          break;

        case Bearing::EAST:

          position_.first += 1;
          break;

        case Bearing::SOUTH:

          position_.second -= 1;
          break;

        case Bearing::WEST:

          position_.first -=1;
          break;
      }

      return position_;
    }

    void execute_sequence(const std::string& frase) {

      for (char caracter_acutal : frase) {

        if (caracter_acutal == 'A') {

          advance();
        }

        if (caracter_acutal == 'L') {

          turn_left();
        }

        if (caracter_acutal == 'R') {

          turn_right();
        }
      }
    }

  private:

    std::pair<int, int> position_;
    Bearing bearing_;
};

int main() {

  const std::pair<int, int> kPosition{0, 0};
  const Bearing kBearing{Bearing::NORTH};
  Robot robot{kPosition, kBearing};

  std::string sequence{};

  std::cin >> sequence;

  robot.execute_sequence(sequence);

  std::pair<int, int> final_position = robot.get_position();
  std::cout << '(' << final_position.first << ", " << final_position.second  << ")" << std::endl;

  return 0;
}