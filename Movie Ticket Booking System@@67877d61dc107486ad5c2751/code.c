#include <stdio.h>
#include <string.h>
struct MovieTicket{
    char movie_name[100];
    char Ticket_Type[100];
    float ticket_price;
};

int main() {
    int n;
    scanf("%d",&n);
    struct MovieTicket m[n];
    float x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        scanf("%s %s %f",m[i].movie_name,m[i].Ticket_Type,&m[i].ticket_price);
        if(strcmp(v[i].Ticket_Type,"Standard")==0){
            x+=v[i].ticket_price;
        } else if(strcmp(v[i].Ticket_Type,"Premium")==0){
            y+=v[i].ticket_price;
        } else{
            z+=v[i].ticket_price;
        }
    }
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f",x,y,z);

    return 0;
}