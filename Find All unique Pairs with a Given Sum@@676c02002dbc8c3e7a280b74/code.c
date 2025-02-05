#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int b[a]; 

    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }
    int c;
    scanf("%d",&c);
    for (int i = 0; i < a-1; i++) {
        for (int j = i+1; j < a; j++) {
            if(b[i]+b[j]==c){
                printf("%d %d\n",b[i],b[j]);
            }
        }
    }
    return 0;
}