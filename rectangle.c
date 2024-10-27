#include <stdio.h>

int main(void){

double length, width, area, perimeter;

printf("Enter the Length of the Rectangle:");
scanf("%lf", &length);
printf("Enter the Width of the Rectangle:");
scanf("%lf", &width);

area = length * width;
perimeter = (length + width) * 2;


printf("Area: %lf\n",area);
printf("Perimeter :%lf", perimeter);
}
