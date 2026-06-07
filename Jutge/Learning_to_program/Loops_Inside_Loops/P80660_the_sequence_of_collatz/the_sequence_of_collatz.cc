// La seqüència de Collatz
// https://jutge.org/problems/P80660_en
// Created on 6/7/2026, 11:15:31 AM by Jonay Déniz Hernández

#include <iostream>
using namespace std;

int main() {

  int numero{};
  int contador{};

  while (cin >> numero) {

    contador = 0;

    while (numero != 1) {
    
      if (numero % 2 == 0) {

        numero = numero / 2;
      } else {

        numero = numero * 3 + 1;
      }

      contador++;
    }

    cout << contador << endl; 
  }
}
