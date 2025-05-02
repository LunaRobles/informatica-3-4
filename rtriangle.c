#include <stdio.h>

    int main (){

    //Example
    int n;
    printf("enter the number of rows the triangle will have as its height:");
    scanf("%d", &n);

    int i;
    int j;
    for (i=1; i<=n; i++){
       for(j=1; j<=i; j++) {
            printf("*");
       }
       printf("\n");
        }
 
    //challenge
    int m;
    printf("enter the number of rows the triangle will have as its height:");
    scanf("%d", &m);

    int a;
    int k;
    for (a=1; a<=m; a++){
       for(k=1; k<=a; k++) {
            printf("*");
       }
       printf("\n");
        }
    
    }