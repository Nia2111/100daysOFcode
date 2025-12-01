//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria
#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks : ");
    scanf("%d",&marks);
    if(marks<=100&&marks>=90){
        printf("GRADE A");

    }
    else if(marks<=89&&marks>=80){
        printf("GRADE B");
    }
    else if(marks<=79&&marks>=70){
        printf("GRADE C");
    }
    else if(marks<=69&&marks>=60){
        printf("GRADE D");
    }
    else {
        printf("GRADE F");
    }
    return 0;

}
