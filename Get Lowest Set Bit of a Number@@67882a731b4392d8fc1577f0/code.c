#include <stdio.h>
#include <math.h>

int findLowestSetBitPosition(int N) {
    if (N == 0)
        return -1; 
    
    return log2(N & -N); 
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    if (N == 0)
        printf("%d",-1); 
    else{
        printf("%d\n",log2(N & -N) );
    }
  
    

    return 0;
}
