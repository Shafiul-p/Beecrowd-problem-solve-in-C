/*Read an undetermined number of pairs values M and N
 (stop when any of these values is less or equal to zero). 
 For each pair, print the sequence from the smallest to the biggest 
 (including both) and the sum of consecutive integers between them 
 (including both).*/
 #include <stdio.h>

int main() {
    int M, N, i;

    // Loop until either M or N is less than or equal to zero
    while (1) {
        scanf("%d%d", &M, &N);
        if (M <= 0 || N <= 0) {
            break;
        }

        int sum = 0;
        if (M > N) {
            // Swap M and N to ensure M is always less than or equal to N
            int temp = M;
            M = N;
            N = temp;
        }

        // Print the sequence and calculate the sum
        for (i = M; i <= N; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}
