// TO FIND THR FREQUENCY OF A CHARACTER IN A STRING

#include<stdio.h>
void main()
{
    char s[20],i,c=0,x;
    printf("enter the string\n");
    scanf("%[^\n]s",&s[i]);

    printf("enter the character\n");
    scanf(" %c",&x);
    for(i=0;s[i];i++)
    {
        if (s[i]==x)
        c++;
    }
            printf("highest frequency of character=%d",c);

    }
