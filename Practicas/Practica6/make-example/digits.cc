/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Hdez. Aceituno
 * @date Oct 12 2025
 * @brief Count the number of decimal digits of an integer power
 * @bug In case of long int overflow or 0,
 *      the number of digits might be inaccurate
 */

#include <iostream>

int main() {
  int base{0}, exponent{0};
  std::cout << "Base: ";
  std::cin >> base;
  std::cout << "Exponent: ";
  std::cin >> exponent;
  
  // If the exponent is negative, the result could be non-integer
  if (exponent < 0) {
    std::cerr << "Only positive exponents, please" << std::endl;
    return 1;  // Exit the program
  }
  
  // Compute power by repeatedly multiplying by 'base'
  long power{1};
  for (int i{0}; i < exponent; ++i) {  // Repeat 'exponent' times
    power *= base;
  }
  std::cout << base << '^' << exponent << " = " << power;
  
  // Compute number of digits of power by repeatedly dividing by 10
  short digits{0};
  while (power > 0) {  // Repeat until 'power' is zero
    power /= 10;
    ++digits;
  }
  std::cout << " (" << digits << " digits)" << std::endl;
  return 0;
}

