#include <stdio.h>

int is_increasing(int n);

int main()
{
    int n;
    while (scanf("%d", &n) > 0) {
        printf("%s\n", is_increasing(n) ? "true" : "false");
    }
    return 0;
}
