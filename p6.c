#include<stdio.h>
int swap(int,int);
int main()
{
        int a=7,b=9,temp;
        swap(a,b);

}
int swap(int a,int b)
{
   /* temp=a;
    a=b;
    b=temp;*/
    a=a^b;//a=a+b;
    b=a^b;//b=a-b;
    a=a^b;//a=a-b;
printf("a=%d,b=%d",a,b);
}
