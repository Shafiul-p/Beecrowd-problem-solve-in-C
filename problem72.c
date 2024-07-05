/*Read an integer N. This N will be the number of integer numbers X that will be read.

Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.*/
#include <stdio.h>

int main() {
    int N, X;
    int inInterval = 0, outInterval = 0;

    // Reading the number of integers to be processed
    scanf("%d", &N);

    // Loop to read each integer and count based on the interval
    for (int i = 0; i < N; i++) {
        scanf("%d", &X);
        if (X >= 10 && X <= 20) {
            inInterval++;
        } else {
            outInterval++;
        }
    }

    // Printing the results
    printf("%d in\n", inInterval);
    printf("%d out\n", outInterval);

    return 0;
}
chat