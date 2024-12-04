#include<stdio.h>
int main(){
    int i,n,a=4;
    printf("Enter how many numbers you want : ");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        printf("%d\t", a);
        a=a+3;
    }
    return 0;
}