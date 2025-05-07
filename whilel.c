#include <stdio.h>

int main() {
  int count = 0;
  int n;

  printf ("enter a positive number:");
  scanf("%d", &n);

  do {
    n=n/10;
    //n/=10

    count++;
  } while (n!=0);

  printf("number of digits: %d\n",count);

  return 0;
}