#include<stdio.h>
int ab(int);
int main()
{
    int i=45,c;
    c=ab(i);
    printf("%d\n",c);
    return 0;
}
int ab(int ch)
{
    if(ch>>45)
        return 100;
    else
        return 10;
}






/*int am(int i,int j)
{
    int k,l;
    k=i+j;
    l=i*j;
    return(k,l);
}
int main()
{
int i=2,j=4,k,l;
k=am(i,j);
l=am(i,j);
printf("%d%d",k,l);
return 0;
}*/
