#include<stdio.h>
int main(){
    int l,b,a,p;
    printf("Enter the length of rectangle  : ");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle : ");
    scanf("%d", &b);
    a=l*b;
    p=2*(l+b);
    if (a>p)
    {
        printf("area is greater than perimeter");
    }
    if (p>a)
    {
        printf("perimeter is greater than area");
    }
    if (p==a)
    {
        printf("Both area and perimeter are same");
    }
    return 0;
}