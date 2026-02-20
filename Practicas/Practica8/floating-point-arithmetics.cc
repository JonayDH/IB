/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Hdez. Aceituno
 * @date Oct 20, 2025
 * @brief Shows floating point arithmetics
 *
 * @see https://stackoverflow.com/a/17341/12791643
 */

#include <iostream>

int main() {
  constexpr double kRealSum{0.1 + 0.2};
  std::cout << kRealSum << std::endl << 0.3 << std::endl
            << (kRealSum == 0.3) ? "Equal" : "Different" << std::endl;
  return 0;
}
