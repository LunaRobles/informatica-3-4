#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int gess; 
printf("Is the coin flip resulting in heads or tails?\n (anser with a 1 if you think is a head and with a 2 if you think is a tail)\n my gess is:");
scanf("%d",&gess);
   
    srand(time(NULL));
    int coin;
    coin =(rand() % 2) + 1; // Generates faces

if (gess==1 && coin==1)
    {printf("your gess is right🟢, it is a head 🤩\n");}

if (gess==2 && coin==2)
    {printf("your gess is right🟢, it is a tail 🤩\n");}

if (gess==1 && coin==2)
    {printf("your gess is wrong🔴, it is a tail, good luck for the next one 🍀\n");}

    if (gess==2 && coin==1)
    {printf("your gess is wrong🔴, it is a head, good luck for the next one 🍀\n");}

    return 0;
}