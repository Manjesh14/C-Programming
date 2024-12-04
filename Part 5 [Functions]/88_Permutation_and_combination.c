#include<stdio.h>
int Combination(int nfact,int rfact, int nrfact){
    int ncr=nfact/(rfact*nrfact);
    return ncr;
}
int main(){
    int n,r,nfact=1,rfact=1,nrfact=1;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter r : ");
    scanf("%d",&r);
    int i=1;
    while (i <= n)
    {
        nfact=nfact*i;
        i++;
    }
    int j=1;
    while (j <= r)
    {
        rfact=rfact*j;
        j++;
    }
    int k=1;
    while (k <= n-r)
    {
        nrfact=nrfact*k;
        k++;
    }
    int ncr=Combination(nfact,rfact,nrfact);
    printf(" combination = %d", ncr);
    return 0;
} 