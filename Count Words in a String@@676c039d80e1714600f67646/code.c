#include <stdio.h>

int main() {
    char ch[100];
    int count = 0;
    while ((ch = getchar()) != '\n') { 
        if (ch == ' ') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}