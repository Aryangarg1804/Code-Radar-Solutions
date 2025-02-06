#include <stdio.h>
#include <string.h>
int main() {
    char a[100];
    scanf("%[^\n]%*c",a);
    int x=0;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='b' || a[i]=='c' || a[i]=='d' || a[i]=='f' || a[i]=='g'|| a[i]=='h'|| a[i]=='j' || a[i]=='k' || a[i]=='l'|| a[i]=='m'|| a[i]=='n' || a[i]=='p'|| a[i]=='q'|| a[i]=='r'|| a[i]=='s'|| a[i]=='t'|| a[i]=='v'|| a[i]=='w'|| a[i]=='x'|| a[i]=='y' || a[i]=='z'){
            x++;
        } else{
            printf("%c",a[i]);
        }
    }
    return 0;
}