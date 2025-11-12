#include <stdio.h>
#include <stdlib.h>

int exists(int x, const int v[], int vsize);

int cmpfunc (const void* a, const void* b) {
  return *(int*)a - *(int*)b;
}

int compact(int *array, int size) {
  int i;
  int last = 0;
  if (size <= 0) return size;
  for (i = 1; i < size; i++) {
    if (array[i] != array[last])
      array[++last] = array[i];
  }
  return(last + 1);
}

int main() {
	int i, n, m;
	while (scanf("%d", &n) > 0) {
    int v[n], sv[n];
    for (i = 0; i < n; ++i) {
      scanf("%d", &v[i]);
      sv[i] = v[i];
    }
    qsort(sv, n, sizeof(int), cmpfunc);
    m = compact(sv, n);
    int a[m];
    for (i = 0; i < m; ++i) a[i] = sv[i];
    printf("%s\n", exists(1234, v, n) ? "1" : "0");
    printf("%s\n", exists(-1000000, v, n) ? "1" : "0");
    if (n < 100) {
      for (i = 0; i < m; ++i) printf("%s\n", exists(a[i], v, n) ? "1" : "0");
      for (i = 1; i < m; ++i)
        printf("%s\n", exists((a[i] + a[i - 1]) / 2, v, n) ? "1" : "0");
    } else {
      for (int rep = 1000; rep > 0; --rep)
        for (i = 0; i < m; ++i) printf("%s\n", exists(a[i], v, n) ? "1" : "0");
    }
	}
	return 0;
}
