#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%[^\n]%*c",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]!=' '){
            printf("%c",a[i]);
        }
    }
    return 0;
}