#include<stdio.h>
int min(int a ,int b){
    if (a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}
int GCD(int a, int b){
    int gcd;
    for (int i = 1; i < min(a,b); i++)
    {
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    
}
int main(){
    int a,b;
    printf("Enter the number : ");
    scanf("%d",&a);
    printf("Enter the number : ");
    scanf("%d",&b);
    int hcf=GCD(a,b);
    printf("The GCD of the Entered Numbers is = %d",hcf);
    return 0;
}