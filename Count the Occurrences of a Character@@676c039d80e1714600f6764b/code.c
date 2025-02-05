#include <stdio.h>
#include<string.h>
int main() {
    char a[100],b;
    int x=0;
    scanf("%s %c",a,&b);
    for(int i=0;a[i]!='\0';i++){
        if(strcmp(a[i],b)==0){
            
            x++;
            
        } 
    }
    printf("%d",x);
    return 0;
}