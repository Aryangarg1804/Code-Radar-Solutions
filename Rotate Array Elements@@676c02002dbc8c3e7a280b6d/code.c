#include <stdio.h>
int main() {
    int a;
    scanf("%d\n",&a);
    int b[a];
    for(int i=0;i<a;i++){
        scanf("%d",&b[i]);
    }
    int c;
    scanf("%d",&c);
    int d=a-c;
    for(int i=d;i<a;i++){
        printf("%d\n",b[i]);
    }
   for(int i=0;i<d;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}