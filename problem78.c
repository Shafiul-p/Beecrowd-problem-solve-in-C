//Read two integer values X and Y. Print the sum of all odd values between them.
#include <stdio.h>
int main() {
    int x, y, j = 0, i;
    scanf("%d %d", &x, &y);
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            j += i;
        }
    }
    printf("%d\n", j);

    return 0;
}
