#include<stdio.h>
int factorial(int x){
    int fact=1;
    for (int i = 2; i <= x; i++)
    {
        fact=fact*i;
    }
    return fact;    
}
int combination(int n ,int r ){
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n,r,ncr;
    printf("Enter the value of n : ");
    scanf("%d" , &n);
    
    printf("Enter the value of r : ");
    scanf("%d" , &r);
    ncr=combination(n,r);
    printf("%d ", ncr);
    return 0;
}