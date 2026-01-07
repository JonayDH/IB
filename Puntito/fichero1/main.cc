
#include <string>
#include <fstream>
#include <iostream>

void Elecciones(std::string& fichero);

int main() {

  std::string fichero{};

  std::cout << "Introduce el nombre del fichero: ";
  std::cin >> fichero;
  std::cout << std::endl;

  Elecciones(fichero);

  return 0;
}

void Elecciones(std::string& fichero) {

  int partido{};
  int votos1{};
  int votos2{};
  int votos3{};
  int total1{};
  int total2{};
  int total3{};

  std::fstream archivo{fichero};

  while (archivo >> partido >> votos1 >> votos2 >> votos3) {

    total1 += votos1;
    total2 += votos2;
    total3 += votos3;
  }

  if (total1 >= total2) {

    if (total1 >= total3) {

      std::cout << "Gano el partido 1 con: " << total1 << " votos." << std::endl;
    } else {

      std::cout << "Gano el partido 3 con: " << total3 << " votos." << std::endl;
    }
  } else {

    if (total2 >= total3) {

      std::cout << "Gano el partido 2 con: " << total2 << " votos." << std::endl;
    } else {

      std::cout << "Gano el partido 3 con: " << total3 << " votos." << std::endl;
    }
  }
}