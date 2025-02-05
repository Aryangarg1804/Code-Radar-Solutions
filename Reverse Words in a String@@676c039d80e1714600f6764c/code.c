#include <stdio.h>
#include<string.h>
int main() {
    char a[100];
    scanf("%[^\n]%*c", a);
    for(int i=strlen(a)-1;i>=0;i++){
        printf("%s",a[i]);
    }
    return 0;
}