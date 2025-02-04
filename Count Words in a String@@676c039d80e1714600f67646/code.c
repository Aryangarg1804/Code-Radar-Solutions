#include <stdio.h>
#include<string.h>

int main() {
    char a[100];
    gets(a);
    char x=' ';
    scanf("%d",a);
    int z=0; 
    for(int i=0;i<strlen(a);i++){
        if(strcmp(a[i],x)==0){
            z++;
        }
    }
    printf("%d",z);
    return 0;
}