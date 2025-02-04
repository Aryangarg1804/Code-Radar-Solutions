#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   int b[a];
   for(int i=0;i<a;i++){
    scanf("%d",&b[i]);
   }
   int z=100000,y=100000;
   for(int i=0;i<a;i++){
     if(z>=b[i]){
        y=z;
        z=b[i];
     } else if(z>y && y>b[i]){
        y=b[i];
     }
   }
   printf("%d",y);
    return 0;
}