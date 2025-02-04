#include <stdio.h>
#include<string.h>
int main() {
   char a[100];
   scanf("%s",&a);
   char c[100];
   int i;
   for(int i=strlen(a)-1;i>=0;i--){
    c+=a[i];
   }
    c[i]='\0';
    if(a==c){
        printf("Yes");
    } else{
        printf("No")
    }
    return 0;
}