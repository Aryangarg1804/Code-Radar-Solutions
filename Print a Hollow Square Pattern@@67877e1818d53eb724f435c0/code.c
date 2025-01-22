#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<a-1;i++){
        for(int j=0;j<a;j++){
            if(j==0 || j==a-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    for(int i=0;i<a;i++){
        printf("*");
    }



    return 0;
}