#include <stdio.h>
#include <stdlib.h>

int checkMultipleOf11(char *strNumber) {
  int i = -1;
  int sum = 0;
  while (strNumber[++i] != 0) {
    int digit = strNumber[i] - '0';
    sum += i % 2 ? digit : -1 * digit;
  }
  return sum % 11 == 0;
}

int main(int argc, char const *argv[]) {
  char strNumber[1001];
  while(scanf("%s", strNumber) && !(strNumber[0] == '0' && strNumber[1] == 0)) {
    if (checkMultipleOf11(strNumber)) {
      printf("%s is a multiple of 11.\n", strNumber);
    } else {
      printf("%s is not a multiple of 11.\n", strNumber);
    }
  }
  return 0;
}
