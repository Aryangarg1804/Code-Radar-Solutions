#include <stdio.h>
#include<string.h>
int main() {
   char a[100];
   scanf("%[^\n]%*c", a);
    printf("%d",strlen(a));
    return 0;
}