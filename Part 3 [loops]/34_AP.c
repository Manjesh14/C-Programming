#include<stdio.h>
int main(){
    int i,n;
    printf("Enter how many numbers you want : ");
    scanf("%d", &n);
    for ( i = 1; i <= 2*n; i=i+2)
    {
        printf("%d\t", i);
    }
    return 0;
}