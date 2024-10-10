#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    for (int i = 0; i < T; i++) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y); 

        if (Y * 2 >= X) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}


