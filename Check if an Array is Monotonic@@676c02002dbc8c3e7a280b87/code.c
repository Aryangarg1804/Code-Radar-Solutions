#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   int b[a];
   for(int i=0;i<a;i++){
    scanf("%d",&b[i]);
   }
    int x=0,y=0;
   for(int i=0;i<a-1;i++){
    if(b[i]<b[i+1]){
        x++;
    }
   }
   for(int i=0;i<a-1;i++){
    if(b[i]>b[i+1]){
        y++;
    }
   }
   if(x==a-1 || y==a-1){
    printf("YES");
   } else{
    printf("NO");
   }
    return 0;
}