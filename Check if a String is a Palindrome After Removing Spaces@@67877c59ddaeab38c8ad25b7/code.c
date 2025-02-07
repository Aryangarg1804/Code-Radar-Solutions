#include <stdio.h>
#include <string.h>
int main() {
   char a[100];
   char b[100];
   int x=0;
   scanf("%[^\n]%*c",a);
   for(int i=0;i<strlen(a);i++){
        if(a[i]!=' '){
            b[x]=a[i];
            x++;
        }
   }
   printf("%s",b);
    return 0;
}