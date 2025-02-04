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
        int y=0,z=0;
        if(b[i]<0){
            y=-b[i];
        } else{
            y=b[i];
        }
        int e=y;
        while(y!=0){
            int j=y%10;
            z=z*10+j;
            y/=10;
        }
        if(z==e){
            x++;
        }

    }
    printf("%d",x);
    return 0;
}