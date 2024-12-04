#include<stdio.h>
void swap(int* x, int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a ;
    printf("Enter a : ");
    scanf("%d", &a);
    int b ;
    printf("Enter b : ");
    scanf("%d", &b);

    int* x=&a;
    int* y=&b;
    swap(x,y);

    printf("The Value of a is : %d\n", a);
    
    printf("The Value of b is : %d\n", b);

    return 0;
}