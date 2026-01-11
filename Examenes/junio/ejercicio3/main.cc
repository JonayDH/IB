#include "class.h"
#include <fstream>

int main() {

  std::string archivo_entrada{"vectores.txt"};
  std::string archivo_salida{"producto.txt"};

  std::ifstream entrada{archivo_entrada};
  std::ofstream salida{archivo_salida};

  if(!entrada || !salida) {

    std::cerr << "Algo ha ido mal" << std::endl;
    return 1;
  }

  std::string linea_actual{};

  Vector vector1{};
  Vector vector2{};

  while(entrada >> vector1 >> vector2) {

    salida << vector1 << " * " << vector2 << " = " << vector1 * vector2 << std::endl;
  }

  return 0;
}