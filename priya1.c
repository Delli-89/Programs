#include<stdio.h>
int main()
{
    int n;
    printf("enter the n value");
    scanf("%d",&n);
    for(int i=0;i<=7;i++)
        printf("%d",n>>i&1);
}
