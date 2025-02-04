#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   int b[a];
   for(int i=0;i<a;i++){
    scanf("%d",&b[i]);
   }
   int c;
   int d=0;
   scanf("%d",&c);
   for(int i=0;i<a;i++){
    if(c==b[i]){
        printf("%d",i);
        d++;
        break;
    }
   }
   if(d==0){
    printf("%d",-1);
   }
    return 0;
}