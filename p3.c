#include<stdio.h>
int main()
{
    int x=30,*y,*z;
    y=&x;
    z=y;
    *y++=*z++;
    x++;
    printf("%d\n %d\n %d\n",x,y,z);
}

/*{
    int i = 3, *j,k;
    j = &i;
    printf("%d %d", j, &i);
}*.








/*int i=3,*j,k;
j=&i;
printf("%d %d",j,&i);
}*/
