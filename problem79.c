/*Read an integer N, which represents the number of following test cases.
 Each test case consists of three floating-point numbers, each one with one digit after the decimal point.
  Print the weighted average for each of these sets of three numbers, considering that the first number 
  has weight 2, the second number has weight 3 and the third number has weight 5.*/
#include <stdio.h>

int main() {
    int n, i;
    float b1, b2, b3, b;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        float a1, a2, a3;
        scanf("%f %f %f", &a1, &a2, &a3);

        b1 = a1 * 2;
        b2 = a2 * 3;
        b3 = a3 * 5;
        b = (b1 + b2 + b3) / 10;
        printf("%.1f\n", b);
    }

    return 0;
}
