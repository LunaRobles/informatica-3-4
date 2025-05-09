#include <stdio.h>

int main(){

    //While loop exponent
    int base;
    printf("Enter the base number:");
    scanf("%d",&base);
    

    int exponent;
    printf("Enter the exponent:");
    scanf("%d",&exponent);

    int i=1;
    int result = base;
    do { result= base * result;
        i++;
    }
     while (i<exponent);
    
    
    printf("%d ^ %d= %d\n", base,exponent, result);

    //C Library Functions






     return 0;
    }