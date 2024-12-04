#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    printf("Enter the cost price :");
    scanf("%d", &a);
    printf("Enter the sale price :");
    scanf("%d", &b);
    if (b>a)
    {
        printf("Profit of %d ", (b-a));
    }
    if (b==a)
    {
        printf("Neither Profit nor Loss");
    }
    if(a>b)
    {
        printf("loss of %d ", (a-b));
    }
    return 0;
}