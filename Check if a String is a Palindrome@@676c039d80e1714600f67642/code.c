#include <stdio.h>
#include<string.h>
int main() {
   char a[100];
   scanf("%s",a);
   char c[100];
   int j=0;
   for(int i=strlen(a)-1;i>=0;i--){
    c[j]=a[i];
    j++;
   }
    c[j]='\0';
    if(strcmp(a, c)==0){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}