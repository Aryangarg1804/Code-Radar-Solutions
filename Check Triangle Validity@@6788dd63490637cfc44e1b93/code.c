#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int z=a*a+b*b;
    
    if (z==c*c){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}