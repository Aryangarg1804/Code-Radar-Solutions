#include <stdio.h>
#include<string.h>

int main() {
    char a[100],b[100];
    scanf("%[^\n]%*c",a);
    scanf("%[^\n]%*c",b);
    printf("%s",strcat(a,b));
    return 0;
}