/*Wap to convert celsius to fahrenheit using user input
*/ 
 #include <stdio.h>
 int main(){
    float celsius, fahrenheit;
    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in fahrenheit is: %f\n", fahrenheit);
    return 0;

 }
 /*
 output Enter temperature in celsius: 56
Temperature in fahrenheit is: 132.800003*/