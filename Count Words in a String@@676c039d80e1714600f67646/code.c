#include <stdio.h>
#include<string.h>

int main() {
    char a[100];
    gets(a);
    scanf("%d",a);
    int z=0; 
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){
            z++;
        }
    }
    printf("%d",z);
    return 0;
}