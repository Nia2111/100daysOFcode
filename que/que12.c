//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
    int x;
    printf("enter the number : ");
    scanf("%d",&x);
    if(x>=0){
       if(x==0){
        printf("ZERO\n");
       }
       else{
        printf("POSITIVE\n");
       }
    }
    else {
        printf("NEGATIVE\n");
    }    return 0;
}
