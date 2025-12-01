//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter two no.(before swapping) : ");
    scanf("%d %d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("after swapping : %d %d ", a, b);
    return 0;
}
