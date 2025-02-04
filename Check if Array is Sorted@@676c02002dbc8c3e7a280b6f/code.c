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
    for(int i=0;i<a;i++){
        if(z<=b[i]){
            z=b[i]
            y++;
        }
        else{
            printf("Not Sorted");
        }
    }
    if(y==a){
        printf("Sorted");
    }
    return 0;
}