#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float z=(a*a+b*b)*0.5;
    printf("%f",z);
    if (z==c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}