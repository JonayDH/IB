#include "funciones.h"
#include <fstream>
#include <sstream>
#include <iostream>

void CambiarPalabras(const std::string& entrada, const std::string& palabra_buscar, const std::string& palabra_cambiar) {

  std::ifstream archivo_entrada{entrada};
  std::ofstream salida{"modificado.txt"};

  if (!archivo_entrada || !salida) {

    std::cerr << "No se ha podido abrir uno de los archivos" << std::endl;
  }

  std::string linea_actual{};

  while (std::getline(archivo_entrada, linea_actual)) { 


    std::istringstream iss(linea_actual);
    std::string palabra_actual{};

    while (iss >> palabra_actual) {

      if (palabra_actual == palabra_buscar) {

        salida << palabra_cambiar << " ";
      } else {

        salida << palabra_actual << " ";
      }
    }

    salida << std::endl;
  }
}