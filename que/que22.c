//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
    float sellingPrice, costPrice, profit, loss, percentage;
    printf("enter the selling price and cost price : ");
    scanf("%f %f", &sellingPrice,&costPrice);
    if(sellingPrice>costPrice){
        profit=sellingPrice-costPrice;
        percentage=(profit/costPrice)*100;
        printf("profit is %f\n", profit);
        printf("profit percentage is %f\n", percentage);

    }
    else if(sellingPrice<costPrice){
        loss=costPrice-sellingPrice;
        percentage=(loss/costPrice)*100;
        printf("loss is %f\n",loss);
        printf("loss percentage is %f\n ", percentage );
    }
    else {
        printf("no profit, no loss");
    }
    return 0;
}
