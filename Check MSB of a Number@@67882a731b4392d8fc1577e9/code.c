#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    long a;
    scanf("%d",&a);
    if(a|1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}