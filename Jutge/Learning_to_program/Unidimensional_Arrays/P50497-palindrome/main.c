#include <stdio.h>
#include <string.h>

int is_palindrome(const char s[], int ssize);

int main() {
  int n, rep;
	char s[2000010], c;
	while (scanf("%s", s) > 0) {
    n = (int)strlen(s);
    printf("%d\n", is_palindrome(s, n));
    if (n > 100) {
      c = s[0];
      s[0] = 'a';
      for (rep = 1000; rep > 0; --rep) printf("%d\n", is_palindrome(s, n));
      s[0] = c;
      c = s[1];
      s[1] = 'a';
      for (rep = 1000; rep > 0; --rep) printf("%d\n", is_palindrome(s, n));
      s[1] = c;
      c = s[3];
      s[3] = 'a';
      for (rep = 1000; rep > 0; --rep) printf("%d\n", is_palindrome(s, n));
      s[3] = c;
      c = s[n - 1];
      s[n - 1] = 'a';
      for (rep = 1000; rep > 0; --rep) printf("%d\n", is_palindrome(s, n));
      s[n - 1] = c;
      c = s[n - 2];
      s[n - 2] = 'a';
      for (rep = 1000; rep > 0; --rep) printf("%d\n", is_palindrome(s, n));
      s[n - 2] = c;
      c = s[n - 7];
      s[n - 7] = 'a';
      for (rep = 1000; rep > 0; --rep) printf("%d\n", is_palindrome(s, n));
      s[n - 7] = c;
    } 
	}
	return 0;
}
