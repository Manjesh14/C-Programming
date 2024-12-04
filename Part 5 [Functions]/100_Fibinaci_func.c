#include<stdio.h>
void fibon(int a){
    int temp,b=0,c=1;
    do
    {
        temp=c;
        c=c+b;
        b=temp;
        printf("%d\n",c);
    } while (c!=a);
    return;
}
int main(){
    int a,fibo;
    printf("Enter the Number : ");
    scanf("%d", &a);
    fibon(a);
    return 0;
}