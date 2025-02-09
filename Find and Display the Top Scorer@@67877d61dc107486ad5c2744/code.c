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
    float j=0;
    int k=0;
    for(int i=0;i<n;i++){
        if(j<=s[i].marks){
            j=s[i].marks;
            k=i;
        }
    }
    printf("Roll Number: %d, Name: %s, Marks:%.2f",s[k].roll_number,s[k].name,s[k].marks);
    return 0;
}