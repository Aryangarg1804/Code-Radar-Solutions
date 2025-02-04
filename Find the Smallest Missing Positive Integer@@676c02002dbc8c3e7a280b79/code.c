#include <stdio.h>
int main() {
   int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int z=1,y=0,x=0;

    for(int i=0;i<a;i++){
       for(int j=0;j<a;j++){
        if(z==b[j]){
            y++;
        }
    }
    if(y==0){
        printf("%d",z);
        x++;
        break;
    }
    z++;
    y=0;
    }
    if(x==0){
        printf("%d",z);
    }
    return 0;
}