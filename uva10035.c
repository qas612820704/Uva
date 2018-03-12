#include <stdio.h>
#include <stdlib.h>

int getCarry(long a, long b) {
  int nCarry = 0;
  int carry = 0;
  while((a != 0 && b != 0) || carry != 0) {
    carry = a%10 + b%10 + carry >= 10 ? 1 : 0;
    if (carry > 0) nCarry++;

    a /= 10;
    b /= 10;
  }
  return nCarry;
}

int main(int argc, char const *argv[]) {
  long a, b;

  while(scanf("%ld %ld", &a, &b) && !(a==0 && b==0)) {
    int nCarry = getCarry(a, b);

    if (nCarry == 0) {
      printf("No carry operation.\n");
    } else if (nCarry == 1) {
      printf("1 carry operation.\n");
    } else {
      printf("%d carry operations.\n", nCarry);
    }
  }

  return 0;
}
