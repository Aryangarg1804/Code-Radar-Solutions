#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int b[a]; 

    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }
    int x=0,y=0;
     for (int i = 0; i < a; i++) {
        if(b[i]%2==0 && x<b[i]){
            x=b[i];
            y++;
        }
    }
    if(y==0){
        printf("%d",-1);
    } else{
        printf("%d",x);
    }
  
    return 0;
}