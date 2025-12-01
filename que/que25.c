//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main(){
    int a,b,result;
    
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);
    char op;
    printf("enter the operator : ");
    scanf(" %c", &op);
    switch(op){
        case'+': result=a+b;
                printf("%d\n",result);
                break;
        case'-': result=a-b;
                printf("%d\n",result);
                break; 
        case'*': result=a*b;
                printf("%d\n",result);
                break;  
        case'/': if(b!=0){
                 result=a/b;
                 printf("%d\n",result);
                 }
                else{
                    printf("division by zero");
                }
                break; 
        case'%': if(b!=0){
                 result=a%b;
                 printf("%d\n",result);
                 }
                else{
                    printf("modulo by zero");
                }
                break;  
        default: printf("not a valid operator");                                   
    }
   return 0;
}
