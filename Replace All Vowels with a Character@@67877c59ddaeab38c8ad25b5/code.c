#include <stdio.h>
#include<string.h>
int main() {
   char a[100],b;
   scanf("%s %c",a,&b);
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
            printf("%c",b);
        } else{
            printf("%c",a[i]);
        }
    }
    return 0;
}