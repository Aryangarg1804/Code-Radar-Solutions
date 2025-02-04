#include <stdio.h>
int main() {
   int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int z=1,y=0;

    for(int i=0;i<a;i++){
       for(int j=0;j<a;j++){
        if(z==b[i]){
            y++;
        }
    }
    if(y==0){
        printf("%d",z);
        break;
    }
    z++;
    y=0;
    }
    return 0;
}