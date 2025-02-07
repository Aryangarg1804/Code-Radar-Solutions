#include <stdio.h>
#include <string.h>
int main() {
   char a[100];
   char b[100];
   char c[100];
  
   int x=0;
   scanf("%[^\n]%*c",a);
    int y=strlen(a-1);
   for(int i=0;i<strlen(a);i++){
        if(a[i]!=' '){
            b[x]=a[i];
            c[y]=a[i];
            y--;
            x++;
        }
   }
   for(int i=0;i<strlen(a);i++){
       if(b[i]!=c[i]){
        printf("No");
        return 0;
       }
   }
   printf("Yes");
    return 0;
}