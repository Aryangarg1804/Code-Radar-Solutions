#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &c[i]);
    }
    int z=0;
    for (int i = 0; i < a; i++) {
       if(b<c[i]){
        z++;
       }
    }
    printf("%d",z);
    return 0;
}