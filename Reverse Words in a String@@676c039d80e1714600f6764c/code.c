#include <stdio.h>
#include<string.h>
int main() {
    char a[100];
    gets(a);
    for(int i=strlen(a);i>=0;i++){
        printf("%s",a[i]);
    }
    return 0;
}