#include <stdio.h>

char main(){
    char snack1[] = "Chips";
    float price1 = 1.50;
    int stock1 = 20;

    printf("Welcome to the Snack Shop!\n");
    printf("---------------------------\n");
    printf("1. %s - $%.2f - %d Available\n", snack1, price1, stock1);

    
    return 0;
}
