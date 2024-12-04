#include<stdio.h>
#include<conio.h>
int main(){
    float r;
    printf("Enter the Radius : ");
    scanf("%f",&r);
    float area=3.14*r*r;
    printf("The area of the Circle is : %f",area);
    return 0;
    getch();
}