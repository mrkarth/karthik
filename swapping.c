#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the value after swaping %d %d",a,b);
}
