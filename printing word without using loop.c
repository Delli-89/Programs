#include <stdio.h>
void printname(char* n,int c){
   printf("%d : %s",c+1,n);
   c+=1;
   if(c<50)
      printname(n,c);
}
int main(){
   char n[50];
   printf("Enter you name :");
   scanf("%s",n);
   printname(n,0);
   return 0;
}
