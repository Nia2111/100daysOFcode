//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
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

       else if("a==b||b==c||c==a"){
            printf("it is an isosceles triangle ");
       }
       else{
        printf("it is a scalene trianle");

       }


    }
    else{
        printf("it is not a valid triangle");
    int day;
    printf("enter the number(1-7)");
    scanf("%d",&day);
    switch(day){
        case 1: printf("monday\n");
                break;
        case 2: printf("tuesday\n");
                break;
        case 3: printf("wednesday\n");
                break;  
        case 4: printf("thursday\n");
                break;
        case 5: printf("friday\n");
                break;
        case 6: printf("saturday\n");
                break;  
        case 7: printf("sunday\n");
                break;   
        default: printf("it is not a valid day");                                                 
    }
    return 0;
}
