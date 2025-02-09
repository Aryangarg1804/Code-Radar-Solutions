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
    int k=0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].roll_number,s[i].name,&s[i].marks);
        if(s[i].marks<=50.0){
            k++;
        }
    }
    if(k==0){
        printf("All Passed");
    } else{
        printf("Not All Passed");
    }
   
    return 0;
}