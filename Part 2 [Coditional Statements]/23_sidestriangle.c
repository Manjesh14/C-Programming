#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the sides of triangle : ");
    scanf("%d%d%d", &a,&b,&c);
    if ((a+b)>c && (b+c)>a && (c+b)>a)
    {
        printf("This can be the sides of the triangle");
    }
    else
    {
        printf("This cannot be the sides of triangle");
    }
    return 0;
}