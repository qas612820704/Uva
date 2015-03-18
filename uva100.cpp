#include <iostream>
using namespace std;

int n3p1(unsigned long long int);

int main() {
  unsigned long long int i,j;
  int tmp=0, result;
  
  while (cin >> i >> j) {
    result = 0;
    cout << i << " " << j << " ";
    do {
      tmp = n3p1(i);
      if ( result < tmp)
	result = tmp;
    } while (i++ < j);
    cout << result << endl;
  }
}
int n3p1(unsigned long long int num){
  int cnt = 1;
  while ( num != 1) {
    if ( num%2 == 1)
      num = num*3 + 1;
    else
      num /= 2;
    cnt++;
  }
  return cnt;
}
