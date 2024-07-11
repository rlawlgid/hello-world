#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int count = 0;

    for (int A = 1; A <= 500; A++) {
        int A2 = A * A; // Calculate A^2 once to avoid repeated calculations

        for (int B = 1; B <= A; B++) {
            int B2 = B * B; // Calculate B^2 once to avoid repeated calculations

            if (A2 - B2 == N) {
                count++;
            }
        }
    }

    printf("The number of pairs (A, B) satisfying the condition is: %d\n", count);

    return 0;
}
