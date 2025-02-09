#include <stdio.h>

int main() {
    unsigned int N;
    scanf("%u", &N); 

    if (N & (1 << 31)) 
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
