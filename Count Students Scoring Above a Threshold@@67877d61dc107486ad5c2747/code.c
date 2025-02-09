#include<stdio.h>
struct student{
    int roll_number;
    char name[100];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].roll_number,s[i].name,&s[i].marks);
    }
    float a;
    scanf("%f",&a);
    int k=0;
    for(int i=0;i<n;i++){
        if(a<=s[i].marks){
            k++;
        }
    }
    printf("Count of students scoring above %.2f: %d",a,k);
    return 0;
}