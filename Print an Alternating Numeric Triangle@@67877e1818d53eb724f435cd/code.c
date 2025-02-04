#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int x=1;
    for(int i=0;i<a;i++){ 
        for(int j=0;j<i+1;j++){
            printf("%d ",x);
            x=1-x;
        }
        if(x%2==0){
            x=0;
        } else{
            x=1;
        }
        printf("\n");
    }
    return 0;
}