#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("enter the values of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    fact=fact*i;
    printf("fact=%d",fact);
}
