#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        int coins = N;
        coins -= N / 5;
        printf("%d\n", coins);
    }

    return 0;
}