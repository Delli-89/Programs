#include <stdio.h>

int main()
{
    int i,j,n,c;
    printf("Enter N: ");
    scanf("%d",&n);

    c= n* 2 - 1;

    for(i=1; i<=c; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(j==i || (j==c - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
