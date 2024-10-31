#include <stdio.h>

int main() {
    int T, P, Q, total_serves;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &P, &Q);

      
        total_serves = P + Q;

       
        if (total_serves % 4 == 0 || total_serves % 4 == 1) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }

    return 0;
}