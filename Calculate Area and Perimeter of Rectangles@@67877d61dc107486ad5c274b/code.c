#include <stdio.h>

struct Rectangle{
    float length;
    float breadth;
};
int main() {
    int n;
    scanf("%d",&n);
    struct Rectangle r[n];
    for(int i=0;i<n;i++){
        scanf("%f %f",&r[i].length,&r[i].breadth);
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n",i+1,(r[i].length)*(r[i].breadth),2*((r[i].length)+(r[i].breadth)));
    }
    
    return 0;
}