#include <stdio.h>

int main(){
    int length;
    printf("enter the length of the rectangle:");
    scanf("%d",&length);
   
    int with;
    printf("enter the with of the rectangle:");
    scanf("%d",&with);

    int perimeter = (length + length + with + with);
    printf("perimeter: %d \n",perimeter);
    int area = length * with;
    printf("area: %d \n",area);


    int fahrenheit;
    printf("Enter an integer for fahrenheit:");
    scanf("%d",&fahrenheit);

    float celsius = (fahrenheit-32)/1.8;
    printf("fahrenheit: %d \n",fahrenheit);
    printf("celsius: %2f \n",celsius);


    int totalminutes;
    printf("Enter an integer for the total minutes:");
    scanf("%d",&totalminutes);

    int hours = totalminutes/60;
    int minutes = totalminutes - (hours*60);
    printf("%d minutes is equal to %d hours and %d minutes \n",totalminutes, hours, minutes);

    float pi = 3.14;
    int radio;
    printf("Enter an integer for the radio of a circle:");
    scanf("%d",&radio);

    int diameter = radio * radio;
    float areac = diameter * pi;
    printf("the area of a circle that it's diameter is %d, will be: %2f", diameter, areac);

    return 0;
}