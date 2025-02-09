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
    
    for(int i=0;i<n;i++){
        if(a==s[i].roll_number){
             printf("Roll Number: %d, Name: %s, Marks: %.2f\n",s[i].roll_number,s[i].name,s[i].marks);
             return 0;
        }
    }
    printf("Student not found");
    return 0;
}