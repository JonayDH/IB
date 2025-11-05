#include <stdio.h>

int factorial(int n);

int main()
{
    int n;
    while (scanf("%d", &n) > 0) {
        printf("%d\n", factorial(n));
    }
    return 0;
}
