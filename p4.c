#include<stdio.h>
int main()
{
    char str1[]="india";
    char str2[]="big";
    char *s1=str1,*s2=str2;
    while(*s1++=*s2++)
    {
        printf("%s\n",str1);
    }
    printf("\n");
    return 0;
}




    /*int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%u %u %u",a[0]+1,*(a[0]+1),*(*(a+0)+1));
    return 0;
}*/
