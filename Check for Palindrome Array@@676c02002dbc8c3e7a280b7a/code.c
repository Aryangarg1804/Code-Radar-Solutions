#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b[a];
    int z=a-1;
    int c[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
        c[z]=b[i];
        z--;
    }
    int x=0,y=0;
    for(int i=a-1;i>=0;i++){
        if(c[i]!=b[x]){
            y=1;
        }
        x++;
    }
    if(y==1){
        printf("NO");
    } else{
        printf("YES");
    }
    return 0;
}