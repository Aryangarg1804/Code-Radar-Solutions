#include <stdio.h>

struct Day{
    char Day_name[100];
    float temperature;
};

int main() {
    
    struct Day d[7];
    float k=0;
    for(int i=0;i<7;i++){
        scanf("%s %f",d[i].Day_name,%d[i].temperature);
        k+=d[i].temperature;
    }
    printf("Average Temperature: %.2f",k/7);
    return 0;
}