#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // Removed unnecessary newline

    int b[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);  // Removed extra space in scanf
    }

    if (a == 1) {
        printf("-1\n");
    } else {
        int first_max = -1000000000, second_max = -1000000000; // Very small initial values

        for (int i = 0; i < a; i++) {
            if (b[i] > first_max) {
                second_max = first_max; // Update second max before changing first max
                first_max = b[i];
            } else if (b[i] > second_max && b[i] < first_max) {
                second_max = b[i];
            }
        }

        if (second_max == -1000000000) {
            printf("-1\n");  // If there's no second largest element
        } else {
            printf("%d\n", second_max);
        }
    }

    return 0;
}
