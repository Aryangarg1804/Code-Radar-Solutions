#include <stdio.h>
int main() {
   int a,b;
   char c[10];
   scanf("%d %d %s",&a,&b,&c);
   if(c=='+'){
    printf("%d",a+b);
   }
   else if(c=='-'){
    printf("%d",a-b);
   }
   else if(c=='/'){
    printf("%d",a/b);
   }
   else if(c=='*'){
    printf("%d",a*b);
   }
   else{
    printf("Error");
   }
    return 0;
}