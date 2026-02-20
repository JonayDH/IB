/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file change.cc
  * @author Jonay Déniz Hernández  alu0101791623@ull.edu.es
  * @date Oct 4 2025
  * @brief A program that, given an amount of euros and cents, computes the minimum number of banknotes and coins needed to get that amount.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P81629_en
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

int main() {

  int euros;
  int cents;

  std::cin >> euros;
  std::cin >> cents;

  std::cout << "Banknotes of 500 euros: " << euros / 500 << std::endl;

  if (euros >= 500) {

    euros = euros % 500;
  }

  std::cout << "Banknotes of 200 euros: " << euros / 200 << std::endl;

  if (euros >= 200) {

    euros = euros % 200;
  }

  std::cout << "Banknotes of 100 euros: " << euros / 100 << std::endl;

  if (euros >= 100) {

    euros = euros % 100;
  }

  std::cout << "Banknotes of 50 euros: " << euros / 50 << std::endl;

  if (euros >= 50) {

    euros = euros % 50;
  }

  std::cout << "Banknotes of 20 euros: " << euros / 20 << std::endl;

  if (euros >= 20) {

    euros = euros % 20;
  }

  std::cout << "Banknotes of 10 euros: " << euros / 10 << std::endl;

  if (euros >= 10) {

    euros = euros % 10;
  }

  std::cout << "Banknotes of 5 euros: " << euros / 5 << std::endl;

  if (euros >= 5) {

    euros = euros % 5;
  }

  std::cout << "Coins of 2 euros: " << euros / 2 << std::endl;

  if (euros >= 2) {

    euros = euros % 2;
  }

  std::cout << "Coins of 1 euro: " << euros / 1 << std::endl;

  if (euros >= 1) {

    euros = euros % 1;
  }

  std::cout << "Coins of 50 cents: " << cents / 50 << std::endl;

  if (cents >= 50) {

    cents = cents % 50;
  }

  std::cout << "Coins of 20 cents: " << cents / 20 << std::endl;

  if (cents >= 20) {

    cents = cents % 20;
  }

  std::cout << "Coins of 10 cents: " << cents / 10 << std::endl;

  if (cents >= 10) {

    cents = cents % 10;
  }

  std::cout << "Coins of 5 cents: " << cents / 5 << std::endl;

  if (cents >= 5) {

    cents = cents % 5;
  }

  std::cout << "Coins of 2 cents: " << cents / 2 << std::endl;

  if (cents >= 2) {

    cents = cents % 2;
  }

  std::cout << "Coins of 1 cent: " << cents / 1 << std::endl;
}
