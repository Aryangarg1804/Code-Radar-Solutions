#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   int b[a];
   for(int i=0;i<a;i++){
    scanf("%d",&b[i]);
   }
   int c[a];
    for(int i=0;i<a;i++){
       int x=b[i],y=0;
        while(x!=0){
            int v=x%10;
            y+=v;
            x/=10;
        }
        c[i]=y;
    }
    for(int i=0;i<a;i++){
        printf("%d ",c[i]);
   }
    return 0;
}