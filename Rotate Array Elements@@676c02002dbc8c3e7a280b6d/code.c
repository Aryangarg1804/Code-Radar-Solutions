#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d\n",b[i]);
    }
    int c;
    scanf("%d",&c);
    int d=a-b;
    for(int i=d;i<a;i++){
        printf("%d\n",b[i]);
    }
   for(int i=0;i<d;i++){
        printf("%d\n",b[i]);
    }








    return 0;
}