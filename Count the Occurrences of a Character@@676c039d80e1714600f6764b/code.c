#include <stdio.h>
#include<string.h>
int main() {
    char a[100],b;
    int x=0;
    scanf("%s %c",a,&b);
    for(int i=0;a[i]!='\0';i++){
        if(b==a[i]){
            x++; 
        } 
    }
    printf("%d",x);
    return 0;
}