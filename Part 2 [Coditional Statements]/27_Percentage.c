#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter Your Percentage : ");
    scanf("%d",&n);
    if (n>=80)
    {
        printf("A Grade");
    }
    else if (n>=60)
    {
        printf("B grade");
    }
    else if (n>=40)
    {
        printf("C Grade");
    }
    else if (n>=35)
    {
        printf("D Grade");
    }
    else if (n<35)
    {
        printf("failed");
    }
    return 0;
    
}