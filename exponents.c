#include <stdio.h>
   #include <math.h>
int main()
//  {While loop exponent
//  int base;
//  printf("Enter the base number:");
//  scanf("%d",&base);
    

//  int exponent;
//    printf("Enter the exponent:");
//    scanf("%d",&exponent);
//
//    int i=1;
//    int result = base;
//    do { result= base * result;
//       i++;
    
//     while (i<exponent);
    
    
//    printf("%d ^ %d= %d\n", base,exponent, result);
{
    //C Library Functions
    float num, root;
    printf("enter a number:");
     scanf("%f", &num);

        //Computes the squarew root of num and stores in root.
        root= sqrt (num);

        printf("square root of %.2f = %.2f", num, root);

    return 0;
 }