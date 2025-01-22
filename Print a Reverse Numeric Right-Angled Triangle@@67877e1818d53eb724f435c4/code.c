#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for(int i=a;i>0;i--){
        for(int j=0;j<i;i++){
            printf("%d ",j+1);
        }
        printf("\n");
    }
    return 0;
}