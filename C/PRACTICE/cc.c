#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[80],b[80],c[80],j;
 
    printf("ENTER THE STRING 1:\n");
    gets(a);
    printf("ENTER THE STRING 2:\n");
    gets(b);
    c[80]=strcmp(a,b);
    
   if(c==0){
    printf("%s is equal to %s\n",a,b);
    }
   else{
   printf("%s is not equal to %s\n",a,b);
}
    return 0;
}
    