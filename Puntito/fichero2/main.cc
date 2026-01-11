#include "funciones.h"
#include <string>

int main() {

  std::string palabra_buscar{"hola"};
  std::string palabra_cambiar{"adios"};
  std::string nombre_archivo{"fichero.txt"};

  CambiarPalabras(nombre_archivo, palabra_buscar, palabra_cambiar);

  return 0;
}