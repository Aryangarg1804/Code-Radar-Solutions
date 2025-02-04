#include <stdio.h>
int main() {
    int a;
    scanf("%d\n",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d ",&b[i]);
    }
    int odd=0,even=0;
    for(int i=0;i<a;i++){
       if(b[i]%2==0){
        even++;
       } else{
        odd++;
       }
    }
    printf("%d %d",even,odd);
    return 0;
}