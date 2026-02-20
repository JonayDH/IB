/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Jonay Déniz Hernández
 * @date Oct 10 2025
 * @brief Computes the DNI letter from the number
 *        Jutge problem P97139
 *        The program takes directly the input and prints the output
 * @see https://jutge.org/problems/P97139
 * @see http://www.interior.gob.es/web/servicios-al-ciudadano/dni/calculo-del-digito-de-control-del-nif-nie
 */

#include <iostream>
#include <string>

int main() {
  int dni{0};

  std::cin >> dni;
  const std::string kLetters{"TRWAGMYFPDXBNJZSQVHLCKE"};
  std::cout << "El DNI completo es " << dni << kLetters[dni % 23] << std::endl;
  return 0;
}
