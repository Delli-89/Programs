#include<stdio.h>
void fun(int);
int main()
{
    int n;
    printf("enter the decimal number\n");
    scanf("%d",&n);
    fun(n);

}
void fun(int n)
{
    int i;
    for(i=7;i>=0;i--)
    printf("%d",n>>i&1);
}
