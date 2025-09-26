#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    float meters, feet;
    int a;
    printf("enter 1 for temperature conversion or any other number for distance conversion\n");
    scanf("%d",&a);
    
if(a==1)
{
	
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);


    fahrenheit = (celsius * 9 / 5) + 32;
     printf("\nTemperature in Fahrenheit: %.2f°F\n", fahrenheit);
}
else
{

    printf("Enter distance in meters: ");
    scanf("%f", &meters);


    feet = meters * 3.28084;
    printf("Distance in feet: %.2f ft\n", feet);
}

  //  printf("\nTemperature in Fahrenheit: %.2f°F\n", fahrenheit);
   // printf("Distance in feet: %.2f ft\n", feet);

    return 0;
}
