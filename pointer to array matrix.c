#include<stdio.h>
int main()
{
    int i,j,a[]={1,2,3,4,5,6};
    int *p=a;
    int (*s)[2]=a;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",s[i][j]);
        printf("\n");
    }
}
