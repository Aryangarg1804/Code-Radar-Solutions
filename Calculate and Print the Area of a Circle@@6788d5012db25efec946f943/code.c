#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a=3.14;
    float b;
    scanf("%f",&b);
    printf("Area: %.2f",a*b*b);
    return 0;
}