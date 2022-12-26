#include<stdio.h>
#include<conio.h>
#define NOINPUT
void main()
{
    int a=0;
    #ifdef NOINPUT
    a=2;
    #else
    printf("enter a");
    scanf("%d",&a);
    #endif
    printf("%d\n",a);
    getch();
}
