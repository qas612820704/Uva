#include <stdio.h>
#include <stdlib.h>

void SWAP(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int getCycleOf3np1(int number) {
  int nCycle = 1;

  while(number > 1) {
    if (number % 2 == 0) {
      number = number >> 1;
    } else {
      number = 3 * number + 1;
    }
    nCycle += 1;
  }

  return nCycle;
}

int main(int argc, char const *argv[]) {
  int a, b;

  while(scanf("%d %d", &a, &b) != EOF) {
    int i = a;
    int j = b;
    if (j < i) SWAP(&i, &j);

    int maxCycle = -1;

    for (size_t k=i; k <=j; k++) {
      int nCycle = getCycleOf3np1(k);
      maxCycle = maxCycle > nCycle ? maxCycle : nCycle;
    }

    printf("%d %d %d\n", a, b, maxCycle);
  }
  return 0;
};
