#include <stdio.h>
#include<string.h>
int main() {
    char a[100];
    scanf("%[^\n]%*c", a);
    char b[100];
    int k=0;
    for(int i=0;i<strlen(a);i++){
        b[k]=a[i];
        k++;
    }
    b[k]='\0';
    for(int i=0;i<strlen(b);i++){
        printf("%c",b[i]);
    }
    return 0;
}