#include <stdio.h>

struct Book{
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    scanf("%d",&n);
    struct Book b[n];
    for(int i=0;i<n;i++){
        scanf("%s %s %f",b[i].title,b[i].author,&b[i].price);
    }
    float a;
    scanf("%f",&a);
    for(int i=0;i<n;i++){
        if(b[i].price>=a){
            printf("Title: %s, Author: %s, Price: %.2f\n",b[i].title,b[i].author,b[i].price);
        }
    }

    return 0;
}