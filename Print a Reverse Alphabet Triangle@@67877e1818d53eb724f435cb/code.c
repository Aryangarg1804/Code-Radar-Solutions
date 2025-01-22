#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int x=65;
    for(int i=a;i>0;i--){
        for(int j=0;j<i;j++){
            printf("%c ",x);
            x++;
        }
        x=65;
        printf("\n");
    }
    return 0;
}