#include <stdio.h>
int main() {
  int a;
  scanf("%d",&a);
  int b[a];
  for(int i=0;i<a;i++){
    scanf("%d",&b[i]);
  }
  int x=0,y=0;

   for(int i=0;i<a;i++){
    if(b[i]>1){
        for(int j=2;j<b[i];j++){
            if(b[i]%j==0){
                y=1;
                break;
            }
        } 
        if(y==0){
            x++;
        }
        y=0;
    }
  }
  printf("%d",x);
    return 0;
}