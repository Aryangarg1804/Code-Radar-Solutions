#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int x=1;
    for(int i=0;i<a;i++){
        x=1
        for(int j=0;j<i+1;j++){
            printf("%d ",x);
            x=1-x;
        }
        printf("\n");
    }
    return 0;
}