#include <stdio.h>
#include <math.h>

int findLowestSetBitPosition(int N) {
    if (N == 0)
        return -1; 
    
    return log2(N & -N); 
}

int main() {
    int N;
   
    scanf("%d", &N);

    printf("%d\n", findLowestSetBitPosition(N));

    return 0;
}
