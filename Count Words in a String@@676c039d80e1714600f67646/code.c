#include <stdio.h>

int main() {
    char ch;
    int count = 0;
    while ((ch = getchar()) != '\0') { 
        if (ch == ' ') {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}