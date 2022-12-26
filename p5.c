#include<stdio.h>
int main()
{
    int *p;
    int a=5,b=5;
    *p=a+b;
    printf("%d",*p);
}



/*{
    int *p,*q,sum;
    int a=10,b=5;
    p=&a;q=&b;
    sum=*p+*q;
    printf("sum=%d",sum);
    return 0;
}*/
