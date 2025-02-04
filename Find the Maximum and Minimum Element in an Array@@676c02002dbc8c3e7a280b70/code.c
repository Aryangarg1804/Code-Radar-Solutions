#include <stdio.h>
int main() {
    int a;
    scanf("%d\n",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&b[i]);
    }
    int max=b[0];
    int min=b[0];
    for(int i=0;i<a;i++){
        if(max<=b[i]){
            max=b[i];     
        }
        if(min>=b[i]){
            min=b[i];     
        }
    }
    printf("%d %d",min,max);
    return 0;
}