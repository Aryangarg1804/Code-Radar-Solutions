#include <stdio.h>
#include<string.h>
int main() {
    char a[100];
    scanf("%[^\n]%*c",a);
    int x=0;
    for(int i=0;i<strlen(a)-1;i++){
        for(int j=i+1;j<strlen(a);j++){
            if(a[i]!=a[j]){
                x=1;
            }
        }
        if(x==0){
            printf("%c",a[i]);
            return 0;
        }
        x=0;
    }
    printf("-");
    return 0;
}