#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b[a];  // Using VLA (assuming valid in your environment)

    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }

    int x = 0;
    for (int i = 0; i < a; i++) {
        int y = (b[i] < 0) ? -b[i] : b[i];  // Take absolute value without modifying original array
        int z = 0, temp = y;

        while (temp != 0) {
            int j = temp % 10;
            z = z * 10 + j;
            temp /= 10;
        }

        if (z == y) {
            x++;
        }
    }

    printf("%d\n", x);
    return 0;
}
