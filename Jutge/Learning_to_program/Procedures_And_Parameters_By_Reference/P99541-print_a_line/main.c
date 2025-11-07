#include <stdio.h>



void print(int s, char c, int n);


int main() {
  int s, n;
  char c;
  while (scanf("%d %c %d", &s, &c, &n) > 0) print(s, c, n);
}
