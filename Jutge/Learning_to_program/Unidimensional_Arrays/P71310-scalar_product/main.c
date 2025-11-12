#include <stdio.h>

double scalar_product(int n, double u[n], double v[n]);

int main()
{
    int i, n;
    while (scanf("%d", &n) > 0) {
        double u[n];
        double v[n];
        for (i = 0; i < n; ++i)
            scanf("%lf", &u[i]);
        for (i = 0; i < n; ++i)
            scanf("%lf", &v[i]);
        printf("%.4lf\n", scalar_product(n, u, v));
    }
    return 0;
}
