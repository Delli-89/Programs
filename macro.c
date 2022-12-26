#include<stdio.h>
#define a 5 a*a
#undef a
main()
{
    printf("%d",a);
}



/*#define mul(a,b) a*b
int main()
{
    printf("%d\n",mul(5-3,6-4));
}*/







/*#define a 2
int sq=a*a;
#undef a
#define a 5
int sq2=a*a;
main()
{
 printf("%d\n",sq);
 printf("%d\n",a);
 printf("%d\n",sq2);

}*/




/*#define A 10
int main()
{
    int x=A;
    printf("%d\n",x);

    #undefine A
    printf("%d\n",x);
}*/
