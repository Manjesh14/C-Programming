#include <stdio.h>
void pop(int n){
    if(n==0) return ;
    printf("pre %d\n",n);
    pop(n-1);
    printf("in %d\n",n);
    pop(n-1);
    printf("post %d\n",n);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    pop(n);
    return 0;
}