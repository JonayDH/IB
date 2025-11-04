#include <stdio.h>

int is_leap_year(int year);

int main()
{
    int a;
    while (scanf("%d", &a) > 0) {
        printf("%s\n", is_leap_year(a) ? "true" : "false");
    }
    return 0;
}
