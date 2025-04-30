
#include <stdio.h>

//Example
int main() {
// Print numbers from 1 to 10
  /*int i;
  for (i = 1; i < 21; ++i){
    printf("%d ", i);
  }
  return 0;*/

  //Exercise 1
  int n;
  printf("enter a positive number");
  scanf("%d", &n);

    int i;
    int sum=0;
    for (i=1; i<n+1; ++i){
        sum= sum+i;
        }
        printf("%d\n", sum);
    

  //Exercise 2
  int m;
  printf("enter a positive number");
  scanf("%d", &m);

    int j;
    int multi=1;
    for (j=1; j<m+1; ++j){
        multi= multi*j;
        }
        printf("%d\n", multi);
    }
    
