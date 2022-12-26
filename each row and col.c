#include<stdio.h>
int  main()
{
    int a[2][3],i,j,sr,sc;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        sr=0;
        for(j=0;j<3;j++)
        {
            sr=sr+a[i][j];
        }
        printf("sr=%d ",sr);
    }
     for(i=0;i<3;i++)
    {
        sc=0;
        for(j=0;j<2;j++)
        {
            sc=sc+a[j][i];
        }
        printf("sc=%d ",sc);
    }
}
