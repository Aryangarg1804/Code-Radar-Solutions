#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]!=0 || a[i]!=1){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}