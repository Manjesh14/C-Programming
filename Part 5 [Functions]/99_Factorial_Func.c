#include<stdio.h>
int Factorial(int a){
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a,factorial;
    printf("Enter the Number : ");
    scanf("%d", &a);
    factorial=Factorial(a);
    printf("The Factorial of %d is = %d", a, factorial);
    return 0;
}