#include<stdio.h>
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    if (a>=100 && a<=999)
    {
        printf("the number is 3 digit number");
    }
    else
    {
        printf("The number is not of three digit");
    }
    return 0;
}