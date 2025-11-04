#include <stdio.h>

int is_perfect(int x);

int main()
{
    int n;
    while (scanf("%d", &n) > 0) {
        printf("%s\n", is_perfect(n) ? "true" : "false");
    }
    return 0;
}
