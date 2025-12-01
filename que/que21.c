//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
//Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter the three sides : ");
    scanf("%d %d %d", &a, &b, &c);
     
    if(a+b>c && b+c>a && a+c>b){
       printf("it is a valid triangle\n");
        
       if(a==b&&b==c){
        printf("it is an equvilateral triangle");
       }
    int months;
    printf("enter the number (1-12): ");
    scanf("%d", &months);
    switch(months){
        case 1: printf("january-31\n");
                break;
        case 2: printf("february-28\n");
                break;
        case 3: printf("march-31\n");
                break;
        case 4: printf("april-30\n");
                break;
        case 5: printf("may-31\n");
                break;
        case 6: printf("june-30\n");
                break;
        case 7: printf("july-31\n");
                break;                                                
        case 8: printf("august-31\n");
                break;
        case 9: printf("september-30\n");
                break;
        case 10: printf("october-31\n");
                break;
        case 11: printf("november-30\n");
                break;
        case 12: printf("december-31\n");
                break;  
        default: printf("it is not a valid month");

       else if("a==b||b==c||c==a"){
            printf("it is an isosceles triangle ");
       }
       else{
        printf("it is a scalene trianle");

       }


    }
    else{
        printf("it is not a valid triangle");
    }
    return 0;
}
