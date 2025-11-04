#include <stdio.h>

int max2(int a, int b);

int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) > 0) {
        printf("%d\n", max2(a, b));
    }
    return 0;
}
