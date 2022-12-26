#include<stdio.h>
int add(int a,int b)
{
    if(a==0&&b==0)
        return printf("%d %d",a,b);
    else
        return a!=0?a:b;
}
int main()
{
    int a=0,b=0;
    printf("enter thee values:\n");
    scanf("%d%d",&a,&b);
    printf("required sum=%d",add(a,b));


}
