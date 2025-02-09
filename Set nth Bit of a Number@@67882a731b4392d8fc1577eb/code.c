#include <stdio.h>

int main() {
    int num, bitPos;    
    scanf("%d %d", &num, &bitPos);
    int mask = 1 << bitPos;
    int result = num | mask;
    printf("%d\n", result);
    
    return 0;
}