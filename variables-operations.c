#include <stdio.h>

int main(){
    int length = 4;
    int with = 10;
    int area = length * with;
    int perimeter = (length + length + with + with);
    printf("area: %d \n",area);
    printf("perimeter: %d \n",perimeter);

    int fahrenheit = 40;
    float celsius = (fahrenheit-32)/1.8;
    printf("fahrenheit: %d \n",fahrenheit);
    printf("celsius: %2f \n",celsius);

    int totalminutes = 349;
    int hours = totalminutes/60;
    int minutes = 349 - 300;
    printf("%d minutes is equal to %d hours and %d minutes",totalminutes, hours, minutes);

    return 0;
}