#include <stdio.h>

int is_valid_date(int d, int m, int a);

int main()
{
    int d, m, a;
    while (scanf("%d %d %d", &d, &m, &a) > 0) {
        printf("%s\n", is_valid_date(d, m, a) ? "true" : "false");
    }
    return 0;
}
