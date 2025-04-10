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

    return 0;
}