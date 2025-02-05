#include <stdio.h>
#include<string.h>
int main() {
    char a[100],b[100];
    scanf("%s\n%s",a,b);
    int x=0;
    if(strlen(a)!=strlen(b)){
        printf("No");
    } else{
        for(int i=0;i<strlen(a);i++){
            for(int j=0;j<strlen(a);j++){
                if(a[i]==b[j]){
                    x++;
                }
            }
        }
    }
    if(x==strlen(a)){
        printf("Yes");
    } else{
        printf("No");
    }
    return 0;
}