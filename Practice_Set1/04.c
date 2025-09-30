/*Wap to calculate SI for a set of values  reprsenting  
principal,number of year and rate of interest*/
#include <stdio.h>
int main(){
    float principal, rate, time, si;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    si = (principal * rate * time) / 100;
    printf("The calculated Simple Interest is: %f\n", si);
    return 0;
}
/*
output 
Enter principal amount: 10
Enter rate of interest: 5
Enter time (in years): 4
The calculated Simple Interest is: 2.000000*/