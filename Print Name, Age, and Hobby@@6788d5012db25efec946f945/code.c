#include <stdio.h>


int main() {
    char a[100],c[100];
    int b;
    scanf("%s %d",&a,&b);
    scanf("%s",&c);
    printf("Name: %a\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);
    return 0;
}