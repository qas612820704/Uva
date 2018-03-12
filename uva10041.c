// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=982
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpFunc (const void *a, const void *b) {
  return *(int*)a - *(int*)b;
}

int minDis(int* r, int n) {
  qsort(r, n, sizeof(*r), cmpFunc);
  int mid = r[n/2];
  int sum = 0;
  for (size_t i = 0; i < n; i++) {
    sum += abs(r[i] - mid);
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  int nCase, nRelatives;
  int r[500];

  scanf("%d", &nCase);

  for (size_t i = 0; i < nCase; i++) {
    scanf("%d", &nRelatives);
    for (size_t j = 0; j < nRelatives; j++) {
      scanf("%d", &r[j]);
    }
    printf("%d\n", minDis(r, nRelatives));
  }

  return 0;
}
