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
    float a[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&s[i].roll_number,s[i].name,&s[i].marks);
        a[i]=s[i].marks;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<=a[j]){
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==s[j].marks){
                printf("Roll Number: %d, Name: %s, Marks: %.2f\n",s[j].roll_number,s[j].name,s[j].marks);
                break;
            }
        }
    }
    return 0;
}