#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int x=0;
    for(int i=1;i<=a;i++){
        x+=i;
    }
    printf("%d",x);
    return 0;
}