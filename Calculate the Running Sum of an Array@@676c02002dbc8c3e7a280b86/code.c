#include <stdio.h>
int main() {
    int a;
   scanf("%d",&a);
   int b[a];
   for(int i=0;i<a;i++){
    scanf("%d",&b[i]);
   }
   int x=0;
    for(int i=0;i<a;i++){
        x+=b[i];
        printf("%d ",x);
   }
    return 0;
}