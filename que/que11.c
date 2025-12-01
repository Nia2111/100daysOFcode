//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
    int x;
    printf("enter the number : ");
    scanf("%d", &x);
    if(x%2==1){
        printf("ODD\n");
    }
    else{
        printf("EVEN\n");
    }
    return 0;
}
