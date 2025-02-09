#include <stdio.h>
#include <math.h>
int main() {
    int N;
    
    scanf("%d", &N);
    if (N == 0)
        printf("%d",-1); 
    else{
        printf("%d\n",log2(N & -N) );
    }
  
    

    return 0;
}
