#include<stdio.h>
int main(){
    float i,n,a=100;
    printf("Enter how many numbers you want : ");
    scanf("%f", &n);
    for ( i = 1; i <=n; i++)
    {
        printf("%f\t", a);
        a=a/2;
    }
    return 0;
}