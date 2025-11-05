#include <stdio.h>

int double_factorial(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%d\n", double_factorial(n));
	}
	return 0;
}
