#include <stdio.h>

int main() {
    int T, N, A, B, total_duration;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d %d", &N, &A, &B);


        int even_duration = (N / 2) * A;

       
        int odd_duration = ((N + 1) / 2) * B;

        total_duration = even_duration + odd_duration;

        printf("%d\n", total_duration);
    }

    return 0;
}