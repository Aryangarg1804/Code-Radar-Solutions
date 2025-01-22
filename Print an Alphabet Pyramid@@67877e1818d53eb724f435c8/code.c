#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int x=65;
    for(int i=0;i<a;i++){
        for(int j=0;j<i+1;j++){
            printf("%c ",x);
            x++;
        }
        x=65;
        printf("\n");
    }

    return 0;
}