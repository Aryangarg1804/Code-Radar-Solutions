#include <stdio.h>

struct student{
    int roll_number;
    char name[100];
    float marks;

};

int main() {
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].roll_number,s[i].name,&s[i].marks);
    }
    float a=0;
    for(int i=0;i<n;i++){
        a+=s[i].marks;
    }
     printf("Total Marks: %.2f\n",a);
    printf("Average Marks: %.2f",a/n);
    return 0;
}