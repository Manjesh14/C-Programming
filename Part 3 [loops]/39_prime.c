#include<stdio.h>
int main(){
    int i,n,flag=0;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n==2)
    {
        i=3;
    }
    else
    {
        i=2;
    }
    for (i ; i < n; i++)
    {
        if (n%i==0)
        {
            flag=1;
        }
    }
    if (flag==1)
    {
        printf("The number is composite");
    }
    if (flag==0)
    {
        printf("The number is Prime");
    }
    return 0;
}