#include <stdio.h>
int main() {
    int a,c;
    scanf("%d %d", &a,&c);
    int b[a]; 

    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }
    int x=0;
    for (int i = 0; i < a; i++) {
        if(x==b[i]){
            x++;
        }
    }
    printf("%d",x);
    return 0;
}