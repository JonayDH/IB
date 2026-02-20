/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2025-2026
  *
  * @file reference.cc
  * @author Javier Hdez. Aceituno jhernaac@ull.edu.es
  * @date Oct 02 2025
  * @brief This program creates and operates with references and pointers,
  *        so PythonTutor can display how program memory is managed
  * @bug There are no known bugs
  * @see http://pythontutor.com/cpp.html#mode=edit
  */

#include <iostream>
#include <cassert>

int main() {
  int variable_1{37};
  int &reference_1{variable_1};
  int *pointer_1{&variable_1};
  
  // Confirm assignations
  assert(reference_1 == *pointer_1 && &reference_1 == pointer_1);
  
  std::cout << "Memory address [" << std::hex << pointer_1
            << "] contains value " << std::dec << variable_1 << std::endl;
            
  double variable_2{0.42};
  double &reference_2{variable_2};
  double *pointer_2{nullptr};
  
  std::cout << "pointer_2 is currently " << std::hex << pointer_2 << std::endl;
  
  pointer_2 = &reference_2;
  assert(&variable_2 == pointer_2);
  
  variable_2 += variable_1;
  
  std::cout << "Memory address [" << std::hex << pointer_2
            << "] contains value " << std::dec << reference_2 << std::endl;
  
  return 0;
}

