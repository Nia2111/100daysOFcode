//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    float lenght, bredth, area, perimeter;
    printf("enter the lenght and bredth : ");
    scanf("%f %f", &lenght,&bredth );

    area=lenght*bredth;
    perimeter=2*(lenght+bredth);

    printf("area of the rectangle is %f\n", area);
    printf("perimeter of the rectanle is %f\n", perimeter);
    
    return 0;
}
