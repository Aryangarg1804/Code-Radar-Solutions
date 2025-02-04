#include <stdio.h>
int main() {
    int a;
    scanf("%d\n",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&b[i]);
    }
     
     if(a==1){
         printf("%d\n",-1);
         
     } else{
        int z=-100;
        int y=0;
        int x=0;
        for(int i=0;i<a;i++){
        if(z<=b[i]){
            y=z;
            z=b[i];
            }
        }
        if(y==z){
            printf("%d",-1);
        } else{
            printf("%d",y);
        }
     }
     
    
   
    return 0;

}