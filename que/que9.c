#include<stdio.h>
#include<math.h>
int main(){
    float principal, rate, time, simpleInterest, coumpoundInterest, amount;
    printf("enter the principal : ");
    scanf("%f\n", &principal);
    printf("enter the rate");
    scanf("%f\n", &rate);
    printf("enter the time(in year) : ");
    scanf("%f\n", &time);
    simpleInterest=(principal*rate*time)/100;
    amount=principal*pow((1+rate/100),time);
    coumpoundInterest=amount-principal;
    printf("simple interest is %d\n", simpleInterest);
    printf("coumpound interest is %d\n",coumpoundInterest);
    return 0;
}
