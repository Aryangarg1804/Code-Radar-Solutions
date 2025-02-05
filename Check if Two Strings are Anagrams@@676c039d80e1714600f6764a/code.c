#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int freq[256] = {0}; 
    
    scanf("%s %s", a, b);

    if (strlen(a) != strlen(b)) {
        printf("No");
        return 0;
    }

   
    for (int i = 0; a[i] != '\0'; i++) {
        freq[(int)a[i]]++; 
        freq[(int)b[i]]--; 
    }


    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}
