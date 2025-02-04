#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b[a];
    int c[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    for (int i = 0; i < a; i++) {
        c[i] = b[a - i - 1];
    }
    int y=0;
    for (int i = 0; i < a; i++) {
        if(b[i]!=c[i]){
            y=1;
            break;
        }
    }
    if(y==1){
        printf("NO");
    } else{
        printf("YES");
    }
    return 0;
}