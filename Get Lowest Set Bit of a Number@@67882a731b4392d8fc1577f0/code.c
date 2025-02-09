#include <stdio.h>
#include <math.h>

int findLowestSetBitPosition(int N) {
    if (N == 0)
        return -1;

    int position = 0;
    while ((N & 1) == 0) { 
        N >>= 1;
        position++;
    }
    return position;
}

int main() {
    int N;
   
    scanf("%d", &N);

    printf("%d\n", findLowestSetBitPosition(N));

    return 0;
}
