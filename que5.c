//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("enter the temp : ");
    scanf("%f", &celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("temp in Fahrenheit is %f ", fahrenheit);
    return 0;
}
