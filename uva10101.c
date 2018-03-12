#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bangla(long long number) {
  if (number >= 10000000) {
    bangla(number / 10000000);
    printf(" kuti");
    number %= 10000000;
  }
  if (number >= 100000) {
    bangla(number / 100000);
    printf(" lakh");
    number %= 100000;
  }
  if (number >= 1000) {
    bangla(number / 1000);
    printf(" hajar");
    number %= 1000;
  }
  if (number >= 100) {
    bangla(number / 100);
    printf(" shata");
    number %= 100;
  }
  if (number > 0)
    printf(" %lld", number);
}

int main() {
  long long number;

  int nInput = 0;
  while(scanf("%lld", &number) != EOF) {
    printf("%4d.", ++nInput);

    if (number == 0) {
      printf(" 0");
    } else {
      bangla(number);
    }
    printf("\n");
  }
  return 0;
}
