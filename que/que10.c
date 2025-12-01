//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main(){
    int hours, minutes, seconds, timeInSeconds;
    printf("enter the total time in seconds : ");
    scanf("%d",&timeInSeconds);
    hours=timeInSeconds/3600;
    minutes=(timeInSeconds%3600)/60;
    seconds=timeInSeconds/60;
    printf("time is %d:%d:%d",hours,minutes,seconds);
    return 0;
}
