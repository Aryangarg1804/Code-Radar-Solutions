#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    bool x=true;
    if(a<=1){
        printf("%d",a);
    }
    else{
        for(int i=2;i<a,i++){
            if(a%i==0){
                x=false;
                break
            }
        }
        if(x){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }








    return 0;
}