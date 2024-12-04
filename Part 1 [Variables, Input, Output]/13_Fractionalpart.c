#include<stdio.h>
#include<conio.h>
int main(){
    float a;
    printf("Enter the Decimal number : ");
    scanf("%f",&a);
    int b= a;
    printf("Fractional Part of the Entered Decimal is = %f", a-b);
}