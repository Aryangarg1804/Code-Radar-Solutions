#include <stdio.h>
int main() {
    int a;
    scanf("%d\n",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&b[i]);
    }
     int z=0;
     int y=0;
     int x=0;
     if(a==1){
         printf("%d\n",-1);
         x++;
     } else{
        for(int i=0;i<a;i++){
        if(z<=b[i]){
            y=z;
            z=b[i];
            }
        }
     }
     
    if(y==z && x==0){
    printf("%d",-1);
    } else{
        printf("%d",y);
    }
   
    return 0;

}