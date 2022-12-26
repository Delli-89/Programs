#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int len1,len2,c=0,i,j,temp;
    printf("enter the string1\n");
    scanf("%s",s1);
    printf("enter the string2\n");
    scanf("%s",s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1==len2)
    {
   for(i=0;i<len1-1;i++)
   {
       for(j=i+1;j<len1;j++)
       {
           if(s1[i]>s1[j])
           {
            temp=s1[i];
            s1[i]=s1[j];
            s1[j]=temp;
           }
           if(s2[i]>s2[j])
       {
           temp=s2[i];
           s2[i]=s2[j];
           s2[j]=temp;
       }
       }
   }
   for(i=0;i<len1;i++)
   {
       if(s1[i]!=s2[i])
       {
           printf("string are not anagrams\n");
       }
   }
   printf("strings are anagrams\n");
    }
}
