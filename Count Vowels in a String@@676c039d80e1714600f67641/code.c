#include <stdio.h>

int main() {
   int a=0;
   char n[100];
   scanf("%S",&n);
   for(int i=0;i<5;i++){
    if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u' || n[i]=='A' || n[i]=='E' || n[i]=='I' || n[i]=='O' || n[i]=='U'){
        a++;
    }
   }
   printf("%d",a);
    return 0;
}