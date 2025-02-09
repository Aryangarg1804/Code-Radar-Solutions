#include <stdio.h>
#include <string.h>
struct Subscription{
    char user_name[100];
    char subscription_type[100];
    float subscription_cost;
};

int main() {
    int n;
    scanf("%d",&n);
    struct Subscription s[n];
    int u=0,v=0,w=0;
    float x=0,y=0,z=0;
    for(int i=0;i<n;i++){
        scanf("%s %s %f",s[i].user_name,s[i].subscription_type,&s[i].subscription_cost);
        if(strcmp(s[i].subscription_type,"Basic")==0){
            u++;
            x+=s[i].subscription_cost;
        } else if(strcmp(s[i].subscription_type,"Standard")==0){
            v++;
            y+=s[i].subscription_cost;
        } else{
            w++;
            z+=s[i].subscription_cost;
        }
    }
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f",u,x,v,y,w,z);

    return 0;
}