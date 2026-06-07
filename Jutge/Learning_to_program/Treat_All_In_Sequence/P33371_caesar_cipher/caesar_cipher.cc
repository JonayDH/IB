// Codi Cèsar
// https://jutge.org/problems/P33371_en
// Created on 6/7/2026, 11:30:25 AM by Jonay Déniz Hernández

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char encode(char c, int k) {

  if (c == '_') return ' ';
  if (c == ',') return ',';
  if (c == '-') return '-';

  k %= 26;

  if (c >= 'a' && c <= 'z') {

    return 'a' + (c - 'a' + k) % 26;
  }

  return c;
}

int main() {

  int cesar{};
  string cadena{};

  while (cin >> cesar && cin >> cadena) {

    for (char c: cadena) {

      if (c == '.') {

      } else {

        cout << static_cast<char>(toupper(encode(c,cesar)));
      }
    }

    cout << endl;
  }

  return 0;
}
