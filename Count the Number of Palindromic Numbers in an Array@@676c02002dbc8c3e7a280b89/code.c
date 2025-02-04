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
        if(b[i]<0){
            b[i]=-1*b[i];
        }
        int y=b[i],z=0;
        while(y!=0){
            int j=y%10;
            z=z*10+j;
            y/=10;
        }
        if(z==b[i]){
            x++;
        }

    }
    printf("%d",x);
    return 0;
}