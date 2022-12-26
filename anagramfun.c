#include<stdio.h>
#include<string.h>
char *sort1(char*);
char *sort2(char*);
void main()
{
    char a[20],b[20],l1,l2;
    char *p;
    char *q;
    printf("Enter the string1\n");
    scanf("%s",a);
    printf("Enter the string2\n");
    scanf("%s",b);

    l1=strlen(a);
    l2=strlen(b);

    if(l1==l2);
    {
        p=sort1(a);
        q=sort2(b);
    }
    int r=strcmp(p,q);
    if(r==0)
        printf("not an anagram");
}
char* sort1(char *a)
{
    int l1,
}

}
