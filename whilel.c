// Print numbers from 1 to 5

#include <stdio.h>

int main() {
  int i = 1;
  int n;
  printf ("enter a number:");
  scanf("%d", &n);
  while (i <= n) {
    printf("%d\n", i);
    ++i;
  }

  printf ("then the number of digits of the given number is the last number in that list");

  return 0;
}