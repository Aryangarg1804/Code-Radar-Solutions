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
    for(int i=0;i<n;i++){
        if(s[i].marks>=85){
                 printf("Roll Number: %d, Name: %s, Marks: %c\n",s[i].roll_number,s[i].name,'A');
        } else if(s[i].marks>=70){
             printf("Roll Number: %d, Name: %s, Marks: %c\n",s[i].roll_number,s[i].name,'B');
        } else{
             printf("Roll Number: %d, Name: %s, Marks: %c\n",s[i].roll_number,s[i].name,'C');
        }
       
    }
    return 0;
}