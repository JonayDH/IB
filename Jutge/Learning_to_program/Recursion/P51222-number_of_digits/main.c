#include <stdio.h>

int number_of_digits(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%d\n", number_of_digits(n));
	}
	return 0;
}
