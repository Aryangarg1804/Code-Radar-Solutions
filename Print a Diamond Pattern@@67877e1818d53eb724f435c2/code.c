#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int k=0,l=0;
    for(int i=0;i<a;i++){
        for(int j=k;j<a-1;j++){
            printf(" ");
        }
        for(int g=0;g<l+1;g++){
            printf("*");
        }
        k++;
        l+=2;
        printf("\n");
    }
    int d=1
    l-=2;
    for(int x=0;x<a-1;x++){
        for(int y=0;y<d;y++){
            printf(" ");
        }
        d++;
        for(int z=0;z<l+1;z++){
            printf("*");
        }
        l-=2;
        printf("\n");
    }


























    return 0;
}