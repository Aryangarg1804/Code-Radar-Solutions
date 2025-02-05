#include <stdio.h>
#include<string.h>
int main() {
    char a[100];
    scanf("%[^\n]%*c", a);
    for(int i=strlen(a);i>=0;i++){
        printf("%c",a[i]);
    }
    return 0;
}