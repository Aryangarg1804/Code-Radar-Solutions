#include <stdio.h>
int main() {
     int a;
    scanf("%d", &a);
    int b[a]; 

    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }
    int x=0;
    for (int i = 0; i < a-1; i++) {
        for (int j = i+1; j < a; j++) {
            if(b[i]<b[j]){
                x=1;
            }
        }
        if(x==0){
            printf("%d ",b[i]);
        }
        x=0;
    }
    printf("%d",b[a-1]);
    return 0;
}