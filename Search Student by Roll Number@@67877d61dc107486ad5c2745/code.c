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
    int a;
    scanf("%d",&a);
    printf("Roll Number: %d, Name: %s, Marks: %f\n",s[a].roll_number,s[a].name,s[a].marks);
    
    return 0;
}