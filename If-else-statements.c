#include <stdio.h>

int main(){
    //Excercise 1
    
    int num1;
    printf("Enter an integer for number 1:");
    scanf("%d",&num1);

    int num2;
    printf("Enter an integer for number 2:");
    scanf("%d",&num2);

    if (num1 == num2){
        printf("%d is equal to %d \n",num1, num2);
    }else{
        printf("%d is NOT equal to %d \n",num1, num2);
    }



    int given;
    printf("Enter a number to see if is even or odd:");
    scanf("%d",&given);

    if (given%2 == 0) {
        printf("%d is an even number \n",given);
    }else{
        printf("%d is an odd number \n",given);
    }


    int day;
    printf("Enter a number of day from 1 to 7:");
    scanf("%d",&day);

    if (day == 1)
        printf("day %d is Sunday \n",day);
    if (day == 2) 
        printf("day %d is Monday \n",day);
    if (day == 3) 
        printf("day %d is Tuesday \n",day);
    if (day == 4)
        printf("day %d is Wednesday \n",day);
    if (day == 5) 
        printf("day %d is Thursday \n",day);
    if (day == 6) 
        printf("day %d is Friday \n",day);
    if (day == 7) 
        printf("day %d is Saturday \n",day);
    


    int number1;
    printf("Enter a number to made a sum:");
    scanf("%d",&number1);

    int number2;
    printf("Enter another number to made a sum:");
    scanf("%d",&number2);

    int sum = number1 + number2;

    printf("The sum is: %d\n", sum);

    return 0;
}