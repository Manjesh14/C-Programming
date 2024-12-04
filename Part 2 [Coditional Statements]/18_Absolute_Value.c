#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter the number :");
    scanf("%d", &a);
    if (a<0)
    {
        printf("The Absolut value of %d is %d ", a, -(a));
    }
    else
    {
        printf("The Absolute value of %d is %d ",a,a);
    }
    return 0;
}