#include <stdio.h>
#include <string.h>
int main() {
   char a[100],b[100],c[100];
   int x=0;
   scanf("%[^\n]%*c",a);
   for(int i=0;i<strlen(a);i++){
        if(a[i]!=' '){
            b[x]=a[i];
            x++;
        }
   }
    b[x]='\0';
    int y=x-1;

    for(int i=0;i<strlen(a);i++){
       c[i]=b[y];
       y--;
   }
    c[x]='\0';
    if(strcmp(b,c)==0){
        printf("Yes");
    } else{
        printf("No");
    }
   
    return 0;
}