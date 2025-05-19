#include <stdio.h>
float calculateAge(int age, float orbit);

int main(){
    const float MERCURY = 0.2408467;
    const float VENUS = 0.61519726;
    const float EARTH = 1;
    const float MARS = 1.8808158;
    const float JUPITER = 11.862615;
    const float SATURN = 29.447498;
    const float URANUS = 84.016846;
    const float NEPTUNE = 164.79132;

    int userage;
    printf("Enter your age:");
    scanf("%d", &userage);

    int userselection;
    printf("Please select a planet:\n1.Mercury\n2.Venus\n3.Earth\n4.March\n5.Jupiter\n6.Saturn\n7.Uranus\n8.Neptune\nType your choice:");
    scanf("%d", &userselection);

    if (userselection==1){
      calculateAge(userage,MERCURY);
    }else if (userselection==2){
      calculateAge(userage,VENUS);
    }else if (userselection==3){
      calculateAge(userage,EARTH);
    }else if (userselection==4){
      calculateAge(userage,MARS);
    }else if (userselection==5){
      calculateAge(userage,JUPITER);
    }else if (userselection==6){
      calculateAge(userage,SATURN);
    }else if (userselection==7){
      calculateAge(userage,URANUS);
    }else if (userselection==8){
      calculateAge(userage,NEPTUNE);
    }
  }

float calculateAge(int age, float orbit){
    float result;
    result = age / orbit;
    printf("You would be %.2f years old.\n",result);
    return result;
}