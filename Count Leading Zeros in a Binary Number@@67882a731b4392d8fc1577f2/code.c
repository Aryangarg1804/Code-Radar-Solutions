#include <stdio.h>

int countLeadingZeros(int N) {
    if (N == 0)
        return 32;
    
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if (N & (1 << i))
            break;
        count++;
    }
    return count;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", countLeadingZeros(N));
    return 0;
}
