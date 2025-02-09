#include <stdio.h>

int countTrailingZeros(int N) {
    if (N == 0)
        return 32; // Special case: all bits are 0
    
    return __builtin_ctz(N); // Built-in function to count trailing zeros
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", countTrailingZeros(N));
    return 0;
}
