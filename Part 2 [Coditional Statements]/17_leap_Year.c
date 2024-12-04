#include<stdio.h>
#include<conio.h>
int main(){
    int y;
    printf("Enter the Year : ");
    scanf("%d", &y);
    if (y%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a leap Year");
    }
    return 0;
}