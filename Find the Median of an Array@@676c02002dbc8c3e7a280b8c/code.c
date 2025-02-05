#include <stdio.h>
int main() {
     int a;
    scanf("%d", &a);
    int b[a]; 

    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }
    int x=0,y=0,z=0;
    if(a%2==0){
        x=a/2;
        y=(a/2)+1;
        printf("%d",(d[x]+d[y])/2);
    } else{
        z=(a/2)+1
        printf("%d",b[z]);
    }
    
    return 0;
}