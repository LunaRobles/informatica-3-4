#include <stdio.h>

char main(){
char snack1[] = "Chips";
float price1 = 1.50;
int stock1 = 20;
char snack2[] = "Soda";
float price2 = 2.00;
int stock2 = 15;
char snack3[] = "Candy";
float price3 = 0.75;
int stock3 = 30;
printf("Welcome to the Snack Shop!\n");
printf("---------------------------\n");
printf("1. %s - $%.2f - %d Available\n", snack1, price1, stock1);
printf("2. %s - $%.2f - %d Available\n", snack2, price2, stock2);
printf("3. %s - $%.2f - %d Available\n", snack3, price3, stock3);

return 0;
}