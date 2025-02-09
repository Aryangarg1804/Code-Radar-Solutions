#include <stdio.h>

struct Employee{
    int employee_id;
    char name[100];
    float salery;
};
int main() {
     int n;
    scanf("%d",&n);
    struct Employee e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].employee_id,e[i].name,&e[i].salery);
    }
    for(int i=0;i<n;i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",e[i].roll_number,e[i].name,(e[i].marks)/10.0);
    }
    return 0;
}