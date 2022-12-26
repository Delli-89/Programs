#include<stdio.h>
int main()
{
    int a=2,b=7,c=8,d=6,n;
    n=(a>b)&&(b>c)?a:(b>a)&&(b>c)?b:c;
    printf("%d",n);
}
