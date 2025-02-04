#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   int b[a];
   for(int i=0;i<a;i++){
    scanf("%d",&b[i]);
   }
   int c;
   scanf("%d",&c);
   for(int i=0;i<a;i++){
    if(c==b[i]){
        printf("%d",i);
        break;
    }
   }
    return 0;
}