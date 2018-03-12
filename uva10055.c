#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  long numSoldier, numOpponent;

  while(scanf("%ld %ld", &numSoldier, &numOpponent) != EOF) {
    printf("%ld\n", labs(numOpponent - numSoldier));
  }
  return 0;
}
