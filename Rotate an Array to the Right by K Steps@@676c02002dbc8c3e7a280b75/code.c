#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c;
    scanf("%d",&c);
    int d=0;
    if(c>a){
        d=(c-a+1);
    } else{
        d=(a-c);
    }
    // int d=(a-c);
    for(int i=d;i<a;i++){
        printf("%d ",b[i]);
    }
   for(int i=0;i<d;i++){
        printf("%d ",b[i]);
    }
    return 0;
}