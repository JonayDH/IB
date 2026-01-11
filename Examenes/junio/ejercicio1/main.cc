#include <iostream>

int PosicionVocal(std::string& cadena, bool booleano = false);

int main() {

  std::string cadena("Hola");

  std::cout << PosicionVocal(cadena, true) << std::endl;

  return 0;
}

int PosicionVocal(std::string& cadena, bool booleano) {

  if(booleano == false) {

    for(int i{}; i < static_cast<int>(cadena.size()); i++) {

      if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u') {

        return i;
      }
    }

    return -1;
  } else {

    for(int i{static_cast<int>(cadena.size()) - 1}; i >= 0; i--) {

      if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u') {

        return i;
      }
    }

    return -1;
  }
}