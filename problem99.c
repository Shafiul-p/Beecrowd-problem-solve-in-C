//Read an integer N that is the number of test cases. Each test case is a line containing two integer numbers X and Y. Print the sum of all odd values between them, not including X and Y.

#include <stdio.h>

int main() {
    int i, j, n, x, y;
    scanf("%d", &n);
    int a[n];

    for(i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);
        int s = 0;
        
        // Ensure x is less than y
        if (x > y) {
            int t = x;
            x = y;
            y = t;
        }

        // Calculate sum of odd numbers between x and y (exclusive)
        for (j = x + 1; j < y; j++) {
            if (j % 2 != 0) {
                s += j;
            }
        }
        a[i] = s;
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
