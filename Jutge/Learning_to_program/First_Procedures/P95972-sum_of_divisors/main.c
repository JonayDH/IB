#include <stdio.h>

int sum_divisors(int x);

int main() {
	int n;
	while (scanf("%d", &n) > 0) {
    printf("%d\n", sum_divisors(n));
	}
	return 0;
}
