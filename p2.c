#include<stdio.h>
int fun(int);
int fun(int i)
{
    i++;
    return i;
}
int main()
{
    int i=3;
    fun(i=fun(fun(i)));

    printf("%d",i);
}
