#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int x=1;
    if(a<=1){
        printf("%d",a);
    }
    else{
        for(int i=2;i<a;i++){
            if(a%i==0){
                x=0;
                break;
            }
        }
        if(x==1){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }








    return 0;
}