#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first value : ");
    scanf("%d",&a);
    printf("Enter the second value : ");
    scanf("%d",&b);
    printf("The remainder when %d is divided by %d will be = %d", a,b,a%b);
    return 0;
}