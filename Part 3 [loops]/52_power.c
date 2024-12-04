#include<stdio.h>
int main(){
    int a,b,power;
    printf("Enter the base : ");
    scanf("%d", &a);
    printf("Enter the exponent : ");
    scanf("%d", &b);
    power=1;
    for (int i = 1; i <= b; i++){
        power=power*a;
    }
    printf("%d to the power of %d is = %d",a,b,power);
    return 0;    
}