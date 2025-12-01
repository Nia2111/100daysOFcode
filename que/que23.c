//Write a program to calculate library fine based on late days
#include<stdio.h>
int main(){
    int days,fine;
    printf("enter the late days : ");
    scanf("%d", &days);
    if(days<=1&&days>=5){
        fine=days*2;
        printf("FINE-%d\n",fine);
    }
    else if(days<=6&&days>=10){
        fine =days*4;
        printf("FINE-%d\n",fine);
    }
    else if(days<=11&&days>=30){
        fine=days*6;
        printf("FINE-%d\n",fine);
    }
    else{
        printf("membership cancel\n");
    }
    return 0;
}
