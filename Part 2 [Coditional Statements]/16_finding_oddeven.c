#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("The number %d you have entered is Even", a);
    }
    else{
        printf("The number you have entered is a Odd number");
    }
    
    return 0;
}