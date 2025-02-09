#include <stdio.h>
#include <string.h>
struct Vehicle{
    char Vehicle_number[100];
    char Vehicle_Type[100];
    float toll_number;
};

int main() {
    int n;
    scanf("%d",&n);
    struct Vehicle v[n];
    float x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        scanf("%s %s %f",v[i].Vehicle_number,v[i].Vehicle_Type,&v[i].toll_number);
        if(strcmp(v[i].Vehicle_Type,"Car")==0){
            x+=v[i].toll_number;
        } else if(strcmp(v[i].Vehicle_Type,"Truck")==0){
            y+=v[i].toll_number;
        } else{
            z+=v[i].toll_number;
        }
    }
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f",x,y,z);

    return 0;
}