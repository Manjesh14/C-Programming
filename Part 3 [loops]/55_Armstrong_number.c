#include<stdio.h>
int main(){
    int i,n,a,b,count;
    n=500;
    for ( i = 1; i <= n; i++)
    {
        b=i;
        count=0;
        while (b!=0)
        {
            a=b%10;
            count=count+((a*a)*a);
            b=b/10;
        }
        if (count==i)
        {
            printf("%d\t",i);
        }    
    }
    return 0;
}
