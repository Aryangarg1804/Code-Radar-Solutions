#include <stdio.h>
int main() {
    int a;
    scanf("%d\n",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int z=0;
    for(int i=0;i<a;i++){
        if(i==0){
            if(b[i]>b[i+1]){
                printf("%d",b[i]);
                z++;
                break;
            }
        } else if(i<a-1){
            if(b[i-1]<b[i] && b[i]>b[i+1]){
                printf("%d",b[i]);
                z++;
                break;
            }
        } else if(i==a-1){
            if(b[i-1]<b[i]){
                printf("%d",b[i]);
                z++;
                break;
            }
        } 
    }
    if(z==a){
        printf("%d",-1);
    }

    return 0;
}