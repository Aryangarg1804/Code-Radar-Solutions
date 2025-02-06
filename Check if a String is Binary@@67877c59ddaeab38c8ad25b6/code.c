#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%s",a);
    int x=0;y=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='0' || a[i]=='1'){
            x=1;
        } else{
            y++;
        }
    }
    if(y>0){
        printf("No");
    } else{
        printf("Yes");
    }
    return 0;
}